let make = children =>
  Styletron.React.makeStyled(
    ~base=`ReactClass(Basic.reactClass),
    ~rule=
      _props =>
        Css.(
          style([
            backgroundColor(fuchsia),
            selector(":after", [unsafe("content", {j|\u263A|j})])
          ])
        ),
    ~props=Js.Obj.empty(),
    children
  );
