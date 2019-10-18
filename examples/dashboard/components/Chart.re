let createData = (time, amount) => [%bs.obj { time, amount }]

let data = [|
  createData("00:00", Some(0)),
  createData("03:00", Some(300)),
  createData("06:00", Some(600)),
  createData("09:00", Some(800)),
  createData("12:00", Some(1500)),
  createData("18:00", Some(2400)),
  createData("21:00", Some(2400)),
  createData("24:00", None),
|];

[@react.component]
let make = () => {
  <>
    <Title>{React.string("Today")}</Title>
    <Recharts.ResponsiveContainer>
      <Recharts.LineChart
        data
        margin=Recharts.makeMargin(~top=16, ~right=16, ~bottom=0, ~left=24, ())
      >
        <Recharts.XAxis dataKey="time" />
        <Recharts.YAxis>
          <Recharts.Label
            angle=270
            position="left"
            style=Recharts.makeStyle(~textAnchor="middle", ())
          >
            {React.string("Sales ($)")}
          </Recharts.Label>
        </Recharts.YAxis>
        <Recharts.Line _type="monotone" dataKey="amount" stroke="#556CD6" dot=false />
      </Recharts.LineChart>
    </Recharts.ResponsiveContainer>
  </>
};