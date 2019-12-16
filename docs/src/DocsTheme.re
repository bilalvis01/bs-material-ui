open Mui.Styles;

let theme = Theme.(make(options(
  ~palette=Palette.options(
    ~primary=PaletteColor.optionsSimple(
      ~main="#556cd6",
      ()),
    ~secondary=PaletteColor.optionsSimple(
      ~main="#19857b",
      ()),
    ~error=PaletteColor.optionsSimple(
      ~main=Mui.Colors.(red->a400), 
      ()),
    ~background=BackgroundColor.make(
      ~default="#fff",
      ()),
    ()),
  ())));