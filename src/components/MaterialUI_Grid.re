[@bs.deriving abstract]
type makeClasses = {
  [@bs.optional] 
  root: string,
  [@bs.optional] 
  container: string,
  [@bs.optional] 
  item: string,
  [@bs.optional] 
  zeroMinWidth: string,
  [@bs.optional] [@bs.as "direction-xs-column"] 
  directionXSColumn: string,
  [@bs.optional] [@bs.as "direction-xs-column-reverse"] 
  directionXSColumnReverse: string,
  [@bs.optional] [@bs.as "direction-xs-row-reverse"] 
  directionXSRowReverse: string,
  [@bs.optional] [@bs.as "wrap-xs-nowrap"] 
  wrapXSNowrap: string,
  [@bs.optional] [@bs.as "wrap-xs-wrap-reverse"] 
  wrapXSWrapReverse: string,
  [@bs.optional] [@bs.as "align-items-xs-center"]
  alignItemsXSCenter: string,
  [@bs.optional] [@bs.as "align-items-xs-flex-start"]
  alignItemsXSFlexStart: string,
  [@bs.optional] [@bs.as "align-items-xs-flex-end"]
  alignItemsXSFlexEnd: string,
  [@bs.optional] [@bs.as "align-items-xs-baseline"]
  alignItemXSBaseline: string,
  [@bs.optional] [@bs.as "align-content-xs-center"]
  alignContentXSCenter: string,
  [@bs.optional] [@bs.as "align-content-xs-flex-start"]
  alignContentXSFlexStart: string,
  [@bs.optional] [@bs.as "align-content-xs-flex-end"]
  alignContentXSFlexEnd: string,
  [@bs.optional] [@bs.as "align-content-xs-space-between"]
  alignContentXSSpaceBetween: string,
  [@bs.optional] [@bs.as "align-content-xs-space-around"]
  alignContentXSSpaceAround: string,
  [@bs.optional] [@bs.as "justify-xs-center"]
  justifyXSCenter: string,
  [@bs.optional] [@bs.as "justify-xs-flex-end"]
  justifyXSFlexEnd: string,
  [@bs.optional] [@bs.as "justify-xs-space-between"]
  justifyXSSpaceBetween: string,
  [@bs.optional] [@bs.as "justify-xs-space-around"]
  justifyXSSpaceAround: string,
  [@bs.optional] [@bs.as "justify-xs-space-evenly"]
  justifyXSSpaceEvenly: string,
  [@bs.optional] [@bs.as "spacing-xs-1"]
  spacingXS1: string,
  [@bs.optional] [@bs.as "spacing-xs-2"]
  spacingXS2: string,
  [@bs.optional] [@bs.as "spacing-xs-3"]
  spacingXS3: string,
  [@bs.optional] [@bs.as "spacing-xs-4"]
  spacingXS4: string,
  [@bs.optional] [@bs.as "spacing-xs-5"]
  spacingXS5: string,
  [@bs.optional] [@bs.as "spacing-xs-6"]
  spacingXS6: string,
  [@bs.optional] [@bs.as "spacing-xs-7"]
  spacingXS7: string,
  [@bs.optional] [@bs.as "spacing-xs-8"]
  spacingXS8: string,
  [@bs.optional] [@bs.as "spacing-xs-9"]
  spacingXS9: string,
  [@bs.optional] [@bs.as "spacing-xs-10"]
  spacingXS10: string,
  [@bs.optional] [@bs.as "grid-xs-auto"]
  gridXSAuto: string,
  [@bs.optional] [@bs.as "grid-xs-true"]
  gridXSTrue: string,
  [@bs.optional] [@bs.as "grid-xs-1"]
  gridXS1: string,
  [@bs.optional] [@bs.as "grid-xs-2"]
  gridXS2: string,
  [@bs.optional] [@bs.as "grid-xs-3"]
  gridXS3: string,
  [@bs.optional] [@bs.as "grid-xs-4"]
  gridXS4: string,
  [@bs.optional] [@bs.as "grid-xs-5"]
  gridXS5: string,
  [@bs.optional] [@bs.as "grid-xs-6"]
  gridXS6: string,
  [@bs.optional] [@bs.as "grid-xs-7"]
  gridXS7: string,
  [@bs.optional] [@bs.as "grid-xs-8"]
  gridXS8: string,
  [@bs.optional] [@bs.as "grid-xs-9"]
  gridXS9: string,
  [@bs.optional] [@bs.as "grid-xs-10"]
  gridXS10: string,
  [@bs.optional] [@bs.as "grid-xs-11"]
  gridXS11: string,
  [@bs.optional] [@bs.as "grid-xs-12"]
  gridXS12: string,
};
type classes = makeClasses;
type size;

module Size = {
  let auto: size = [%raw "'auto'"];
  [@bs.val]
  external on: size = "true"; 
  [@bs.val]
  external off: size = "false";
  external size: int => size = "%identity";
};

[@bs.module "@material-ui/core/Grid"] [@react.component]
external make: (
  ~children: React.element=?,

  ~alignContent: string=?,
  ~alignItems: string=?,
  ~classes: classes=?,
  ~component: string=?,
  ~container: bool=?,
  ~direction: string=?,
  ~item: bool=?,
  ~justify: string=?,
  ~lg: size=?,
  ~md: size=?,
  ~sm: size=?,
  ~spacing: int=?,
  ~wrap: string=?,
  ~xl: size=?,
  ~xs: size=?,
  ~zeroMinWidth: bool=?,

  ~ref: ReactDOMRe.domRef=?,
) => React.element = "default";