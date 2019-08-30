[@bs.module "antd"] [@react.component]
external make:
  (
    ~actions: array(React.element)=?,
    ~activeTabKey: string=?,
    ~headStyle: ReactDOMRe.Style.t=?,
    ~bodyStyle: ReactDOMRe.Style.t=?,
    ~style: ReactDOMRe.Style.t=?,
    ~bordered: bool=?,
    ~cover: React.element=?,
    ~defaultActiveTabKey: string=?,
    ~extra: string=?,
    ~hoverable: bool=?,
    ~loading: bool=?,
    ~tabList: array({
                .
                "key": string,
                "tab": React.element,
              })
                =?,
    ~size: [@bs.string] [ | `default | `small]=?,
    ~title: 'a=?,
    ~_type: string=?,
    ~onTabChange: string => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Card";

module Grid = {
  [@bs.module "antd"] [@bs.scope "Card"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t,
      ~children: React.element=?
    ) =>
    React.element =
    "Grid";
};

module Meta = {
  [@bs.module "antd"] [@bs.scope "Card"] [@react.component]
  external make:
    (
      ~avatar: React.element=?,
      ~className: string=?,
      ~description: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~title: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Meta";
};