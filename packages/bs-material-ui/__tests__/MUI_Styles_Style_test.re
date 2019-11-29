open Jest;
open MUI.Styles;

describe("make style", () => {
  open Expect;

  let style = Rule.(make([|
    color("red"),
    display("block"),
    backgroundColor("blue"),
  |]));

  test("color", () =>
    expect(Js.Dict.get(style, "color")) |> toBe(Some(Rule.stringValue("red"))));
  test("background-color", () => 
    expect(Js.Dict.get(style, "backgroundColor")) |> toBe(Some(Rule.stringValue("blue"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) |> toBe(Some(Rule.stringValue("block"))));
});

describe("nested style", () => {
  open Expect;

  let style = Rule.(make([|
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
    expect(Js.Dict.get(style, "width")) |> toBe(Some(Rule.stringValue("200px"))));
  test(":hover", () =>
    expect(Js.Dict.get(style, ":hover")) 
      |> toEqual(Some(Rule.(nestedRule(make([|
          width("240px")
        |]))))));
});

describe("merged style", () => {
  open Expect;

  let style = Rule.(merge([|
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
    expect(Js.Dict.get(style, "color")) |> toBe(Some(Rule.stringValue("#000"))));
  test("background-color", () => 
    expect(Js.Dict.get(style, "backgroundColor")) |> toBe(Some(Rule.stringValue("#fff"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) |> toBe(Some(Rule.stringValue("block"))));
})