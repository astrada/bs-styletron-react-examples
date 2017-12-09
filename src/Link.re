module Component = {
  let component = ReasonReact.statelessComponent("Component");
  let make = (~href, ~className, children) => {
    ...component,
    render: (_self) => <a className href> (ReasonReact.arrayToElement(children)) </a>
  };
};

let make = (~href, children) =>
  Styletron.React.makeStyledComponent(
    ~rule=(_props) => Css.(style([flexGrow(1), flexBasis(rem(10.)), backgroundColor(salmon)])),
    ~component=Component.component,
    ~make=Component.make(~href),
    children
  );
