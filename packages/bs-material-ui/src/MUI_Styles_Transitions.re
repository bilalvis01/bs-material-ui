type t;
type options;
type createOptions = {
  duration: int,
  easing: string,
  delay: int,
};

[@bs.obj]
external options: (
  ~duration: MUI_Styles_TransitionDuration.t=?,
  ~easing: MUI_Styles_Easing.t=?,
  ~create: (array(string), createOptions) => string=?,
  ~getAutoHeightDuration: int => int=?,
  unit
) => options = "";
[@bs.get]
external easing: t => MUI_Styles_Easing.t = "easing"; 
[@bs.get]
external duration: t => MUI_Styles_TransitionDuration.t = "duration";
[@bs.send]
external create: (t, array(string)) => string = "create";
[@bs.send]
external createWithOptions: (t, array(string), createOptions) => string = "create";
[@bs.send]
external getAutoHeightDuration: (t, int) => int = "getAutoHeightDuration";