type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~active: string=?,
  ~icon: string=?,
  ~iconDirectionDesc: string=?,
  ~iconDirectionAsc: string=?,
  unit
) => 
t = 
"";