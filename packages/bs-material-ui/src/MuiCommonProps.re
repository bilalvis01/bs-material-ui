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
type transitionDuration;

module MakeTransitionDuration = () => {
  external transitionDuration: int => transitionDuration = "%identity";
  let transitionDurationAuto: transitionDuration = [%raw "'auto'"];
  [@bs.obj]
  external transitionDurationObj: (
    ~enter: int=?,
    ~exit: int=?,
    unit
  ) => transitionDuration = "";
};