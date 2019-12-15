module Copyright = {
  [@react.component]
  let make = () => {
    <Mui.Typography variant=`body2 color=`textSecondary align=`center>
      {React.string("Copyright @")}
      <Mui.Link color=`inherit_ href="https://material-ui.com/">
       {React.string(" Your Website ")}
      </Mui.Link>
      {Js.Date.make()
        ->Js.Date.getFullYear
        ->Belt.Float.toString
        ->React.string}
      {React.string(".")}
    </Mui.Typography>
  };
};

module MuiStyles = Mui.Styles.Make({
  type theme = Mui.Styles.Theme.t;
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

let useStyles = MuiStyles.make(theme => {
  open Mui.Styles;

  {
    "toolbar": () => Style.(make([
      borderBottom("1px solid " ++ Theme.palette(theme)->Palette.divider),
    ])),
    "toolbarTitle": () => Style.(make([
      flex("1"),
    ])),
    "toolbarSecondary": () => Style.(make([
      justifyContent("space-between"),
      overflowX("auto"),
    ])),
    "toolbarLink": () => Style.(make([
      padding(Theme.spacing1(theme, 1)->px),
      flexShrink("0"),
    ])),
    "mainFeaturedPost": () => Style.(make([
      position("relative"),
      backgroundColor(Theme.palette(theme)->Palette.grey->Color.get800),
      color(Theme.palette(theme)->Palette.common->CommonColor.white),
      marginBottom(Theme.spacing1(theme, 4)->px),
      backgroundImage("url(https://source.unsplash.com/user/erondu)"),
      backgroundSize("cover"),
      backgroundRepeat("no-repeat"),
      backgroundPosition("center"),
    ])),
    "overlay": () => Style.(make([
      position("absolute"),
      top("0px"),
      bottom("0px"),
      right("0px"),
      left("0px"),
      backgroundColor("rgba(0,0,0,.3)"),
    ])),
    "mainFeaturedPostContent": () => Style.(make([
      position("relative"),
      padding(Theme.spacing1(theme, 3)->px),
      nest(Theme.breakpoints(theme)->Breakpoints.up(`md), [
        padding(Theme.spacing1(theme, 6)->px),
        paddingRight("0px"),
      ]),
    ])),
    "mainGrid": () => Style.(make([
      marginTop(Theme.spacing1(theme, 3)->px),
    ])),
    "card": () => Style.(make([
      display("flex"),
    ])),
    "cardDetails": () => Style.(make([
      flex("1"),
    ])),
    "cardMedia": () => Style.(make([
      width("160px"),
    ])),
    "markdown": () => Style.(merge([
      Theme.typography(theme)->Typography.body2,
      make([
        padding(Theme.spacing2(theme, 3, 0)),
      ])
    ])),
    "sidebarAboutBox": () => Style.(make([
      padding(Theme.spacing1(theme, 2)->px),
      backgroundColor(Theme.palette(theme)->Palette.grey->Color.get200),
    ])),
    "sidebarSection": () => Style.(make([
      marginTop(Theme.spacing1(theme, 3)->px),
    ])),
    "footer": () => Style.(make([
      backgroundColor(Theme.palette(theme)->Palette.background->BackgroundColor.paper),
      marginTop(Theme.spacing1(theme, 8)->px),
      padding(Theme.spacing2(theme, 6, 0)),
    ])),
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
    <Mui.Container maxWidth=Mui.Container.maxWidth("lg")>
      <Mui.Toolbar className=classes##toolbar>
        <Mui.Button size=`small>{React.string("Subscribe")}</Mui.Button>
        <Mui.Typography
          component=`h2
          variant=`h5
          color=`inherit_
          align=`center
          noWrap=true
          className=classes##toolbarTitle
        >
          {React.string("Blog")}
        </Mui.Typography>
        <Mui.IconButton>
          <MuiIcons.Search />
        </Mui.IconButton>
        <Mui.Button variant=`outlined size=`small>
          {React.string("Sign up")}
        </Mui.Button>
      </Mui.Toolbar>
      <Mui.Toolbar
        component=`nav variant=`dense className=classes##toolbarSecondary
      >
        {Belt.List.map(sections, section => 
          <Mui.Link
            color=`inherit_
            noWrap=true
            key=section
            variant=`body2
            href="#"
            className=classes##toolbarLink
          >
            {React.string(section)}
          </Mui.Link>
        )
          ->Belt.List.toArray
          ->React.array}
      </Mui.Toolbar>
      <main>
        <Mui.Paper className=classes##mainFeaturedPost>
          <img 
            style=ReactDOMRe.Style.make(~display="none", ())
            src="https://source.unsplash.com/user/erondu"
            alt="background"
          />
          <div className=classes##overlay />
          <Mui.Grid container=true>
            <Mui.Grid item=true md=Mui.Grid.size(6)>
              <div className=classes##mainFeaturedPostContent>
                <Mui.Typography component=`h1 variant=`h3 color=`inherit_ gutterBottom=true>
                  {React.string("Title of a longer featured blog post")}
                </Mui.Typography>
                <Mui.Typography variant=`h5 color=`inherit_ paragraph=true>
                  {React.string("Multiple lines of text that form the lede, informing new readers quickly and
                    efficiently about what's most interesting in this post's contents.")}
                </Mui.Typography>
                <Mui.Link variant=`subtitle1 href="#">
                  {React.string("Continue reading...")}
                </Mui.Link>
              </div>
            </Mui.Grid>
          </Mui.Grid>
        </Mui.Paper>
        <Mui.Grid container=true spacing=4>
          {Belt.List.map(featuredPosts, post => 
            <Mui.Grid item=true key=post.title xs=Mui.Grid.size(12) md=Mui.Grid.size(6)>
              <Mui.CardActionArea component=`a href="#">
                <Mui.Card className=classes##card>
                  <div className=classes##cardDetails>
                    <Mui.CardContent>
                      <Mui.Typography component=`h2 variant=`h5>
                        {React.string(post.title)}
                      </Mui.Typography>
                      <Mui.Typography variant=`subtitle1 color=`textSecondary>
                        {React.string(post.date)}
                      </Mui.Typography>
                      <Mui.Typography variant=`subtitle1 paragraph=true>
                        {React.string(post.description)}
                      </Mui.Typography>
                      <Mui.Typography variant=`subtitle1 color=`primary>
                        {React.string("Continue reading...")}
                      </Mui.Typography>
                    </Mui.CardContent>
                  </div>
                  <Mui.Hidden xsDown=true>
                    <Mui.CardMedia 
                      className=classes##cardMedia
                      image="https://source.unsplash.com/random"
                      title="Image title"
                    />
                  </Mui.Hidden>
                </Mui.Card>
              </Mui.CardActionArea>
            </Mui.Grid>
          )
            ->Belt.List.toArray
            ->React.array}
        </Mui.Grid>
        <Mui.Grid container=true spacing=5 className=classes##mainGrid>
          <Mui.Grid item=true xs=Mui.Grid.size(12) md=Mui.Grid.size(8)>
            <Mui.Typography variant=`h6 gutterBottom=true>
              {React.string("From the Firehose")}
            </Mui.Typography>
            <Mui.Divider />
            {Belt.List.map(posts, post => {
              <MarkdownPost className=classes##markdown key=Js.String2.substring(post, ~from=0, ~to_=40)>
                {React.string(post)}
              </MarkdownPost>
            })
              ->Belt.List.toArray
              ->React.array}
          </Mui.Grid>
          <Mui.Grid item=true xs=Mui.Grid.size(12) md=Mui.Grid.size(4)>
            <Mui.Paper elevation=`_0 className=classes##sidebarAboutBox>
              <Mui.Typography variant=`h6 gutterBottom=true>
                {React.string("About")}
              </Mui.Typography>
              <Mui.Typography>
                {React.string("Etiam porta sem malesuada magna mollis euismod. Cras mattis consectetur purus sit
                  amet fermentum. Aenean lacinia bibendum nulla sed consectetur.")}
              </Mui.Typography>
            </Mui.Paper>
            <Mui.Typography variant=`h6 gutterBottom=true className=classes##sidebarSection>
              {React.string("Archives")}
            </Mui.Typography>
            {Belt.List.map(archives, archive => 
              <Mui.Link display=`block variant=`body1 href="#" key=archive>
                {React.string(archive)}
              </Mui.Link>
            )
              ->Belt.List.toArray
              ->React.array}
            <Mui.Typography variant=`h6 gutterBottom=true className=classes##sidebarSection>
              {React.string("Social")}
            </Mui.Typography>
            {Belt.List.map(social, network => 
              <Mui.Link display=`block variant=`body1 href="#" key=network>
                {React.string(network)}
              </Mui.Link>
            )
              ->Belt.List.toArray
              ->React.array}
          </Mui.Grid>
        </Mui.Grid>
      </main>
    </Mui.Container>
    <footer className=classes##footer>
      <Mui.Container maxWidth=Mui.Container.maxWidth("lg")>
        <Mui.Typography variant=`h6 align=`center color=`textSecondary component=`p>
          {React.string("Footer")}
        </Mui.Typography>
        <Mui.Typography variant=`subtitle1 align=`center color=`textSecondary component=`p>
          {React.string("Something here to give the footer a purpose!")}
        </Mui.Typography>
        <Copyright />
      </Mui.Container>
    </footer>
  </>
};