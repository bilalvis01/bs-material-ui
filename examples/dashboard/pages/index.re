module Copyright = {
  [@react.component]
  let make = () => {
    <MaterialUI.Typography variant="body2" color="textSecondary" align="center">
      {React.string("Copyright @")}
      <MaterialUI.Link color="inherit" href="https://material-ui.com">
       {React.string(" Bilal Visual Digital ")}
      </MaterialUI.Link>
      {Js.Date.make()
        ->Js.Date.getFullYear
        ->Belt.Float.toString
        ->React.string}
      {React.string(".")}
    </MaterialUI.Typography>
  };
};

let drawerWidth = "240px";

[@bs.deriving abstract]
type styles('a) = {
  root: 'a,
  toolbar: 'a,
  toolbarIcon: 'a,
  appBar: 'a,
  appBarShift: 'a,
  menuButton: 'a,
  menuButtonHidden: 'a,
  title: 'a,
  drawerPaper: 'a,
  drawerPaperClose: 'a,
  appBarSpacer: 'a,
  content: 'a,
  container: 'a,
  paper: 'a,
  fixedHeigt: 'a,
};

module MUIStyles = MaterialUIStyles.Make({
  type theme = MaterialUITheme.t;
  type props = unit;
  type nonrec styles('a) = styles('a);
});

let useStyles = MUIStyles.(make(theme => {
  let zIndex_ = MaterialUITheme.getZIndex(theme);
  let transitions = MaterialUITheme.getTransitions(theme);
  let breakpoints = MaterialUITheme.getBreakpoints(theme);
  let mixins = MaterialUITheme.getMixins(theme);

  styles(
    ~root=_ => rule([
      display("flex"),
    ]),
    ~toolbar=_ => rule([
      paddingRight("24px"),
    ]),
    ~toolbarIcon=_ => mergeRule(
      MaterialUITheme.Mixins.getToolbar(mixins),
      rule([
        display("flex"),
        alignItems("center"),
        justifyContent("flex-end"),
        padding("0 8px"),
      ])
    ),
    ~appBar=_ => rule([
      zIndex(string_of_int(MaterialUITheme.ZIndex.getDrawer(zIndex_) + 1)),
      transition(
        MaterialUITheme.Transitions.createWithOptions(
          transitions,
          [|"width", "margin"|],
          MaterialUITheme.Transitions.makeOptions(
            ~easing=
              MaterialUITheme.Transitions.getEasing(transitions)
                ->MaterialUITheme.TransitionEasing.getSharp,
            ~duration=
              MaterialUITheme.Transitions.getDuration(transitions)
                  ->MaterialUITheme.TransitionDuration.getLeavingScreen
                  ->string_of_int ++ "ms",
            ()
          ),
        )),
    ]),
    ~appBarShift=_ => rule([
      marginLeft(drawerWidth),
      width("calc(100% - " ++ drawerWidth ++ ")"),
      transition(
        MaterialUITheme.Transitions.createWithOptions(
          transitions,
          [|"width", "margin"|],
          MaterialUITheme.Transitions.makeOptions(
            ~easing=
              MaterialUITheme.Transitions.getEasing(transitions)
                ->MaterialUITheme.TransitionEasing.getSharp,
            ~duration=
              MaterialUITheme.Transitions.getDuration(transitions)
                ->MaterialUITheme.TransitionDuration.getEnteringScreen
                ->string_of_int ++ "ms",
            ()
          ),
        )),
    ]),
    ~menuButton=_ => rule([
      marginRight("36px"),
    ]),
    ~menuButtonHidden=_ => rule([
      display("none"),
    ]),
    ~title=_ => rule([
      flexGrow("1"),
    ]),
    ~drawerPaper=_ => rule([
      position("relative"),
      whiteSpace("nowrap"),
      width(drawerWidth),
      transition(
        MaterialUITheme.Transitions.createWithOptions(
          transitions,
          [|"width"|],
          MaterialUITheme.Transitions.makeOptions(
            ~easing=
              MaterialUITheme.Transitions.getEasing(transitions)
                ->MaterialUITheme.TransitionEasing.getSharp,
            ~duration=
              MaterialUITheme.Transitions.getDuration(transitions)
                ->MaterialUITheme.TransitionDuration.getEnteringScreen
                ->string_of_int ++ "ms",
            ()
          ),
        )),
    ]),
    ~drawerPaperClose=_ => rule([
      overflowX("hidden"),
      transition(
        MaterialUITheme.Transitions.createWithOptions(
          transitions,
          [|"width"|],
          MaterialUITheme.Transitions.makeOptions(
            ~easing=
              MaterialUITheme.Transitions.getEasing(transitions)
                ->MaterialUITheme.TransitionEasing.getSharp,
            ~duration=
              MaterialUITheme.Transitions.getDuration(transitions)
                  ->MaterialUITheme.TransitionDuration.getLeavingScreen
                  ->string_of_int ++ "ms",
            ()
          ),
        )),
      width(
        MaterialUITheme.spacing1(theme, 7)
         ->string_of_int ++ "px"),
      nesteRule(MaterialUITheme.Breakpoints.up(breakpoints, "sm"), rule([
        width(
          MaterialUITheme.spacing1(theme, 9)
            ->string_of_int ++ "px"),
      ])),
    ]),
    ~appBarSpacer=_ => MaterialUITheme.Mixins.getToolbar(mixins),
    ~content=_ => rule([
      flexGrow("1"),
      height("100vh"),
      overflow("auto"),
    ]),
    ~container=_ => rule([
      paddingTop(
        MaterialUITheme.spacing1(theme, 4)
          ->string_of_int ++ "px"),
      paddingBottom(
        MaterialUITheme.spacing1(theme, 4)
          ->string_of_int ++ "px"),
    ]),
    ~paper=_ => rule([
      padding(
        MaterialUITheme.spacing1(theme, 2)
          ->string_of_int ++ "px"),
      display("flex"),
      overflow("auto"),
      flexDirection("column"),
    ]),
    ~fixedHeigt=_ => rule([
      height("240px"),
    ]),
  )
}));

