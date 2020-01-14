open MaterialuiPropsTypes;

[@react.component]
let make = () => {
  <Materialui.Typography 
    variant=Variant.Typography.body2 
    color=Color.Typography.textSecondary 
    align=Align.Typography.center
  >
    {React.string("Copyright @")}
    <Materialui.Link color=Color.Link.inherit_ href="https://material-ui.com/">
      {React.string(" Your Website ")}
    </Materialui.Link>
    {Js.Date.make()
      ->Js.Date.getFullYear
      ->Belt.Float.toString
      ->React.string}
    {React.string(".")}
  </Materialui.Typography>
};