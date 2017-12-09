let make = (children) =>
  Styletron.React.makeStyled(
    ~base=`ReactClass(Basic.reactClass),
    ~rule=
      (_props) => {
        "@media (min-width: 300px)": {"background": "Crimson"},
        "@media (min-width: 600px)": {"background": "Indigo"}
      },
    ~props=Js.Obj.empty(),
    children
  );
