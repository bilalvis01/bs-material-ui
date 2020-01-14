type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~formControl: string=?,
  ~focused: string=?,
  ~disabled: string=?,
  ~adornedStart: string=?,
  ~adornedEnd: string=?,
  ~error: string=?,
  ~marginDense: string=?,
  ~multiline: string=?,
  ~fullWidth: string=?,
  ~input: string=?,
  ~inputMarginDense: string=?,
  ~inputSelect: string=?,
  ~inputMultiline: string=?,
  ~inputTypeSearch: string=?,
  ~inputAdornedStart: string=?,
  ~inputAdornedEnd: string=?,
  ~inputHiddenLabel: string=?,
  unit
) => 
t = 
"";