[@bs.module "@material-ui/core/Box"] [@react.component]
external make: (
  ~children: React.element=?,
  ~clone: bool=?,
  ~component: string=?,

  // borders
  ~border: string=?,
  ~borderTop: string=?,
  ~borderLeft: string=?,
  ~borderRight: string=?,
  ~borderBottom: string=?,
  ~borderColor: string=?,
  ~borderRadius: string=?,

  // display
  ~displayPrint: string=?,
  ~displayRaw: string=?,
  ~overflow: string=?,
  ~textOverflow: string=?,
  ~visibility: string=?,
  ~whiteSpace: string=?,

  // flexbox
  ~flexDirection: string=?,
  ~flexWrap: string=?,
  ~justifyContent: string=?,
  ~alignItems: string=?,
  ~order: string=?,
  ~flex: string=?,
  ~flexGrow: string=?,
  ~flexShrink: string=?,
  ~alignSelf: string=?,

  // palette
  ~color: string=?,
  ~bgColor: string=?,

  // position
  ~position: string=?,
  ~zIndex: string=?,
  ~top: string=?,
  ~right: string=?,
  ~bottom: string=?,
  ~left: string=?,

  // shadows
  ~boxShadow: string=?,

  // sizing
  ~width: string=?,
  ~maxWidth: string=?,
  ~minWidth: string=?,
  ~height: string=?,
  ~maxHeight: string=?,
  ~minHeight: string=?,

  // spacing
  ~m: string=?,
  ~mt: string=?,
  ~mr: string=?,
  ~mb: string=?,
  ~ml: string=?,
  ~mx: string=?,
  ~my: string=?,
  ~p: string=?,
  ~pt: string=?,
  ~pr: string=?,
  ~pb: string=?,
  ~pl: string=?,
  ~px: string=?,
  ~py: string=?,

  // typography
  ~fontFamily: string=?,
  ~fontSize: string=?,
  ~fontStyle: string=?,
  ~fontWeight: string=?,
  ~letterSpacing: string=?,
  ~lineHeight: string=?,
  ~textAlign: string=?,
) => React.element = "default";