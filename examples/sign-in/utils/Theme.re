let theme = MaterialUITheme.(make(makeOptions(
  ~palette=Palette.make(
    ~primary=Palette.makeSimpleColor(~main="#556cd6", ()),
    ~secondary=Palette.makeSimpleColor(~main="#19857b", ()),
    ~error=Palette.makeSimpleColor(~main=MaterialUIColors.(getA400(red)), ()),
    ~background=Palette.makeBackgroundColor(~default="#fff", ()),
    ()
  ),
  ()
)));