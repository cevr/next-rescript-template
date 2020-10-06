module P = {
  [@react.component]
  let make = (~children) => <p className="mb-2"> children </p>;
};

let default = () =>
  <div>
    <h1 className="text-3xl font-semibold">
      "What is this about?"->ReasonReact.string
    </h1>
    <P>
      {React.string(
         {j| This is a simple template for a Next
      project using ReScript & TailwindCSS.|j},
       )}
    </P>
  </div>;
