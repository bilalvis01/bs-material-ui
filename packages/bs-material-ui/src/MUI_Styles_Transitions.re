type t;
type options;
type createOptions = {
  duration: int,
  easing: string,
  delay: int,
};

[@bs.obj]
external options: (
  ~duration: Mui_Styles_TransitionDuration.t=?,
  ~easing: Mui_Styles_Easing.t=?,
  ~create: (array(string), createOptions) => string=?,
  ~getAutoHeightDuration: int => int=?,
  unit
) => options = "";
[@bs.get]
external easing: t => Mui_Styles_Easing.t = "easing"; 
[@bs.get]
external duration: t => Mui_Styles_TransitionDuration.t = "duration";
[@bs.send]
external create: (t, array(string)) => string = "create";
[@bs.send]
external createWithOptions: (t, array(string), createOptions) => string = "create";
[@bs.send]
external getAutoHeightDuration: (t, int) => int = "getAutoHeightDuration";