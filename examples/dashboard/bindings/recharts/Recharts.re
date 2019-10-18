type margin;
[@bs.obj]
external makeMargin: (
  ~top: int=?,
  ~right: int=?,
  ~bottom: int=?,
  ~left: int=?,
  unit
) => margin = "";

type style;
[@bs.obj]
external makeStyle: (
  ~textAnchor: string=?,
  unit
) => style = "";

module LineChart = {
  [@bs.module "recharts"] [@react.component]
  external make: (
    ~children: React.element=?,
    ~data: array(Js.t({..}))=?,
    ~margin: margin=?,
  ) => React.element = "LineChart";
};

module ResponsiveContainer = {
  [@bs.module "recharts"] [@react.component]
  external make: (
    ~children: React.element=?,
  ) => React.element = "ResponsiveContainer";
};

module XAxis = {
  [@bs.module "recharts"] [@react.component]
  external make: (
    ~children: React.element=?,
    ~dataKey: string=?,
  ) => React.element = "XAxis";
};

module YAxis = {
  [@bs.module "recharts"] [@react.component]
  external make: (
    ~children: React.element=?,
  ) => React.element = "YAxis";
};

module Label = {
  [@bs.module "recharts"] [@react.component]
  external make: (
    ~children: React.element=?,
    ~angle: int=?,
    ~position: string=?,
    ~style: style=?,
  ) => React.element = "Label";
};

module Line = {
  [@bs.module "recharts"] [@react.component]
  external make: (
    ~_type: string=?,
    ~dataKey: string=?,
    ~stroke: string=?,
    ~dot: bool=?,
  ) => React.element = "Line";
};