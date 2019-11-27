module StylesHook = MUI.StylesHook.Make({
  type theme = MUI.Theme.t;
  type styles('a) = {
    .
    "listItem": 'a,
  };    
  type props = unit;
});
let useStyles = StylesHook.make(theme => {
  "listItem": () => MUI.Style.(make([
    marginTop(MUI.Theme.spacing1(theme, 1)->string_of_int ++ "px"),
  ])),
});

module Li = {
  [@react.component]
  let make = (
    ~children: React.element=?,
  ) => {
    let classes = useStyles();

    <li className=classes##listItem>  
      <MUI.Typography component="span">
        children
      </MUI.Typography>
    </li>
  };
};

let options = Markdown.(options(
  ~overrides=overrides([
    componentWithProps("h1", MUI.Typography.make, MUI.Typography.makeProps(
      ~gutterBottom=true,
      ~variant="h4",
      ()
    )),
    componentWithProps("h2", MUI.Typography.make, MUI.Typography.makeProps(
      ~gutterBottom=true,
      ~variant="h6",
      ()
    )),
    componentWithProps("h3", MUI.Typography.make, MUI.Typography.makeProps(
      ~gutterBottom=true,
      ~variant="subtitle1",
      ()
    )),
    componentWithProps("h4", MUI.Typography.make, MUI.Typography.makeProps(
      ~gutterBottom=true,
      ~variant="caption",
      ~paragraph=true,
      ()
    )),
    component("a", MUI.Link.make),
    component("li", Li.make),
  ]),
  ()
));


[@react.component]
let make = (
  ~children: React.element=?,
  ~className: string=?,
) => {
  <Markdown options className>
    children
  </Markdown>
};