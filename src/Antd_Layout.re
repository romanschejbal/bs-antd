[@bs.module "antd"] [@react.component]
external make:
  (
    ~className: string=?,
    ~hasSider: bool=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element
  ) =>
  React.element =
  "Layout";

module Header = {
  [@bs.module "antd"] [@bs.scope "Layout"] [@react.component]
  external make:
    (~className: string=?, ~children: React.element) => React.element =
    "Header";
};

module Content = {
  [@bs.module "antd"] [@bs.scope "Layout"] [@react.component]
  external make:
    (~style: ReactDOMRe.Style.t=?, ~children: React.element) => React.element =
    "Content";
};

module Sider = {
  [@bs.module "antd"] [@bs.scope "Layout"] [@react.component]
  external make:
    (
      ~breakpoint: [@bs.string] [ | `xs | `sm | `md | `lg | `xl | `xxl]=?,
      ~className: string=?,
      ~collapsed: bool=?,
      ~collapsedWidth: int=?,
      ~collapsible: bool=?,
      ~defaultCollapsed: bool=?,
      ~reverseArrow: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~theme: [@bs.string] [ | `light | `dark]=?,
      ~trigger: React.element=?,
      ~width: string=?,
      ~onCollapse: (bool, 'a) => unit=?,
      ~onBreakpoint: bool => unit=?,
      ~children: React.element
    ) =>
    React.element =
    "Sider";
};