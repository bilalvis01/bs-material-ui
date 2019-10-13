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
}
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
}
module MoveToInbox = {
  include Make();
  [@bs.module "@material-ui/icons/MoveToInbox"]
  external make: React.component(makeProps) = "default";
}