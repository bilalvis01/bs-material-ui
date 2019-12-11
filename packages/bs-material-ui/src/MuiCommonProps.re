type domInnerHtml = {__html: string};
type anchorOrigin('a, 'b) = {
  horizontal: 'a,
  vertical: 'b,
};
type anchorPosition = {
  left: int,
  top: int,
};
type transformOrigin('a, 'b) = {
  horizontal: 'a,
  vertical: 'b,
};

module TransitionDuration = {
  type t;
  external transitionDuration: int => t = "%identity";
  let transitionDurationAuto: t = [%raw "'auto'"];
  [@bs.obj]
  external transitionDurationObj: (
    ~enter: int=?,
    ~exit: int=?,
    unit
  ) => t = "";
};