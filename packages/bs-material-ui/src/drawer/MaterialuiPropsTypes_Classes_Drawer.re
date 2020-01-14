type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~docked: string=?,
  ~paper: string=?,
  ~paperAnchorLeft: string=?,
  ~paperAnchorRight: string=?,
  ~paperAnchorTop: string=?,
  ~paperAnchorBottom: string=?,
  ~paperAnchorDockedLeft: string=?,
  ~paperAnchorDockedTop: string=?,
  ~paperAnchorDockedRight: string=?,
  ~paperAnchorDockedBottom: string=?,
  ~modal: string=?,
  unit
) => 
t = 
"";