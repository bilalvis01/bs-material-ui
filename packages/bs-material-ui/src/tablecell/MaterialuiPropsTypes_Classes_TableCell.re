type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~head: string=?,
  ~body: string=?,
  ~footer: string=?,
  ~sizeSmall: string=?,
  ~paddingCheckbox: string=?,
  ~paddingNone: string=?,
  ~alignLeft: string=?,
  ~alignCenter: string=?,
  ~alignRight: string=?,
  ~alignJustify: string=?,
  ~stickyHeader: string=?,
  unit
) => 
t = 
"";