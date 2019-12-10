open MUI.Styles;

let theme = Theme.(make(options(
  ~palette=Palette.options(
    ~primary=PaletteColor.optionsSimple(
      ~main="#556cd6",
      ()),
    ~secondary=PaletteColor.optionsSimple(
      ~main="#19857b",
      ()),
    ~error=PaletteColor.optionsSimple(
      ~main=MUI.Colors.(a400(red)), 
      ()),
    ~background=BackgroundColor.make(
      ~default="#fff",
      ()),
    ()),
  ())));