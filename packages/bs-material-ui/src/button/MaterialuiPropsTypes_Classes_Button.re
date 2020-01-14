type t;

[@bs.obj]
external make: (
  ~root: string=?,
  ~label: string=?,
  ~text: string=?,
  ~textPrimary: string=?,
  ~textSecondary: string=?,
  ~outlined: string=?,
  ~outlinedPrimary: string=?,
  ~outlinedSecondary: string=?,
  ~contained: string=?,
  ~containedPrimary: string=?,
  ~containedSecondary: string=?,
  ~focusVisible: string=?,
  ~disabled: string=?,
  ~colorInherit: string=?,
  ~textSizeSmall: string=?,
  ~textSizeLarge: string=?,
  ~outlinedSizeSmall: string=?,
  ~outlinedSizeLarge: string=?,
  ~containedSizeSmall: string=?,
  ~containedSizeLarge: string=?,
  ~sizeSmall: string=?,
  ~sizeLarge: string=?,
  ~fullWidth: string=?,
  ~startIcon: string=?,
  ~endIcon: string=?,
  ~iconSizeSmall: string=?,
  ~iconSizeMedium: string=?,
  ~iconSizeLarge: string=?,
  unit
) => 
t = 
"";