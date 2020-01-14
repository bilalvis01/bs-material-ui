type t;
[@unboxed]
type property =
  | StypeProperty('a): property;

[@bs.obj]
external make: (
  // borders
  ~border: property=?,
  ~borderTop: property=?,
  ~borderLeft: property=?,
  ~borderRight: property=?,
  ~borderBottom: property=?,
  ~borderColor: property=?,
  ~borderRadius: property=?,
  // display
  ~displayPrint: property=?,
  ~displayRaw: property=?,
  ~overflow: property=?,
  ~textOverflow: property=?,
  ~visibility: property=?,
  ~whiteSpace: property=?,
  // flexbox
  ~flexDirection: property=?,
  ~flexWrap: property=?,
  ~justifyContent: property=?,
  ~alignItems: property=?,
  ~order: property=?,
  ~flex: property=?,
  ~flexGrow: property=?,
  ~flexShrink: property=?,
  ~alignSelf: property=?,
  // palette
  ~color: property=?,
  ~bgColor: property=?,
  // position
  ~position: property=?,
  ~zIndex: property=?,
  ~top: property=?,
  ~right: property=?,
  ~bottom: property=?,
  ~left: property=?,
  // shadows
  ~boxShadow: property=?,
  // sizing
  ~width: property=?,
  ~maxWidth: property=?,
  ~minWidth: property=?,
  ~height: property=?,
  ~maxHeight: property=?,
  ~minHeight: property=?,
  // property
  ~m: property=?,
  ~margin: property=?,
  ~mt: property=?,
  ~marginTop: property=?,
  ~mr: property=?,
  ~marginRight: property=?,
  ~mb: property=?,
  ~marginBottom: property=?,
  ~ml: property=?,
  ~marginLeft: property=?,
  ~mx: property=?,
  ~marginX: property=?,
  ~my: property=?,
  ~marginY: property=?,
  ~p: property=?,
  ~padding: property=?,
  ~pt: property=?,
  ~paddingTop: property=?,
  ~pr: property=?,
  ~paddingRight: property=?,
  ~pb: property=?,
  ~paddingBottom: property=?,
  ~pl: property=?,
  ~paddingLeft: property=?,
  ~px: property=?,
  ~paddingX: property=?,
  ~py: property=?,
  ~paddingY: property=?,
  // typography
  ~fontFamily: property=?,
  ~fontSize: property=?,
  ~fontStyle: property=?,
  ~fontWeight: property=?,
  ~letterSpacing: property=?,
  ~lineHeight: property=?,
  ~textAlign: property=?,
  unit
) => 
t = 
"";