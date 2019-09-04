[@bs.module "antd"] [@react.component]
external make:
  (
    ~addonAfter: React.element=?,
    ~addonBefore: React.element=?,
    ~defaultValue: string=?,
    ~disabled: bool=?,
    ~id: string=?,
    ~prefix: React.element=?,
    ~size: string=?,
    ~suffix: React.element=?,
    ~_type: string=?,
    ~value: string=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~onPressEnter: ReactEvent.Form.t => unit=?,
    ~allowClear: bool=?,
    ~placeholder: string=?
  ) =>
  React.element =
  "Input";

module TextArea = {
  [@bs.module "antd"] [@bs.scope "Input"] [@react.component]
  external make:
    (
      ~autosize: bool=?, /* @todo: can be set to true|false or an object { minRows: 2, maxRows: 6 } */
      ~defaultValue: string=?,
      ~value: string=?,
      ~onPressEnter: ReactEvent.Form.t => unit=?,
      ~children: string=?,
      ~placeholder: string=?
    ) =>
    React.element =
    "TextArea";
};

module Search = {
  [@bs.module "antd"] [@bs.scope "Input"] [@react.component]
  external make:
    (
      ~enterButton: bool=?, /* @todo: bool|React.element=?, */
      ~onSearch: (string, ReactEvent.Form.t) => unit=?
    ) =>
    React.element =
    "Search";
};

module Group = {
  [@bs.module "antd"] [@bs.scope "Input"] [@react.component]
  external make:
    (~compact: bool=?, ~size: string=?, ~children: React.element=?) =>
    React.element =
    "Group";
};

module Password = {
  [@bs.module "antd"] [@bs.scope "Input"] [@react.component]
  external make: (~visibilityToggle: bool=?) => React.element = "Password";
};
