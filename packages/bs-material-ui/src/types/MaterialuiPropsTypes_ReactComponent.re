module type S = {
  type t;
};

module type Extension = {
  type t;
  external component: React.component('props) => t = "%identity";
};

module Extend = (Arg: S)
  : (Extension with type t := Arg.t) => {
  open Arg;
  external component: React.component('props) => t = "%identity";
};