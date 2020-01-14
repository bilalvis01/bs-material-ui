type section = {
  title: string,
  url: string,
};

module MaterialuiStyles = Materialui.Styles.Make({
  type props = unit;
  type theme = Materialui.Styles.theme;
  type styles('a) = {
    .
    "toolbar": 'a,
    "toolbarTitle": 'a,
    "toolbarSecondary": 'a,
    "toolbarLink": 'a,
  };
});

let useStyles = MaterialuiStyles.make(theme => {
  open Materialui.Styles;

  {
    "toolbar": () => Style.(make([
      borderBottom("1px solid " ++ Theme.palette(theme)->Palette.divider),
    ])),
    "toolbarTitle": () => Style.(make([
      flex(1),
    ])),
    "toolbarSecondary": () => Style.(make([
      justifyContent("space-between"),
      overflowX("auto"),
    ])),
    "toolbarLink": () => Style.(make([
      padding(Theme.spacing1(theme, 1)),
      flexShrink(0),
    ])),
  };
});

[@react.component]
let make = (~sections: list(section), ~title: string) => {
  open MaterialuiPropsTypes;

  let classes = useStyles();

  <>
    <Materialui.Toolbar className=classes##toolbar>
      <Materialui.Button size=Size.Button.small>{React.string("Subscribe")}</Materialui.Button>
      <Materialui.Typography
        component=Component.h2
        variant=Variant.Typography.h5
        color=Color.Typography.inherit_
        align=Align.Typography.center
        noWrap=true
        className=classes##toolbarTitle
      >
        {React.string(title)}
      </Materialui.Typography>
      <Materialui.IconButton>
        <MaterialuiIcons.Search />
      </Materialui.IconButton>
      <Materialui.Button variant=Variant.Button.outlined size=Size.Button.small>
        {React.string("Sign up")}
      </Materialui.Button>
    </Materialui.Toolbar>
    <Materialui.Toolbar
      component=Component.nav 
      variant=Variant.Toolbar.dense 
      className=classes##toolbarSecondary
    >
      {Belt.List.map(sections, section => 
        <Materialui.Link
          color=Color.Link.inherit_
          noWrap=true
          key=section.title
          variant=Variant.Link.body2
          href=section.url
          className=classes##toolbarLink
        >
          {React.string(section.title)}
        </Materialui.Link>
      )
      ->Belt.List.toArray
      ->React.array}
    </Materialui.Toolbar>
  </>
};