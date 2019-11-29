open Jest;
open MUI.Styles;

describe("make style", () => {
  open Expect;

  let style = Style.(make([|
    color("red"),
    display("block"),
    backgroundColor("blue"),
  |]));

  test("color", () =>
    expect(Js.Dict.get(style, "color")) |> toBe(Some(Style.stringValue("red"))));
  test("background-color", () => 
    expect(Js.Dict.get(style, "backgroundColor")) |> toBe(Some(Style.stringValue("blue"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) |> toBe(Some(Style.stringValue("block"))));
});

describe("nested style", () => {
  open Expect;

  let style = Style.(make([|
    width("200px"),
    nest(":hover", [|
      width("240px"),
    |]),
  |]));

  test("nested rule name", () =>
    expect(Js.Dict.keys(style)) 
      |> toBeSupersetOf([|
          ":hover",
        |]));

  test("width", () => 
    expect(Js.Dict.get(style, "width")) |> toBe(Some(Style.stringValue("200px"))));
  test(":hover", () =>
    expect(Js.Dict.get(style, ":hover")) 
      |> toEqual(Some(Style.(nestedStyle(make([|
          width("240px")
        |]))))));
});

describe("merged style", () => {
  open Expect;

  let style = Style.(merge([|
    make([|
      display("inline"),
      color("#000"),
    |]),
    make([|
      display("block"),
      backgroundColor("#fff"),
    |]),
  |]));

  test("color", () => 
    expect(Js.Dict.get(style, "color")) |> toBe(Some(Style.stringValue("#000"))));
  test("background-color", () => 
    expect(Js.Dict.get(style, "backgroundColor")) |> toBe(Some(Style.stringValue("#fff"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) |> toBe(Some(Style.stringValue("block"))));
})