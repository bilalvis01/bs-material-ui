open MUIStyles.Theme;

let theme = make(makeOptions(
  ~palette=Palette.make(Palette.makeOptions(
    ~primary=Palette.makePaletteColorOptions(~main="#556cd6", ()),
    ~secondary=Palette.makePaletteColorOptions(~main="#19857b", ()),
    ~error=Palette.makePaletteColorOptions(~main=MUIColors.(getA400(red)), ()),
    ~background=Background.make(~default="#fff", ()),
    ()
  )),
  ()
));