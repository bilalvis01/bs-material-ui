[@bs.module "@material-ui/core/styles"] [@react.component]
external make: (
  ~children: React.element,
  ~theme: 'theme,
) => React.element = "ThemeProvider";