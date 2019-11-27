open Jest;

describe("Expect", () => {
  open Expect;

  let style = MUI.Style.(make([
    color("red"),
    display("block"),
    backgroundColor("blue"),
  ]));

  let mergedStyle = MUI.Style.(merge([
    MUI.Style.(make([
      display("inline"),
      color("#000"),
    ])),
    MUI.Style.(make([
      display("block"),
      backgroundColor("#fff"),
    ])),
  ]));

  let nestedStyle = MUI.Style.(make([
    width("200px"),
    nest(":hover", make([
      width("240px"),
    ])),
  ]));

  test("properties", () =>
    expect(Js.Dict.keys(style)) 
      |> toBeSupersetOf([|
          "color",
          "display",
          "backgroundColor",
        |]));

  test("color", () =>
    expect(Js.Dict.get(style, "color")) |> toBe(Some(MUI.Style.stringToValue("red"))));
  test("background-color", () => 
    expect(Js.Dict.get(style, "backgroundColor")) |> toBe(Some(MUI.Style.stringToValue("blue"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) |> toBe(Some(MUI.Style.stringToValue("block"))));

  test("merged style properties", () =>
    expect(Js.Dict.keys(mergedStyle)) 
      |> toBeSupersetOf([|
          "color",
          "display",
          "backgroundColor",
        |]));

  test("merged style color", () => 
    expect(Js.Dict.get(mergedStyle, "color")) |> toBe(Some(MUI.Style.stringToValue("#000"))));
  test("merged style background-color", () => 
    expect(Js.Dict.get(mergedStyle, "backgroundColor")) |> toBe(Some(MUI.Style.stringToValue("#fff"))));
  test("merged style display", () => 
    expect(Js.Dict.get(mergedStyle, "display")) |> toBe(Some(MUI.Style.stringToValue("block"))));

  test("nested style properties", () =>
    expect(Js.Dict.keys(nestedStyle)) 
      |> toBeSupersetOf([|
          "width",
          ":hover",
        |]));

  test("nested style :hover", () =>
    expect(Js.Dict.get(nestedStyle, ":hover")) 
      |> toEqual(Some(MUI.Style.(ruleToValue(make([
          width("240px")
        ]))))));
});