open Jest;

describe("properties", () => {
  open Expect;

  test("alignItems", () => 
    expect(Style.alignItems("normal")) |> toEqual(("alignItems", Style.stringToValue("normal"))));
});

describe("make style", () => {
  open Expect;

  let style = Style.(make([
    color("red"),
    display("block"),
    backgroundColor("blue"),
  ]));

  test("color", () =>
    expect(Js.Dict.get(style, "color")) |> toBe(Some(Style.stringToValue("red"))));
  test("background-color", () => 
    expect(Js.Dict.get(style, "backgroundColor")) |> toBe(Some(Style.stringToValue("blue"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) |> toBe(Some(Style.stringToValue("block"))));
});

describe("nested style", () => {
  open Expect;

  let style = Style.(make([
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
    expect(Js.Dict.get(style, "width")) |> toBe(Some(Style.stringToValue("200px"))));
  test(":hover", () =>
    expect(Js.Dict.get(style, ":hover")) 
      |> toEqual(Some(Style.(ruleToValue(make([
          width("240px")
        ]))))));
});

describe("merged style", () => {
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
    expect(Js.Dict.get(style, "color")) |> toBe(Some(Style.stringToValue("#000"))));
  test("background-color", () => 
    expect(Js.Dict.get(style, "backgroundColor")) |> toBe(Some(Style.stringToValue("#fff"))));
  test("display", () => 
    expect(Js.Dict.get(style, "display")) |> toBe(Some(Style.stringToValue("block"))));
})