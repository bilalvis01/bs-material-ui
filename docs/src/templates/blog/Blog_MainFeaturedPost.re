type data = {
  title: string,
  description: string,
  image: string,
  imgText: string,
  linkText: string,
};

module MaterialuiStyles = Materialui.Styles.Make({
  type props = unit;
  type theme = Materialui.Styles.theme;
  type styles('a) = {
    .
    "mainFeaturedPost": 'a,
    "overlay": 'a,
    "mainFeaturedPostContent": 'a,
  };
});

let useStyles = MaterialuiStyles.make(theme => {
  open Materialui.Styles;

  {
    "mainFeaturedPost": () => Style.(make([
      position("relative"),
      backgroundColor(Theme.palette(theme)->Palette.grey->Color.get800),
      color(Theme.palette(theme)->Palette.common->Common.white),
      marginBottom(Theme.spacing1(theme, 4)),
      backgroundImage("url(https://source.unsplash.com/random)"),
      backgroundSize("cover"),
      backgroundRepeat("no-repeat"),
      backgroundPosition("center"),
    ])),
    "overlay": () => Style.(make([
      position("absolute"),
      top(0),
      bottom(0),
      left(0),
      backgroundColor("rgba(0,0,0,.3)"),
    ])),
    "mainFeaturedPostContent": () => Style.(make([
      position("relative"),
      padding(Theme.spacing1(theme, 3)),
      nest(Theme.breakpoints(theme)->Breakpoints.up(`md), make([
        padding(Theme.spacing1(theme, 6)),
        paddingRight(0),
      ])),
    ])),
  }
});

[@react.component]
let make = (~post: data) => {
  open MaterialuiPropsTypes;

  let classes = useStyles();

  <Materialui.Paper 
    className=classes##mainFeaturedPost 
    style=ReactDOMRe.Style.make(~backgroundImage="url(" ++ post.image ++ ")", ())
  >
    <img 
      style=ReactDOMRe.Style.make(~display="none", ())
      src="https://source.unsplash.com/user/erondu"
      alt=post.imgText
    />
    <div className=classes##overlay />
    <Materialui.Grid container=true>
      <Materialui.Grid item=true md=Size.Grid._6>
        <div className=classes##mainFeaturedPostContent>
          <Materialui.Typography 
            component=Component.h1 
            variant=Variant.Typography.h3 
            color=Color.Typography.inherit_ 
            gutterBottom=true
          >
            {React.string(post.title)}
          </Materialui.Typography>
          <Materialui.Typography variant=Variant.Typography.h5 color=Color.Typography.inherit_ paragraph=true>
            {React.string(post.description)}
          </Materialui.Typography>
          <Materialui.Link variant=Variant.Link.subtitle1 href="#">
            {React.string(post.linkText)}
          </Materialui.Link>
        </div>
      </Materialui.Grid>
    </Materialui.Grid>
  </Materialui.Paper>
};