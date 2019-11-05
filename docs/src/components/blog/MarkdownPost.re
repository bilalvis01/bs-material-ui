open MUI;

module Styles = {
  [@bs.deriving {abstract: light}]
  type styles('a) = {
    listItem: 'a,
  };
  include StylesHook.Make({
    type nonrec styles('a) = styles('a);    
  });
  let useStyles = make(theme => styles(
    ~listItem=() => Style.(make([
      marginTop(Theme.spacing1(theme, 1)->string_of_int ++ "px"),
    ])),
  ));
};

module Li = {
  [@react.component]
  let make = (
    ~children: React.element=?,
  ) => {
    let classes = Styles.useStyles();

    <li className=Styles.listItem(classes)>  
      <Typography component="span">
        children
      </Typography>
    </li>
  };
};

/*
let options = Markdown.(options(
  ~overrides=overrides([
    componentWithProps("h1", Typography.make, Typography.makeProps(
      ~gutterBottom=true,
      ~variant="h4",
      ()
    )),
    componentWithProps("h2", Typography.make, Typography.makeProps(
      ~gutterBottom=true,
      ~variant="h6",
      ()
    )),
    componentWithProps("h3", Typography.make, Typography.makeProps(
      ~gutterBottom=true,
      ~variant="subtitle",
      ()
    )),
    componentWithProps("h4", Typography.make, Typography.makeProps(
      ~gutterBottom=true,
      ~variant="caption",
      ~paragraph=true,
      ()
    )),
    component("a", Link.make),
    component("li", Li.make),
  ]),
  ()
));
*/
let options = Markdown.options(());

[@react.component]
let make = (
  ~children: React.element=?,
  ~className: string=?,
) => {
  <Markdown options className>
    children
  </Markdown>
};