let make = children =>
  Styletron.React.makeStyled(
    ~base=`ReactClass(Basic.reactClass),
    ~rule=
      _props =>
        Css.(
          style([
            selector(
              "@media (min-width: 300px)",
              [backgroundColor(crimson)]
            ),
            selector("@media (min-width: 600px)", [backgroundColor(indigo)])
          ])
        ),
    ~props=Js.Obj.empty(),
    children
  );
