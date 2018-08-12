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
      </Container>
    </Styletron.React.Provider>
};
