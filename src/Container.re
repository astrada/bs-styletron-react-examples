let make = children =>
  Styletron.React.makeStyled(
    ~base=`String("div"),
    ~rule=
      _props =>
        Css.(
          style([
            display(`flex),
            flexWrap(wrap),
            textAlign(center),
            fontFamily("sans-serif"),
            lineHeight(em(3.)),
            color(whitesmoke)
          ])
        ),
    ~props=Js.Obj.empty(),
    children
  );
