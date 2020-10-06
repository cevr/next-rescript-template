type props = {msg: string};

let default = (props: props) => <div> {React.string(props.msg)} </div>;

let getServerSideProps = _ctx => {
  let props = {msg: "This page was rendered with getServerSideProps"};
  Js.Promise.resolve({"props": props});
};
