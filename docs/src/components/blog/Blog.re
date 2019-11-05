open MUI;
open MUIIcons;

module Copyright = {
  [@react.component]
  let make = () => {
    <Typography variant="body2" color="textSecondary" align="center">
      {React.string("Copyright @")}
      <Link color="inherit" href="https://material-ui.com/">
       {React.string(" Your Website ")}
      </Link>
      {Js.Date.make()
        ->Js.Date.getFullYear
        ->Belt.Float.toString
        ->React.string}
      {React.string(".")}
    </Typography>
  };
};

module Styles = {
  [@bs.deriving {abstract: light}]
  type styles('a) = {
    toolbar: 'a,
    toolbarTitle: 'a,
    toolbarSecondary: 'a,
    toolbarLink: 'a,
    mainFeaturedPost: 'a,
    overlay: 'a,
    mainFeaturedPostContent: 'a,
    mainGrid: 'a,
    card: 'a,
    cardDetails: 'a,
    cardMedia: 'a,
    markdown: 'a,
    sidebarAboutBox: 'a,
    sidebarSection: 'a,
    footer: 'a,
  };
  include StylesHook.Make({
    type nonrec styles('a) = styles('a);
  });
  let useStyles =   make(theme => {
    let palette = Theme.palette(theme);
    let breakpoints = Theme.breakpoints(theme);
    let typography = Theme.typography(theme);

    styles(
      ~toolbar=() => Style.(make([
        borderBottom("1px solid " ++ Theme.Palette.divider(palette)),
      ])),
      ~toolbarTitle=() => Style.(make([
        flex("1"),
      ])),
      ~toolbarSecondary=() => Style.(make([
        justifyContent("space-between"),
        overflowX("auto"),
      ])),
      ~toolbarLink=() => Style.(make([
        padding(Theme.spacing1(theme, 1)->string_of_int ++ "px"),
        flexShrink("0"),
      ])),
      ~mainFeaturedPost=() => Style.(make([
        position("relative"),
        backgroundColor(Theme.Palette.(palette->grey->Theme.Color.get800)),
        color(Theme.Palette.(palette->common->Theme.Common.white)),
        marginBottom(Theme.spacing1(theme, 4)->string_of_int ++ "px"),
        backgroundImage("url(https://source.unsplash.com/user/erondu)"),
        backgroundSize("cover"),
        backgroundRepeat("no-repeat"),
        backgroundPosition("center"),
      ])),
      ~overlay=() => Style.(make([
        position("absolute"),
        top("0px"),
        bottom("0px"),
        right("0px"),
        left("0px"),
        backgroundColor("rgba(0,0,0,.3"),
      ])),
      ~mainFeaturedPostContent=() => Style.(make([
        position("relative"),
        padding(Theme.spacing1(theme, 3)->string_of_int ++ "px"),
        nest(Theme.Breakpoints.(breakpoints->up("md")), make([
          padding(Theme.spacing1(theme, 6)->string_of_int ++ "px"),
          paddingRight("0px"),
        ])),
      ])),
      ~mainGrid=() => Style.(make([
        marginTop(Theme.spacing1(theme, 3)->string_of_int ++ "px"),
      ])),
      ~card=() => Style.(make([
        display("flex"),
      ])),
      ~cardDetails=() => Style.(make([
        flex("1"),
      ])),
      ~cardMedia=() => Style.(make([
        width("160px"),
      ])),
      ~markdown=() => Style.(merge(
        Theme.Typography.(typography->body2),
        make([
          padding(Theme.spacing2(theme, 3, 0)),
        ])
      )),
      ~sidebarAboutBox=() => Style.(make([
        padding(Theme.spacing1(theme, 2)->string_of_int ++ "px"),
        backgroundColor(Theme.Palette.(palette->grey->Theme.Color.get200)),
      ])),
      ~sidebarSection=() => Style.(make([
        marginTop(Theme.spacing1(theme, 3)->string_of_int ++ "px"),
      ])),
      ~footer=() => Style.(make([
        backgroundColor(Theme.Palette.(palette->background->Theme.Background.paper)),
        marginTop(Theme.spacing1(theme, 8)->string_of_int ++ "px"),
        padding(Theme.spacing2(theme, 6, 0)),
      ])),
    )
  });
};

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
  let classes = Styles.useStyles();

  <>
    <CssBaseline />
    <Container maxWidth="lg">
      <Toolbar className=Styles.toolbar(classes)>
        <Button size="small">{React.string("Subscribe")}</Button>
        <Typography
          component="h2"
          variant="h5"
          color="inherit"
          align="center"
          noWrap=true
          className=Styles.toolbarTitle(classes)
        >
          {React.string("Blog")}
        </Typography>
        <IconButton>
          <Search />
        </IconButton>
        <Button variant="outlined" size="small">
          {React.string("Sign up")}
        </Button>
      </Toolbar>
      <Toolbar
        component="nav" variant="dense" className=Styles.toolbarSecondary(classes)
      >
        {Belt.List.map(sections, section => 
          <Link
            color="inherit"
            noWrap=true
            key=section
            variant="body2"
            href="#"
            className=Styles.toolbarLink(classes)
          >
            {React.string(section)}
          </Link>
        )
          ->Belt.List.toArray
          ->React.array}
      </Toolbar>
      <main>
        <Paper className=Styles.mainFeaturedPost(classes)>
          <img 
            style=ReactDOMRe.Style.make(~display="none", ())
            src="https://source.unsplash.com/user/erondu"
            alt="background"
          />
          <div className=Styles.overlay(classes) />
          <Grid container=true>
            <Grid item=true md=Grid.size(6)>
              <div className=Styles.mainFeaturedPostContent(classes)>
                <Typography component="h1" variant="h3" color="inherit" gutterBottom=true>
                  {React.string("Title of a longer featured blog post")}
                </Typography>
                <Typography variant="h5" color="inherit" paragraph=true>
                  {React.string("Multiple lines of text that form the lede, informing new readers quickly and
                    efficiently about what's most interesting in this post's contents.")}
                </Typography>
                <Link variant="subtitle1" href="#">
                  {React.string("Continue reading...")}
                </Link>
              </div>
            </Grid>
          </Grid>
        </Paper>
        <Grid container=true spacing=4>
          {Belt.List.map(featuredPosts, post => 
            <Grid item=true key=post.title xs=Grid.size(12) md=Grid.size(6)>
              <CardActionArea component="a" href="#">
                <Card className=Styles.card(classes)>
                  <div className=Styles.cardDetails(classes)>
                    <CardContent>
                      <Typography component="h2" variant="h5">
                        {React.string(post.title)}
                      </Typography>
                      <Typography variant="subtitle1" color="textSecondary">
                        {React.string(post.date)}
                      </Typography>
                      <Typography variant="subtitle1" paragraph=true>
                        {React.string(post.description)}
                      </Typography>
                      <Typography variant="subtitle1" color="primary">
                        {React.string("Continue reading...")}
                      </Typography>
                    </CardContent>
                  </div>
                  <Hidden xsDown=true>
                    <CardMedia 
                      className=Styles.cardMedia(classes)
                      image="https://source.unsplash.com/random"
                      title="Image title"
                    />
                  </Hidden>
                </Card>
              </CardActionArea>
            </Grid>
          )
            ->Belt.List.toArray
            ->React.array}
        </Grid>
        <Grid container=true spacing=5 className=Styles.mainGrid(classes)>
          <Grid item=true xs=Grid.size(12) md=Grid.size(8)>
            <Typography variant="h6" gutterBottom=true>
              {React.string("From the Firehose")}
            </Typography>
            <Divider />
            {Belt.List.map(posts, post => {
              <MarkdownPost className=Styles.markdown(classes) key=Js.String2.substring(post, ~from=0, ~to_=40)>
                {React.string(post)}
              </MarkdownPost>
            })
              ->Belt.List.toArray
              ->React.array}
          </Grid>
          <Grid item=true xs=Grid.size(12) md=Grid.size(4)>
            <Paper elevation=0 className=Styles.sidebarAboutBox(classes)>
              <Typography variant="h6" gutterBottom=true>
                {React.string("About")}
              </Typography>
              <Typography>
                {React.string("Etiam porta sem malesuada magna mollis euismod. Cras mattis consectetur purus sit
                  amet fermentum. Aenean lacinia bibendum nulla sed consectetur.")}
              </Typography>
            </Paper>
            <Typography variant="h6" gutterBottom=true className=Styles.sidebarSection(classes)>
              {React.string("Archives")}
            </Typography>
            {Belt.List.map(archives, archive => 
              <Link display="block" variant="body1" href="#" key=archive>
                {React.string(archive)}
              </Link>
            )
              ->Belt.List.toArray
              ->React.array}
            <Typography variant="h6" gutterBottom=true className=Styles.sidebarSection(classes)>
              {React.string("Social")}
            </Typography>
            {Belt.List.map(social, network => 
              <Link display="block" variant="body1" href="#" key=network>
                {React.string(network)}
              </Link>
            )
              ->Belt.List.toArray
              ->React.array}
          </Grid>
        </Grid>
      </main>
    </Container>
    <footer className=Styles.footer(classes)>
      <Container maxWidth="lg">
        <Typography variant="h6" align="center" color="textSecondary" component="p">
          {React.string("Footer")}
        </Typography>
        <Typography variant="subtitle1" align="center" color="textSecondary" component="p">
          {React.string("Something here to give the footer a purpose!")}
        </Typography>
        <Copyright />
      </Container>
    </footer>
  </>
};