type options;

[@bs.obj]
external options: (
  ~fontFamily: string=?,
  ~fontSize: string=?,
  ~fontWeight: string=?,
  ~fontStyle: string=?,
  ~color: string=?,
  ~letterSpacing: string=?,
  ~lineHeight: string=?,
  ~textTransform: string=?,
  unit
) => options = "";