type theme('outer, 'inner) = 'outer => 'inner;

[@bs.module "@material-ui/core/styles"] [@react.component]
external make: (
  ~children: React.element,
  ~theme: theme('outer, 'inner),
) => React.element = "ThemeProvider";