module AntButton = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~disabled: 'a=?,
      ~ghost: 'a=?,
      ~loading: 'a=?,
      ~href: 'b=?,
      ~htmlType: 'b=?,
      ~icon: 'b=?,
      ~shape: 'b=?,
      ~size: 'd=?,
      ~target: 'b=?,
      ~_type: 'e=?,
      ~onClick: 'c=?,
      ~block: 'a=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Button";
};

[@react.component]
let make =
    (
      ~disabled: bool=?,
      ~ghost: bool=?,
      ~href: string=?,
      ~htmlType: string=?,
      ~icon: 'a=?,
      ~shape: string=?,
      ~size: [@bs.string] [ | `small | `large]=?,
      ~target: string=?,
      ~loading: bool=?,
      ~_type: [@bs.string] [ | `primary | `default | `dashed | `danger | `link]=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~block: bool=?,
      ~children: React.element=?,
    ) =>
  <AntButton
    _type
    disabled
    ghost
    href
    htmlType
    icon={Antd_Utils.tts(Antd_Icon.iconToJsSafe(~icon, ()))}
    shape
    size
    target
    onClick
    block
    loading>
    children
  </AntButton>;