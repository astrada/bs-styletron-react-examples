let make = (children) =>
  Styletron.React.makeStyled(
    ~base=`ReactClass(Basic.reactClass),
    ~rule=(_props) => {"background": "Fuchsia", ":after": {"content": {j|\u263A|j}}},
    ~props=Js.Obj.empty(),
    children
  );
