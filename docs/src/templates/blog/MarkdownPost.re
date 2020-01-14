open MaterialuiPropsTypes;

module MaterialuiStyles = Materialui.Styles.Make({
  type theme = Materialui.Styles.Theme.t;
  type styles('a) = {
    .
    "listItem": 'a,
  };    
  type props = unit;
});

let useStyles = MaterialuiStyles.make(theme => {
  open Materialui.Styles;
  
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
      <Materialui.Typography component=Component.span>
        children
      </Materialui.Typography>
    </li>
  };
};

let options = Markdown.(options(
  ~overrides=overrides([
    componentWithProps(
      "h1", 
      Materialui.Typography.make, 
      Materialui.Typography.makeProps(
        ~gutterBottom=true,
        ~variant=Variant.Typography.h4,
        ()
      )
    ),
    componentWithProps(
      "h2", 
      Materialui.Typography.make, 
      Materialui.Typography.makeProps(
        ~gutterBottom=true,
        ~variant=Variant.Typography.h6,
        ()
      )
    ),
    componentWithProps(
      "h3", 
      Materialui.Typography.make, 
      Materialui.Typography.makeProps(
        ~gutterBottom=true,
        ~variant=Variant.Typography.subtitle1,
        ()
      )
    ),
    componentWithProps(
      "h4", 
      Materialui.Typography.make, 
      Materialui.Typography.makeProps(
        ~gutterBottom=true,
        ~variant=Variant.Typography.caption,
        ~paragraph=true,
        ()
      )
    ),
    component("a", Materialui.Link.make),
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