let make = children =>
  Styletron.React.makeStyled(
    ~base=`String("div"),
    ~rule=
      _props =>
        BsCssCore.Css.(
          style([
            display(Flex),
            flexWrap(Wrap),
            textAlign(Center),
            fontFamily("sans-serif"),
            lineHeight(rem(10.)),
            color(whitesmoke)
          ])
        ),
    ~props=Js.Obj.empty(),
    children
  );
