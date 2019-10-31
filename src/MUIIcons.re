module Make = () => {
  [@bs.deriving abstract]
  type makeProps = {
    [@bs.optional] className: string,
  };
  type props = makeProps;
};

module Menu = {
  include Make();
  [@bs.module "@material-ui/icons/Menu"]
  external make: React.component(props) = "default"; 
};
module Mail = {
  include Make();
  [@bs.module "@material-ui/icons/Mail"]
  external make: React.component(props) = "default";
};
module Notifications = {
  include Make();
  [@bs.module "@material-ui/icons/Notifications"]
  external make: React.component(props) = "default";
};
module AccountCircle = {
  include Make();
  [@bs.module "@material-ui/icons/AccountCircle"]
  external make: React.component(props) = "default";
};
module Search = {
  include Make();
  [@bs.module "@material-ui/icons/Search"]
  external make: React.component(props) = "default";
};
module MoreVert = {
  include Make();
  [@bs.module "@material-ui/icons/MoreVert"]
  external make: React.component(props) = "default";
};
module MoveToInbox = {
  include Make();
  [@bs.module "@material-ui/icons/MoveToInbox"]
  external make: React.component(props) = "default";
};
module ChevronLeft = {
  include Make();
  [@bs.module "@material-ui/icons/ChevronLeft"]
  external make: React.component(props) = "default";
};
module Dashboard = {
  include Make();
  [@bs.module "@material-ui/icons/Dashboard"]
  external make: React.component(props) = "default";
};
module ShoppingCart = {
  include Make();
  [@bs.module "@material-ui/icons/ShoppingCart"]
  external make: React.component(props) = "default";
};
module People = {
  include Make();
  [@bs.module "@material-ui/icons/People"]
  external make: React.component(props) = "default";
};
module BarChart = {
  include Make();
  [@bs.module "@material-ui/icons/BarChart"]
  external make: React.component(props) = "default";
};
module Layers = {
  include Make();
  [@bs.module "@material-ui/icons/Layers"]
  external make: React.component(props) = "default";
};
module Assignment = {
  include Make();
  [@bs.module "@material-ui/icons/Assignment"]
  external make: React.component(props) = "default";
}
module LockOutlined = {
  include Make();
  [@bs.module "@material-ui/icons/LockOutlined"]
  external make: React.component(props) = "default";
}