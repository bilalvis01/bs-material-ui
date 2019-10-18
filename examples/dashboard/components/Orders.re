type data = {
  id: int,
  date: string,
  name: string,
  shipTo: string,
  paymentMethod: string,
  amount: float,
};

let createData = (id, date, name, shipTo, paymentMethod, amount) => 
  { id, date, name, shipTo, paymentMethod, amount };

let rows = [
  createData(0, "16 Mar, 2019", "Elvis Presley", "Tupelo, MS", "VISA **** 3719", 312.44),
  createData(1, "16 Mar, 2019", "Paul McCartney", "London, UK", "VISA **** 2574", 866.99),
  createData(2, "16 Mar, 2019", "Tom Scholz", "Boston, MA", "MC **** 1253", 100.81),
  createData(3, "16 Mar, 2019", "Micheal Jackson", "Gary, IN", "AMEX **** 2000", 654.39),
  createData(4, "15 Mar, 2019", "Bruce Springteen", "Long Branch, NJ", "VISA **** 5919", 212.79),
];

[@bs.deriving abstract]
type styles('a) = {
  seeMore: 'a,
};

module MUIStyles = MaterialUIStyles.Make({
  type theme = MaterialUITheme.t;
  type props = unit;
  type nonrec styles('a) = styles('a);
});

let useStyles = MUIStyles.(make(theme => {
  styles(
    ~seeMore=_ => rule([
      marginTop(
        {MaterialUITheme.spacing1(theme, 3)
         ->string_of_int} ++ "px"),
    ]),
  )
}));

[@react.component]
let make = () => {
  let classes = useStyles();

  <>
    <Title>{React.string("Recent Orders")}</Title>
    <MaterialUI.Table size="small">
      <MaterialUI.TableHead>
        <MaterialUI.TableRow>
          <MaterialUI.TableCell>{React.string("Date")}</MaterialUI.TableCell>
          <MaterialUI.TableCell>{React.string("Name")}</MaterialUI.TableCell>
          <MaterialUI.TableCell>{React.string("Ship To")}</MaterialUI.TableCell>
          <MaterialUI.TableCell>{React.string("Payment Method")}</MaterialUI.TableCell>
          <MaterialUI.TableCell align="right">{React.string("Sale Amount")}</MaterialUI.TableCell>
        </MaterialUI.TableRow>
      </MaterialUI.TableHead>
      <MaterialUI.TableBody>
        {Belt.List.map(rows, row => 
            <MaterialUI.TableRow key=string_of_int(row.id)>
              <MaterialUI.TableCell>{React.string(row.date)}</MaterialUI.TableCell>
              <MaterialUI.TableCell>{React.string(row.name)}</MaterialUI.TableCell>
              <MaterialUI.TableCell>{React.string(row.shipTo)}</MaterialUI.TableCell>
              <MaterialUI.TableCell>{React.string(row.paymentMethod)}</MaterialUI.TableCell>
              <MaterialUI.TableCell align="right">{React.string(Belt.Float.toString(row.amount))}</MaterialUI.TableCell>
            </MaterialUI.TableRow>
          )
          ->Belt.List.toArray
          ->React.array}
      </MaterialUI.TableBody>
    </MaterialUI.Table>
    <div className=seeMoreGet(classes)>
      <MaterialUI.Link color="primary" href="javascript:;">
        {React.string("See more orders")}
      </MaterialUI.Link>
    </div>
  </>
};