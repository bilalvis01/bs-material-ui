type archive = {
  title: string,
  url: string,
};

type social = {
  name: string,
  icon: unit => React.element,
};

type data = {
  title: string,
  description: string,
  archives: list(archive),
  social: list(social),
};

module MaterialuiStyles = Materialui.Styles.Make({
  type props = unit;
  type theme = Materialui.Styles.theme;
  type styles('a) = {
    .
    "sidebarAboutBox": 'a,
    "sidebarSection": 'a, 
  };
});

let useStyles = MaterialuiStyles.make(theme => {
  open Materialui.Styles;

  {
    "sidebarAboutBox": () => Style.(make([
      padding(Theme.spacing1(theme, 2)),
      backgroundColor(Theme.palette(theme)->Palette.grey->Color.get200),
    ])),
    "sidebarSection": () => Style.(make([
      marginTop(Theme.spacing1(theme, 3)),
    ])),
  }
});

[@react.component]
let make = 
  (
    ~archives: list(archive),
    ~description: string,
    ~social: list(social),
    ~title: string,
  ) => {
    open MaterialuiPropsTypes;

    let classes = useStyles();

    <Materialui.Grid item=true xs=Size.Grid._12 md=Size.Grid._4>
      <Materialui.Paper elevation=Elevation._0 className=classes##sidebarAboutBox>
        <Materialui.Typography variant=Variant.Typography.h6 gutterBottom=true>
          {React.string(title)}
        </Materialui.Typography>
        <Materialui.Typography>
          {React.string(description)}
        </Materialui.Typography>
      </Materialui.Paper>
      <Materialui.Typography variant=Variant.Typography.h6 gutterBottom=true className=classes##sidebarSection>
        {React.string("Archives")}
      </Materialui.Typography>
      {Belt.List.map(archives, archive => 
        <Materialui.Link display=Display.Typography.block variant=Variant.Link.body1 href="#" key=archive.title>
          {React.string(archive.title)}
        </Materialui.Link>
      )
      ->Belt.List.toArray
      ->React.array}
      <Materialui.Typography variant=Variant.Typography.h6 gutterBottom=true className=classes##sidebarSection>
        {React.string("Social")}
      </Materialui.Typography>
      {Belt.List.map(social, network => 
        <Materialui.Link display=Display.Typography.block variant=Variant.Link.body1 href="#" key=network.name>
          <Materialui.Grid 
            container=true 
            direction=Direction.Grid.row
            spacing=Spacing.Grid._1
            alignItems=AlignItems.Grid.center
          >
            <Materialui.Grid item=true>
              {network.icon()}
            </Materialui.Grid>
            <Materialui.Grid item=true>{React.string(network.name)}</Materialui.Grid>
          </Materialui.Grid>
        </Materialui.Link>
      )
      ->Belt.List.toArray
      ->React.array}
    </Materialui.Grid>
  };