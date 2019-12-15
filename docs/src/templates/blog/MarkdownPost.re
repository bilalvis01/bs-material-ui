module MuiStyles = Mui.Styles.Make({
  type theme = Mui.Styles.Theme.t;
  type styles('a) = {
    .
    "listItem": 'a,
  };    
  type props = unit;
});

let useStyles = MuiStyles.make(theme => {
  open Mui.Styles;
  
  {
    "listItem": () => Style.(make([
      marginTop(Theme.spacing1(theme, 1)->px),
    ])),
  }
});

module Li = {
  [@react.component]
  let make = (
    ~children: React.element=?,
  ) => {
    let classes = useStyles();

    <li className=classes##listItem>  
      <Mui.Typography component=`span>
        children
      </Mui.Typography>
    </li>
  };
};

let options = Markdown.(options(
  ~overrides=overrides([
    componentWithProps("h1", Mui.Typography.make, Mui.Typography.makeProps(
      ~gutterBottom=true,
      ~variant=`h4,
      ())),
    componentWithProps("h2", Mui.Typography.make, Mui.Typography.makeProps(
      ~gutterBottom=true,
      ~variant=`h6,
      ())),
    componentWithProps("h3", Mui.Typography.make, Mui.Typography.makeProps(
      ~gutterBottom=true,
      ~variant=`subtitle1,
      ())),
    componentWithProps("h4", Mui.Typography.make, Mui.Typography.makeProps(
      ~gutterBottom=true,
      ~variant=`caption,
      ~paragraph=true,
      ())),
    component("a", Mui.Link.make),
    component("li", Li.make),
  ]),
  ()));


[@react.component]
let make = (
  ~children: React.element=?,
  ~className: string=?,
) => {
  <Markdown options className>
    children
  </Markdown>
};