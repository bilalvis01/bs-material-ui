open Jest;

describe("properties", () => {
  open Expect;

  test("alignItems", () => 
    expect(MUI.Style.alignItems("normal")) |> toEqual(("alignItems", MUI.Style.stringToValue("normal"))));
});

describe("make style", () => {
  open Expect;

  let style = MUI.Style.(make([
    color("red"),
    display("block"),
    backgroundColor("blue"),
  ]));

  test("color", () =>
    expect(Js.Dict.get(style, "color")) |> toBe(Some(MUI.Style.stringToValue("red"))));
  test("background-color", () => 
    expect(Js.Dict.get(style, "backgroundColor")) |> toBe(Some(MUI.Style.stringToValue("blue"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) |> toBe(Some(MUI.Style.stringToValue("block"))));
});

describe("nested style", () => {
  open Expect;

  let style = MUI.Style.(make([
    width("200px"),
    nest(":hover", make([
      width("240px"),
    ])),
  ]));

  test("nested rule name", () =>
    expect(Js.Dict.keys(style)) 
      |> toBeSupersetOf([|
          ":hover",
        |]));

  test("width", () => 
    expect(Js.Dict.get(style, "width")) |> toBe(Some(MUI.Style.stringToValue("200px"))));
  test(":hover", () =>
    expect(Js.Dict.get(style, ":hover")) 
      |> toEqual(Some(MUI.Style.(ruleToValue(make([
          width("240px")
        ]))))));
});

describe("merged style", () => {
  open Expect;

  let style = MUI.Style.(merge([
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
    expect(Js.Dict.get(style, "color")) |> toBe(Some(MUI.Style.stringToValue("#000"))));
  test("background-color", () => 
    expect(Js.Dict.get(style, "backgroundColor")) |> toBe(Some(MUI.Style.stringToValue("#fff"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) |> toBe(Some(MUI.Style.stringToValue("block"))));
})