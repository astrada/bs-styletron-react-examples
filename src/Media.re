let make = children =>
  Styletron.React.makeStyled(
    ~base=`ReactClass(Basic.reactClass),
    ~rule=
      _props =>
        Css.(
          style([
            selector(
              "@media (min-width: 300px)",
              [background(Color(crimson))]
            ),
            selector("@media (min-width: 600px)", [background(Color(indigo))])
          ])
        ),
    ~props=Js.Obj.empty(),
    children
  );
