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
  directionXsColumn: string,
  [@bs.optional] [@bs.as "direction-xs-column-reverse"] 
  directionXsColumnReverse: string,
  [@bs.optional] [@bs.as "direction-xs-row-reverse"] 
  directionXsRowReverse: string,
  [@bs.optional] [@bs.as "wrap-xs-nowrap"] 
  wrapXsNowrap: string,
  [@bs.optional] [@bs.as "wrap-xs-wrap-reverse"] 
  wrapXsWrapReverse: string,
  [@bs.optional] [@bs.as "align-items-xs-center"]
  alignItemsXsCenter: string,
  [@bs.optional] [@bs.as "align-items-xs-flex-start"]
  alignItemsXsFlexStart: string,
  [@bs.optional] [@bs.as "align-items-xs-flex-end"]
  alignItemsXsFlexEnd: string,
  [@bs.optional] [@bs.as "align-items-xs-baseline"]
  alignItemXsBaseline: string,
  [@bs.optional] [@bs.as "align-content-xs-center"]
  alignContentXsCenter: string,
  [@bs.optional] [@bs.as "align-content-xs-flex-start"]
  alignContentXsFlexStart: string,
  [@bs.optional] [@bs.as "align-content-xs-flex-end"]
  alignContentXsFlexEnd: string,
  [@bs.optional] [@bs.as "align-content-xs-space-between"]
  alignContentXsSpaceBetween: string,
  [@bs.optional] [@bs.as "align-content-xs-space-around"]
  alignContentXsSpaceAround: string,
  [@bs.optional] [@bs.as "justify-xs-center"]
  justifyXsCenter: string,
  [@bs.optional] [@bs.as "justify-xs-flex-end"]
  justifyXsFlexEnd: string,
  [@bs.optional] [@bs.as "justify-xs-space-between"]
  justifyXsSpaceBetween: string,
  [@bs.optional] [@bs.as "justify-xs-space-around"]
  justifyXsSpaceAround: string,
  [@bs.optional] [@bs.as "justify-xs-space-evenly"]
  justifyXsSpaceEvenly: string,
  [@bs.optional] [@bs.as "spacing-xs-1"]
  spacingXs1: string,
  [@bs.optional] [@bs.as "spacing-xs-2"]
  spacingXs2: string,
  [@bs.optional] [@bs.as "spacing-xs-3"]
  spacingXs3: string,
  [@bs.optional] [@bs.as "spacing-xs-4"]
  spacingXs4: string,
  [@bs.optional] [@bs.as "spacing-xs-5"]
  spacingXs5: string,
  [@bs.optional] [@bs.as "spacing-xs-6"]
  spacingXs6: string,
  [@bs.optional] [@bs.as "spacing-xs-7"]
  spacingXs7: string,
  [@bs.optional] [@bs.as "spacing-xs-8"]
  spacingXs8: string,
  [@bs.optional] [@bs.as "spacing-xs-9"]
  spacingXs9: string,
  [@bs.optional] [@bs.as "spacing-xs-10"]
  spacingXs10: string,
  [@bs.optional] [@bs.as "grid-xs-auto"]
  gridXsAuto: string,
  [@bs.optional] [@bs.as "grid-xs-true"]
  gridXsTrue: string,
  [@bs.optional] [@bs.as "grid-xs-1"]
  gridXs1: string,
  [@bs.optional] [@bs.as "grid-xs-2"]
  gridXs2: string,
  [@bs.optional] [@bs.as "grid-xs-3"]
  gridXs3: string,
  [@bs.optional] [@bs.as "grid-xs-4"]
  gridXs4: string,
  [@bs.optional] [@bs.as "grid-xs-5"]
  gridXs5: string,
  [@bs.optional] [@bs.as "grid-xs-6"]
  gridXs6: string,
  [@bs.optional] [@bs.as "grid-xs-7"]
  gridXs7: string,
  [@bs.optional] [@bs.as "grid-xs-8"]
  gridXs8: string,
  [@bs.optional] [@bs.as "grid-xs-9"]
  gridXs9: string,
  [@bs.optional] [@bs.as "grid-xs-10"]
  gridXs10: string,
  [@bs.optional] [@bs.as "grid-xs-11"]
  gridXs11: string,
  [@bs.optional] [@bs.as "grid-xs-12"]
  gridXs12: string,
};
type classes = makeClasses;
type gridSize;

module GridSize = {
  let auto: gridSize = [%raw "'auto'"];
  external sw: bool => gridSize = "%identity";
  external sz: int => gridSize = "%identity";
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
  ~lg: gridSize=?,
  ~md: gridSize=?,
  ~sm: gridSize=?,
  ~spacing: int=?,
  ~wrap: string=?,
  ~xl: gridSize=?,
  ~xs: gridSize=?,
  ~zeroMinWidth: bool=?,

  ~ref: ReactDOMRe.domRef=?,
) => React.element = "default";