[@bs.module "@material-ui/core/styles"] [@react.component]
external make: (
  ~children: React.element,
  ~theme: 'outer => 'inner,
) => React.element = "ThemeProvider";