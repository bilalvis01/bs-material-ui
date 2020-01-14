type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~body2: string=?,
  ~body1: string=?,
  ~caption: string=?,
  ~button: string=?,
  ~h1: string=?,
  ~h2: string=?,
  ~h3: string=?,
  ~h4: string=?,
  ~h5: string=?,
  ~h6: string=?,
  ~subtitle1: string=?,
  ~subtitle2: string=?,
  ~overline: string=?,
  ~srOnly: string=?,
  ~alignLeft: string=?,
  ~alignCenter: string=?,
  ~alignRight: string=?,
  ~alignJustify: string=?,
  ~noWrap: string=?,
  ~gutterBottom: string=?,
  ~paragraph: string=?,
  ~colorInherit: string=?,
  ~colorPrimary: string=?,
  ~colorSecondary: string=?,
  ~colorTextPrimary: string=?,
  ~colorTextSecondary: string=?,
  ~colorError: string=?,
  ~displayInline: string=?,
  ~displayBlock: string=?,
  unit
) => 
t = 
"";