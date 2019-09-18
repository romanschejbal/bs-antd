[@bs.module "antd"] [@react.component]
external make: (~value: 'value, ~children: React.element) => React.element =
  "Radio";

module Group = {
  [@bs.module "antd"] [@bs.scope "Radio"] [@react.component]
  external make:
    (
      ~value: 'value,
      ~onChange: ReactEvent.Form.t => unit,
      ~buttonStyle: string=?,
      ~children: React.element
    ) =>
    React.element =
    "Group";
};

module Button = {
  [@bs.module "antd"] [@bs.scope "Radio"] [@react.component]
  external make: (~value: 'value, ~children: React.element) => React.element =
    "Button";
};
