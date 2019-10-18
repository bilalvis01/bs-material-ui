[@react.component]
let make = (~children: React.element=?) => {
  <MaterialUI.Typography
    component="h2"
    variant="h6"
    color="primary"
    gutterBottom=true
  >
    children
  </MaterialUI.Typography>
};