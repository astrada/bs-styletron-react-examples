module Component = {
  [@bs.deriving abstract]
  type props = {
    children: array(ReasonReact.reactElement),
    className: string,
    href: string
  };

  let component = ReasonReact.statelessComponent("Component");
  let make = (~props, _children) => {
    ...component,
    render: _self =>
      <a className={props->classNameGet} href={props->hrefGet}>
        (ReasonReact.array(props->childrenGet))
      </a>
  };
};

let make = (~href, children) =>
  Styletron.React.makeStyledComponent(
    ~rule=
      _props =>
        Css.(
          style([
            flexGrow(1),
            flexBasis(rem(10.)),
            backgroundColor(salmon),
            borderStyle(solid),
            borderWidth(px(1))
          ])
        ),
    ~component=Component.component,
    ~make=Component.make,
    ~props=Component.props(~children=[||], ~className="", ~href),
    children
  );

