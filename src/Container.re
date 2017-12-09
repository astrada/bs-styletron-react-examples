let make = (children) =>
  Styletron.React.makeStyled(
    ~base=`String("div"),
    ~rule=
      (_props) => {
        "display": "flex",
        "flexWrap": "wrap",
        "textAlign": "center",
        "fontFamily": "sans-serif",
        "lineHeight": "10",
        "color": "WhiteSmoke"
      },
    ~props=Js.Obj.empty(),
    children
  );
