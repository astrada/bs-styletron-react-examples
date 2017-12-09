let reactClass =
  Styletron.React.makeStyledClass(
    ~base=`String("div"),
    ~rule=(_props) => {"flexGrow": "1", "flexBasis": "10rem", "backgroundColor": "Teal"}
  );

let make = (children) => ReasonReact.wrapJsForReason(~reactClass, ~props=Js.Obj.empty(), children);
