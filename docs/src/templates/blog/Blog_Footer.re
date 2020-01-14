module MaterialuiStyles = Materialui.Styles.Make({
  type props = unit;
  type theme = Materialui.Styles.theme;
  type styles('a) = {
    .
    "footer": 'a,
  };
});

let useStyles = MaterialuiStyles.make(theme => {
  open Materialui.Styles;

  {
    "footer": () => Style.(make([
      backgroundColor(Theme.palette(theme)->Palette.background->Background.paper),
      padding(Theme.spacing2(theme, 6, 0)),
    ])),
  };
});

[@react.component]
let make = (~description, ~title) => {
  open MaterialuiPropsTypes;

  let classes = useStyles();

  <footer className=classes##footer>
    <Materialui.Container maxWidth=MaxWidth.Container.lg>
      <Materialui.Typography 
        variant=Variant.Typography.h6 
        align=Align.Typography.center 
        color=Color.Typography.textSecondary 
        component=Component.p
      >
        {React.string(title)}
      </Materialui.Typography>
      <Materialui.Typography 
        variant=Variant.Typography.subtitle1 
        align=Align.Typography.center 
        color=Color.Typography.textSecondary 
        component=Component.p
      >
        {React.string(description)}
      </Materialui.Typography>
      <Blog_Copyright />
    </Materialui.Container>
  </footer>
};