let mainListItems =
  <>
    <MaterialUI.ListItem button=true>
      <MaterialUI.ListItemIcon>
        <MaterialUIIcon.Dashboard />
      </MaterialUI.ListItemIcon>
      <MaterialUI.ListItemText primary=React.string("Dashboard") />
    </MaterialUI.ListItem>
    <MaterialUI.ListItem button=true>
      <MaterialUI.ListItemIcon>
        <MaterialUIIcon.ShoppingCart />
      </MaterialUI.ListItemIcon>
      <MaterialUI.ListItemText primary=React.string("Orders") />
    </MaterialUI.ListItem>
    <MaterialUI.ListItem button=true>
      <MaterialUI.ListItemIcon>
        <MaterialUIIcon.People />
      </MaterialUI.ListItemIcon>
      <MaterialUI.ListItemText primary=React.string("Customers") />
    </MaterialUI.ListItem>
    <MaterialUI.ListItem button=true>
      <MaterialUI.ListItemIcon>
        <MaterialUIIcon.BarChart />
      </MaterialUI.ListItemIcon>
      <MaterialUI.ListItemText primary=React.string("Reports") />
    </MaterialUI.ListItem>
    <MaterialUI.ListItem button=true>
      <MaterialUI.ListItemIcon>
        <MaterialUIIcon.Layers />
      </MaterialUI.ListItemIcon>
      <MaterialUI.ListItemText primary=React.string("Integerations") />
    </MaterialUI.ListItem>
  </>;

