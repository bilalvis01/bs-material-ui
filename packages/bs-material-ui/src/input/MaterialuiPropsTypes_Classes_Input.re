type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~formControl: string=?,
  ~focused: string=?,
  ~disabled: string=?,
  ~underline: string=?,
  ~error: string=?,
  ~multiline: string=?,
  ~fullWidth: string=?,
  ~input: string=?,
  ~inputMarginDense: string=?,
  ~inputMultiline: string=?,
  ~inputTypeSearch: string=?,
  unit
) => 
t = 
"";