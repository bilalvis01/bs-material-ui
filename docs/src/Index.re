open MUI;

let theme = Theme.(make(options(
  ~palette=Palette.make(Palette.options(
    ~primary=PaletteColorOptions.simpleColor(~main="#556cd6", ()),
    ~secondary=PaletteColorOptions.simpleColor(~main="#19857b", ()),
    ~error=PaletteColorOptions.simpleColor(~main=Colors.(getA400(red)), ()),
    ~background=Background.make(~default="#fff", ()),
    ()
  )),
  ()
)));

module Root = {
  [@react.component]
  let make = () => {
    <>
      <ThemeProvider theme>
        <App />
      </ThemeProvider>
    </>
  };
};

ReactDOMRe.renderToElementWithId(<Root />, "root");