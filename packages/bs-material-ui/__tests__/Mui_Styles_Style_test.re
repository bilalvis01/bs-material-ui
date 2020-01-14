open Jest;
open Materialui.Styles;

describe("make", () => {
  open Expect;

  let style = Style.(make([
    color("red"),
    display("block"),
    backgroundColor("blue"),
  ]));

  test("color", () =>
    expect(Js.Dict.get(style, "color")) 
    |> toBe(Some(Style.StyleProperty("red"))));
  test("backgroundColor", () => 
    expect(Js.Dict.get(style, "backgroundColor")) 
    |> toBe(Some(Style.StyleProperty("blue"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) 
    |> toBe(Some(Style.StyleProperty("block"))));
});

describe("nest", () => {
  open Expect;

  let style = Style.(make([
    width("200px"),
    nest(":hover", make([
      width("240px"),
    ])),
  ]));

  test("rule name", () =>
    expect(Js.Dict.keys(style)) 
    |> toBeSupersetOf([|":hover"|]));

  test("width", () => 
    expect(Js.Dict.get(style, "width")) 
    |> toBe(Some(Style.StyleProperty("200px"))));
  test(":hover", () =>
    expect(Js.Dict.get(style, ":hover")) 
    |> toEqual(Some(Style.StyleProperty({ "width": "240px" }))));
});

describe("merge", () => {
  open Expect;

  let style = Style.(merge([
    make([
      display("inline"),
      color("#000"),
    ]),
    make([
      display("block"),
      backgroundColor("#fff"),
    ]),
  ]));

  test("color", () => 
    expect(Js.Dict.get(style, "color")) 
    |> toBe(Some(Style.StyleProperty("#000"))));
  test("backgroundColor", () => 
    expect(Js.Dict.get(style, "backgroundColor")) 
    |> toBe(Some(Style.StyleProperty("#fff"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) 
    |> toBe(Some(Style.StyleProperty("block"))));
});