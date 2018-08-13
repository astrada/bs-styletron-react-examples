let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <Styletron.React.Provider>
      <Container>
        <Basic> "Basic example" </Basic>
        <Pseudo> ":pseudo example" </Pseudo>
        <Media> "@media example" </Media>
        <Link href="https://github.com/rtsao/styletron">
          (ReasonReact.string("Link example"))
        </Link>
        <Link href="https://github.com/styletron/styletron/tree/master/packages/styletron-react">
          (ReasonReact.string("styletron-react"))
        </Link>
        <Toggle />
      </Container>
    </Styletron.React.Provider>
};