let secondaryListItems = 
  <>
    <MaterialUI.ListSubheader inset=true>{React.string("Saved reports")}</MaterialUI.ListSubheader>
    <MaterialUI.ListItem button=true>
      <MaterialUI.ListItemIcon>
        <MaterialUIIcon.Assignment />
      </MaterialUI.ListItemIcon>
      <MaterialUI.ListItemText primary=React.string("Dashboard") />
    </MaterialUI.ListItem>
    <MaterialUI.ListItem button=true>
      <MaterialUI.ListItemIcon>
        <MaterialUIIcon.Assignment />
      </MaterialUI.ListItemIcon>
      <MaterialUI.ListItemText primary=React.string("Orders") />
    </MaterialUI.ListItem>
    <MaterialUI.ListItem button=true>
      <MaterialUI.ListItemIcon>
        <MaterialUIIcon.Assignment />
      </MaterialUI.ListItemIcon>
      <MaterialUI.ListItemText primary=React.string("Customers") />
    </MaterialUI.ListItem>
  </>;

[@react.component]
let make = () => {
  let classes = useStyles();
  let (drawerOpen, setDrawerOpen) = React.useState(() => true);
  let handleDrawerOpen = _ => setDrawerOpen(_ => true);
  let handleDrawerClose = _ => setDrawerOpen(_ => false);
  let fixedHeightPaper = 
    Cn.make([paperGet(classes), fixedHeigtGet(classes)]);

  <div className=rootGet(classes)>
    <MaterialUI.AppBar 
      position="absolute" 
      className=Cn.make([appBarGet(classes), appBarShiftGet(classes)->Cn.ifTrue(drawerOpen)])
    >
      <MaterialUI.Toolbar className=toolbarGet(classes)>
        <MaterialUI.IconButton
          edge="start"
          color="inherit"
          ariaLabel="open drawer"
          onClick=handleDrawerOpen
          className=Cn.make([menuButtonGet(classes), menuButtonHiddenGet(classes)->Cn.ifTrue(drawerOpen)])
        >
          <MaterialUIIcon.Menu />
        </MaterialUI.IconButton>
        <MaterialUI.Typography
          component="h1"
          variant="h6"
          color="inherit"
          noWrap=true
          className=titleGet(classes)
        >
          {React.string("Dashboard")}
        </MaterialUI.Typography>
        <MaterialUI.IconButton
          color="inherit"
        >
          <MaterialUI.Badge
            badgeContent=React.string("4")
            color="secondary"
          >
            <MaterialUIIcon.Notifications />
          </MaterialUI.Badge>
        </MaterialUI.IconButton>
      </MaterialUI.Toolbar>
    </MaterialUI.AppBar>
    <MaterialUI.Drawer
      variant="permanent"
      classes=MaterialUI.Drawer.classes(
        ~paper=Cn.make([drawerPaperGet(classes), drawerPaperCloseGet(classes)->Cn.ifTrue(!drawerOpen)]),
        ()
      )
      _open=drawerOpen
    >
      <div className=toolbarIconGet(classes)>
        <MaterialUI.IconButton onClick=handleDrawerClose>
          <MaterialUIIcon.ChevronLeft />
        </MaterialUI.IconButton>
      </div>
      <MaterialUI.Divider />
      <MaterialUI.List>mainListItems</MaterialUI.List>
      <MaterialUI.Divider />
      <MaterialUI.List>secondaryListItems</MaterialUI.List>
    </MaterialUI.Drawer>
    <main className=contentGet(classes)>
      <div className=appBarSpacerGet(classes) />
      <MaterialUI.Container maxWidth="lg" className=containerGet(classes)>
        <MaterialUI.Grid container=true spacing=3>
          <MaterialUI.Grid item=true xs=12 md=8 lg=9>
            <MaterialUI.Paper className=fixedHeightPaper>
              <Chart />
            </MaterialUI.Paper>
          </MaterialUI.Grid>
          <MaterialUI.Grid item=true xs=12 md=4 lg=3>
            <MaterialUI.Paper className=fixedHeightPaper>
              <Deposits />
            </MaterialUI.Paper>
          </MaterialUI.Grid>
          <MaterialUI.Grid item=true xs=12>
            <MaterialUI.Paper className=paperGet(classes)>
              <Orders />
            </MaterialUI.Paper>
          </MaterialUI.Grid>
        </MaterialUI.Grid>
      </MaterialUI.Container>
      <Copyright />
    </main>
  </div>
};

let default = make;