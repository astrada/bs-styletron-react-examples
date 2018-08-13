/* Based on https://github.com/kay-is/react-styletron-example/blob/master/index.js */

module Container = {
  let make = children =>
    Styletron.React.makeStyled(
      ~base=`String("div"),
      ~rule=
        _props =>
          Css.(
            style([
              flexGrow(1),
              backgroundColor(wheat)
            ])
          ),
      ~props=Js.Obj.empty(),
      children
    );
};

module Indicator = {
  [@bs.deriving abstract]
  type props = {
    [@bs.as "$active"] active: bool
  };

  let make = (~active, children) =>
    Styletron.React.makeStyled(
      ~base=`String("h2"),
      ~rule=
        props =>
          Css.(
            style([
              backgroundColor(if (props->activeGet) { green } else { grey }),
              color(if (props->activeGet) { white } else { black }),
              textAlign(center)
            ])
          ),
      ~props=props(~active),
      children
    );
};

type state = {
  active: bool
};

type action =
  | Toggle;

let component = ReasonReact.reducerComponent("Toggle");

let make = _children => {
  ...component,

  initialState: () => { active: false },

  reducer: (action, state) =>
    switch (action) {
    | Toggle => ReasonReact.Update({ active: not(state.active) });
    },

  render: self => {
    <Container>
      <Indicator active={self.state.active}>
        {ReasonReact.string("Indicator")}
      </Indicator>
      <button onClick={_event => self.send(Toggle)}>
        {ReasonReact.string("Toggle!")}
      </button>
    </Container>
  }
};
