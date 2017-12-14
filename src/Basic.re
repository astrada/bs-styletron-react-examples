let reactClass =
  Styletron.React.makeStyledClass(~base=`String("div"), ~rule=_props =>
    Css.(style([flexGrow(1), flexBasis(rem(10.)), backgroundColor(teal)]))
  );

let make = children =>
  ReasonReact.wrapJsForReason(~reactClass, ~props=Js.Obj.empty(), children);
