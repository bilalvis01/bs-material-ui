module Make = () => {
  [@bs.deriving abstract]
  type makeProps = {
    [@bs.optional] className: string,
  };
};

module Menu = {
  include Make();
  [@bs.module "@material-ui/icons/Menu"]
  external make: React.component(makeProps) = "default"; 
};
module Mail = {
  include Make();
  [@bs.module "@material-ui/icons/Mail"]
  external make: React.component(makeProps) = "default";
};
module Notifications = {
  include Make();
  [@bs.module "@material-ui/icons/Notifications"]
  external make: React.component(makeProps) = "default";
};
module AccountCircle = {
  include Make();
  [@bs.module "@material-ui/icons/AccountCircle"]
  external make: React.component(makeProps) = "default";
};
module Search = {
  include Make();
  [@bs.module "@material-ui/icons/Search"]
  external make: React.component(makeProps) = "default";
};
module MoreVert = {
  include Make();
  [@bs.module "@material-ui/icons/MoreVert"]
  external make: React.component(makeProps) = "default";
};
module MoveToInbox = {
  include Make();
  [@bs.module "@material-ui/icons/MoveToInbox"]
  external make: React.component(makeProps) = "default";
};
module ChevronLeft = {
  include Make();
  [@bs.module "@material-ui/icons/ChevronLeft"]
  external make: React.component(makeProps) = "default";
};
module Dashboard = {
  include Make();
  [@bs.module "@material-ui/icons/Dashboard"]
  external make: React.component(makeProps) = "default";
};
module ShoppingCart = {
  include Make();
  [@bs.module "@material-ui/icons/ShoppingCart"]
  external make: React.component(makeProps) = "default";
};
module People = {
  include Make();
  [@bs.module "@material-ui/icons/People"]
  external make: React.component(makeProps) = "default";
};
module BarChart = {
  include Make();
  [@bs.module "@material-ui/icons/BarChart"]
  external make: React.component(makeProps) = "default";
};
module Layers = {
  include Make();
  [@bs.module "@material-ui/icons/Layers"]
  external make: React.component(makeProps) = "default";
};
