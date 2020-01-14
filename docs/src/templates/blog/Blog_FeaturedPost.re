type data = {
  title: string,
  date: string,
  description: string,
  image: string,
  imageText: string,
};

module MaterialuiStyles = Materialui.Styles.Make({
  type props = unit;
  type theme = Materialui.Styles.theme;
  type styles('a) = {
    .
    "card": 'a,
    "cardDetails": 'a,
    "cardMedia": 'a,
  };
});

let useStyles = MaterialuiStyles.make(_ => {
  open Materialui.Styles;

  {
    "card": () => Style.(make([
      display("flex"),
    ])),
    "cardDetails": () => Style.(make([
      flex(1),
    ])),
    "cardMedia": () => Style.(make([
      width(160),
    ])),
  };
});

[@react.component]
let make = (~post: data) => {
  open MaterialuiPropsTypes;

  let classes = useStyles();

  <Materialui.Grid item=true key=post.title xs=Size.Grid._12 md=Size.Grid._6>
    <Materialui.CardActionArea component=Component.a href="#">
      <Materialui.Card className=classes##card>
        <div className=classes##cardDetails>
          <Materialui.CardContent>
            <Materialui.Typography component=Component.h2 variant=Variant.Typography.h5>
              {React.string(post.title)}
            </Materialui.Typography>
            <Materialui.Typography variant=Variant.Typography.subtitle1 color=Color.Typography.textSecondary>
              {React.string(post.date)}
            </Materialui.Typography>
            <Materialui.Typography variant=Variant.Typography.subtitle1 paragraph=true>
              {React.string(post.description)}
            </Materialui.Typography>
            <Materialui.Typography variant=Variant.Typography.subtitle1 color=Color.Typography.primary>
              {React.string("Continue reading...")}
            </Materialui.Typography>
          </Materialui.CardContent>
        </div>
        <Materialui.Hidden xsDown=true>
          <Materialui.CardMedia 
            className=classes##cardMedia
            image=post.image
            title=post.imageText
          />
        </Materialui.Hidden>
      </Materialui.Card>
    </Materialui.CardActionArea>
  </Materialui.Grid>
};