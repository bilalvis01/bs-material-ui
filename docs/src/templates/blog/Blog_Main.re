module MaterialuiStyles = Materialui.Styles.Make({
  type props = unit;
  type theme = Materialui.Styles.theme;
  type styles('a) = {
    .
    "markdown": 'a,
  };
});

let useStyles = MaterialuiStyles.make(theme => {
  open Materialui.Styles;

  {
    "markdown": () => Style.(merge([
      Theme.typography(theme)->Typography.body2,
      make([
        padding(Theme.spacing2(theme, 3, 0)),
      ]),
    ])),
  };
});

[@react.component]
let make = (~posts, ~title) => {
  open MaterialuiPropsTypes;

  let classes = useStyles();

  <Materialui.Grid item=true xs=Size.Grid._12 md=Size.Grid._8>
    <Materialui.Typography variant=Variant.Typography.h6 gutterBottom=true>
      {React.string(title)}
    </Materialui.Typography>
    <Materialui.Divider />
    {Belt.List.map(posts, post => {
      <MarkdownPost className=classes##markdown key=Js.String2.substring(post, ~from=0, ~to_=40)>
        {React.string(post)}
      </MarkdownPost>
    })
    ->Belt.List.toArray
    ->React.array}
  </Materialui.Grid>
};