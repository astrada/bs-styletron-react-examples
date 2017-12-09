module Component = {
  let component = ReasonReact.statelessComponent("Component");
  let make = (~href, ~className, children) => {
    ...component,
    render: (_self) => <a className href> (ReasonReact.arrayToElement(children)) </a>
  };
};

let make = (~href, children) =>
  Styletron.React.makeStyledComponent(
    ~rule=(_props) => {"flexGrow": "1", "flexBasis": "10rem", "backgroundColor": "Salmon"},
    ~component=Component.component,
    ~make=Component.make(~href),
    children
  );
