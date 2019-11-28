module Copyright = {
  [@react.component]
  let make = () => {
    <MUI.Typography variant="body2" color="textSecondary" align="center">
      {React.string("Copyright @")}
      <MUI.Link color=`inherit_ href="https://material-ui.com/">
       {React.string(" Your Website ")}
      </MUI.Link>
      {Js.Date.make()
        ->Js.Date.getFullYear
        ->Belt.Float.toString
        ->React.string}
      {React.string(".")}
    </MUI.Typography>
  };
};

module Styles = MUI.Styles.Make({
  type theme = MUI.Styles.theme
  type styles('a) = {
    .
    "toolbar": 'a,
    "toolbarTitle": 'a,
    "toolbarSecondary": 'a,
    "toolbarLink": 'a,
    "mainFeaturedPost": 'a,
    "overlay": 'a,
    "mainFeaturedPostContent": 'a,
    "mainGrid": 'a,
    "card": 'a,
    "cardDetails": 'a,
    "cardMedia": 'a,
    "markdown": 'a,
    "sidebarAboutBox": 'a,
    "sidebarSection": 'a,
    "footer": 'a,
  };
  type props = unit;
});

let useStyles = Styles.make(theme => {
  open MUI.Styles;

  {
    "toolbar": () => Style.(make([|
      borderBottom("1px solid " ++ Theme.palette(theme)->Palette.divider),
    |])),
    "toolbarTitle": () => Style.(make([|
      flex("1"),
    |])),
    "toolbarSecondary": () => Style.(make([|
      justifyContent("space-between"),
      overflowX("auto"),
    |])),
    "toolbarLink": () => Style.(make([|
      Theme.spacing1(theme, 1)
        ->string_of_int
        ->(++)("px")
        ->padding,
      flexShrink("0"),
    |])),
    "mainFeaturedPost": () => Style.(make([|
      position("relative"),
      Theme.palette(theme) 
        ->Palette.grey
        ->Color.get800
        ->backgroundColor,
      Theme.palette(theme)
        ->Palette.common
        ->Common.white
        ->color,
      Theme.spacing1(theme, 4)
        ->string_of_int
        ->(++)("px")
        ->marginBottom,
      backgroundImage("url(https://source.unsplash.com/user/erondu)"),
      backgroundSize("cover"),
      backgroundRepeat("no-repeat"),
      backgroundPosition("center"),
    |])),
    "overlay": () => Style.(make([|
      position("absolute"),
      top("0px"),
      bottom("0px"),
      right("0px"),
      left("0px"),
      backgroundColor("rgba(0,0,0,.3)"),
    |])),
    "mainFeaturedPostContent": () => Style.(make([|
      position("relative"),
      Theme.spacing1(theme, 3)
        ->string_of_int 
        ->(++)("px")
        ->padding,
      Theme.breakpoints(theme)
        ->Breakpoints.up("md")
        ->nest([|
          Theme.spacing1(theme, 6)
            ->string_of_int 
            ->(++)("px")
            ->padding,
          paddingRight("0px"),
        |]),
    |])),
    "mainGrid": () => Style.(make([|
      Theme.spacing1(theme, 3)
        ->string_of_int
        ->(++)("px")
        ->marginTop,
    |])),
    "card": () => Style.(make([|
      display("flex"),
    |])),
    "cardDetails": () => Style.(make([|
      flex("1"),
    |])),
    "cardMedia": () => Style.(make([|
      width("160px"),
    |])),
    "markdown": () => Style.(merge([|
      Theme.typography(theme)
        ->Typography.body2,
      make([|
        Theme.spacing2(theme, 3, 0)
          ->padding,
      |])
    |])),
    "sidebarAboutBox": () => Style.(make([|
      Theme.spacing1(theme, 2)
        ->string_of_int
        ->(++)("px")
        ->padding,
      Theme.palette(theme)
        ->Palette.grey
        ->Color.get200
        ->backgroundColor,
    |])),
    "sidebarSection": () => Style.(make([|
      Theme.spacing1(theme, 3)
        ->string_of_int
        ->(++)("px")
        ->marginTop,
    |])),
    "footer": () => Style.(make([|
      Theme.palette(theme)
        ->Palette.background
        ->Background.paper
        ->backgroundColor,
      Theme.spacing1(theme, 8)
        ->string_of_int
        ->(++)("px")
        ->marginTop,
      Theme.spacing2(theme, 6, 0)
        ->padding,
    |])),
  }
});

let sections = [
  "Technology",
  "Design",
  "Culture",
  "Business",
  "Politics",
  "Opinion",
  "Sciencse",
  "Health",
  "Style",
  "Travel",
];

type post = {
  title: string,
  date: string,
  description: string,
};

let featuredPosts = [
  {
    title: "Featured post",
    date: "Nov 12",
    description: "This is a wider card with supporting text below as a natural lead in to additional content",
  },
  {
    title: "Post post",
    date: "Nov 11",
    description: "This is a wider card with supporting text below as a natural lead in to additional content",
  }
];

[@bs.module "./blog-post.1.md"]
external post1: string = "default";
[@bs.module "./blog-post.2.md"]
external post2: string = "default";
[@bs.module "./blog-post.3.md"]
external post3: string = "default";
let posts = [post1, post2, post3];

let archives = [
  "March 2020",
  "February 2020",
  "January 2020",
  "December 2019",
  "November 2019",
  "October 2019",
  "September 2019",
  "August 2019",
  "July 2019",
  "May 2019",
  "April 2019",
];

let social = ["Github", "Twitter", "Facebook"];

[@react.component]
let make = () => {
  let classes = useStyles();

  <>
    <MUI.CssBaseline />
    <MUI.Container maxWidth=MUI.Container.maxWidth("lg")>
      <MUI.Toolbar className=classes##toolbar>
        <MUI.Button size=`small>{React.string("Subscribe")}</MUI.Button>
        <MUI.Typography
          component="h2"
          variant="h5"
          color="inherit"
          align="center"
          noWrap=true
          className=classes##toolbarTitle
        >
          {React.string("Blog")}
        </MUI.Typography>
        <MUI.IconButton>
          <MUIIcons.Search />
        </MUI.IconButton>
        <MUI.Button variant=`outlined size=`small>
          {React.string("Sign up")}
        </MUI.Button>
      </MUI.Toolbar>
      <MUI.Toolbar
        component="nav" variant="dense" className=classes##toolbarSecondary
      >
        {Belt.List.map(sections, section => 
          <MUI.Link
            color=`inherit_
            noWrap=true
            key=section
            variant=`body2
            href="#"
            className=classes##toolbarLink
          >
            {React.string(section)}
          </MUI.Link>
        )
          ->Belt.List.toArray
          ->React.array}
      </MUI.Toolbar>
      <main>
        <MUI.Paper className=classes##mainFeaturedPost>
          <img 
            style=ReactDOMRe.Style.make(~display="none", ())
            src="https://source.unsplash.com/user/erondu"
            alt="background"
          />
          <div className=classes##overlay />
          <MUI.Grid container=true>
            <MUI.Grid item=true md=MUI.Grid.size(6)>
              <div className=classes##mainFeaturedPostContent>
                <MUI.Typography component="h1" variant="h3" color="inherit" gutterBottom=true>
                  {React.string("Title of a longer featured blog post")}
                </MUI.Typography>
                <MUI.Typography variant="h5" color="inherit" paragraph=true>
                  {React.string("Multiple lines of text that form the lede, informing new readers quickly and
                    efficiently about what's most interesting in this post's contents.")}
                </MUI.Typography>
                <MUI.Link variant=`subtitle1 href="#">
                  {React.string("Continue reading...")}
                </MUI.Link>
              </div>
            </MUI.Grid>
          </MUI.Grid>
        </MUI.Paper>
        <MUI.Grid container=true spacing=4>
          {Belt.List.map(featuredPosts, post => 
            <MUI.Grid item=true key=post.title xs=MUI.Grid.size(12) md=MUI.Grid.size(6)>
              <MUI.CardActionArea component="a" href="#">
                <MUI.Card className=classes##card>
                  <div className=classes##cardDetails>
                    <MUI.CardContent>
                      <MUI.Typography component="h2" variant="h5">
                        {React.string(post.title)}
                      </MUI.Typography>
                      <MUI.Typography variant="subtitle1" color="textSecondary">
                        {React.string(post.date)}
                      </MUI.Typography>
                      <MUI.Typography variant="subtitle1" paragraph=true>
                        {React.string(post.description)}
                      </MUI.Typography>
                      <MUI.Typography variant="subtitle1" color="primary">
                        {React.string("Continue reading...")}
                      </MUI.Typography>
                    </MUI.CardContent>
                  </div>
                  <MUI.Hidden xsDown=true>
                    <MUI.CardMedia 
                      className=classes##cardMedia
                      image="https://source.unsplash.com/random"
                      title="Image title"
                    />
                  </MUI.Hidden>
                </MUI.Card>
              </MUI.CardActionArea>
            </MUI.Grid>
          )
            ->Belt.List.toArray
            ->React.array}
        </MUI.Grid>
        <MUI.Grid container=true spacing=5 className=classes##mainGrid>
          <MUI.Grid item=true xs=MUI.Grid.size(12) md=MUI.Grid.size(8)>
            <MUI.Typography variant="h6" gutterBottom=true>
              {React.string("From the Firehose")}
            </MUI.Typography>
            <MUI.Divider />
            {Belt.List.map(posts, post => {
              <MarkdownPost className=classes##markdown key=Js.String2.substring(post, ~from=0, ~to_=40)>
                {React.string(post)}
              </MarkdownPost>
            })
              ->Belt.List.toArray
              ->React.array}
          </MUI.Grid>
          <MUI.Grid item=true xs=MUI.Grid.size(12) md=MUI.Grid.size(4)>
            <MUI.Paper elevation=0 className=classes##sidebarAboutBox>
              <MUI.Typography variant="h6" gutterBottom=true>
                {React.string("About")}
              </MUI.Typography>
              <MUI.Typography>
                {React.string("Etiam porta sem malesuada magna mollis euismod. Cras mattis consectetur purus sit
                  amet fermentum. Aenean lacinia bibendum nulla sed consectetur.")}
              </MUI.Typography>
            </MUI.Paper>
            <MUI.Typography variant="h6" gutterBottom=true className=classes##sidebarSection>
              {React.string("Archives")}
            </MUI.Typography>
            {Belt.List.map(archives, archive => 
              <MUI.Link display=`block variant=`body1 href="#" key=archive>
                {React.string(archive)}
              </MUI.Link>
            )
              ->Belt.List.toArray
              ->React.array}
            <MUI.Typography variant="h6" gutterBottom=true className=classes##sidebarSection>
              {React.string("Social")}
            </MUI.Typography>
            {Belt.List.map(social, network => 
              <MUI.Link display=`block variant=`body1 href="#" key=network>
                {React.string(network)}
              </MUI.Link>
            )
              ->Belt.List.toArray
              ->React.array}
          </MUI.Grid>
        </MUI.Grid>
      </main>
    </MUI.Container>
    <footer className=classes##footer>
      <MUI.Container maxWidth=MUI.Container.maxWidth("lg")>
        <MUI.Typography variant="h6" align="center" color="textSecondary" component="p">
          {React.string("Footer")}
        </MUI.Typography>
        <MUI.Typography variant="subtitle1" align="center" color="textSecondary" component="p">
          {React.string("Something here to give the footer a purpose!")}
        </MUI.Typography>
        <Copyright />
      </MUI.Container>
    </footer>
  </>
};