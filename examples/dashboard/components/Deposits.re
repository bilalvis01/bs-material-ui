[@bs.deriving abstract]
type styles('a) = {
  depositContext: 'a,
};

module MUIStyles = MaterialUIStyles.Make({
  type theme = MaterialUITheme.t;
  type props = unit;
  type nonrec styles('a) = styles('a);
});

let useStyles = MUIStyles.(make(_ => {
  styles(
    ~depositContext=_ => rule([
      flex("1"),
    ]),
  )
}));

[@react.component]
let make = () => {
  let classes = useStyles();

  <>
    <Title>{React.string("Recent Deposits")}</Title>
    <MaterialUI.Typography component="p" variant="h4">
      {React.string("$3,024.00")}
    </MaterialUI.Typography>
    <MaterialUI.Typography color="textSecondary" className=depositContextGet(classes)>
      {React.string("on 15 March, 2019")}
    </MaterialUI.Typography>
    <div>
      <MaterialUI.Link color="primary" href="javascript:;">
        {React.string("View balance")}
      </MaterialUI.Link>
    </div>
  </>
};