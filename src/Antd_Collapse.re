[@bs.module "antd"] [@react.component]
external make:
  (
    ~activeKey: string=?,
    ~defaultActiveKey: array(string)=?,
    ~bordered: bool=?,
    ~accordion: bool=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    // ~expandIcon TODO: add expandIcon property
    ~expandIconPosition: [@bs.string] [ | `left | `right]=?,
    ~destroyInactivePanel: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "Collapse";

module Panel = {
  [@bs.module "antd/lib/collapse/CollapsePanel"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~forceRender: bool=?,
      ~header: React.element=?,
      ~key: string=?,
      ~showArrow: bool=?,
      ~extra: React.element=?,
      ~children: React.element
    ) =>
    React.element =
    "default";
};
