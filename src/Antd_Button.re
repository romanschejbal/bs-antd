module AntButton = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~disabled: 'a=?,
      ~ghost: 'a=?,
      ~loading: 'a=?,
      ~href: 'b=?,
      ~htmlType: 'f=?,
      ~icon: 'b=?,
      ~shape: 'g=?,
      ~size: 'd=?,
      ~target: 'b=?,
      ~_type: 'e=?,
      ~onClick: 'c=?,
      ~block: 'a=?,
      ~children: React.element=?,
      ~className: string=?
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
      ~htmlType: [@bs.string] [ | `button | `submit | `submit]=?,
      ~icon: 'a=?,
      ~shape: [@bs.string] [ | `circle | `round]=?,
      ~size: [@bs.string] [ | `small | `large]=?,
      ~target: string=?,
      ~loading: bool=?,
      ~_type:
         [@bs.string] [
           | `primary
           | `default
           | `dashed
           | `danger
           | `link
           | `ghost
         ]=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~block: bool=?,
      ~children: React.element=?,
      ~className: string=?,
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
    loading
    className>
    children
  </AntButton>;
