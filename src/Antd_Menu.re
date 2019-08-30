[@bs.module "antd"] [@react.component]
external make:
  (
    ~defaultOpenKeys: array(string)=?,
    ~defaultSelectedKeys: array(string)=?,
    ~forceSubMenuRender: bool=?,
    ~inlineCollapsed: bool=?,
    ~inlineIndent: int=?,
    ~mode: [@bs.string] [ | `vertical | `horizontal | `inline]=?,
    ~multiple: bool=?,
    ~openKeys: array(string)=?,
    ~selectable: bool=?,
    ~selectedKeys: array(string)=?,
    ~style: ReactDOMRe.Style.t=?,
    ~subMenuCloseDelay: int=?,
    ~subMenuOpenDelay: int=?,
    ~theme: [@bs.string] [ | `light | `dark]=?,
    ~onClick: {
                .
                "item": 'a,
                "key": string,
                "keyPath": string,
                "domEvent": string,
              } =>
              unit
                =?,
    ~onDeselect: {
                   .
                   "item": 'a,
                   "key": string,
                   "keyPath": string,
                   "selectedKeys": array(string),
                   "domEvent": string,
                 } =>
                 unit
                   =?,
    ~onOpenChange: array(string)=?,
    ~onSelect: {
                 .
                 "item": 'a,
                 "key": string,
                 "keyPath": string,
                 "selectedKeys": array(string),
                 "domEvent": string,
               } =>
               unit
                 =?,
    ~overflowedIndicator: React.element=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Menu";

module Item = {
  [@bs.module "antd"] [@bs.scope "Menu"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~key: string=?,
      ~title: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Item";
};