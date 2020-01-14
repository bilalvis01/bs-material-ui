open Materialui.Styles;

let theme = Theme.(make(options(
  ~palette=Palette.options(
    ~primary=PaletteColor.optionsSimple(
      ~main="#556cd6",
      ()
    ),
    ~secondary=PaletteColor.optionsSimple(
      ~main="#19857b",
      ()
    ),
    ~error=PaletteColor.optionsSimple(
      ~main=Materialui.Colors.(red->getA400), 
      ()
    ),
    ~background=Background.make(
      ~default="#fff",
      ()
    ),
    ()
  ),
  ()
)));