module AntAvatar = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~icon: 'a=?,
      ~shape: 'b=?,
      ~size: 'c=?,
      ~src: 'd=?,
      ~srcSet: 'e=?,
      ~alt: 'f=?,
      ~onError: unit => bool=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Avatar";
};

[@react.component]
let make =
    (
      ~icon: 'a=?,
      ~shape: [@bs.string] [ | `circle | `square]=?,
      ~size: 'c=?,
      ~src: string=?,
      ~srcSet: string=?,
      ~alt: string=?,
      ~onError: unit => bool=?,
      ~children: React.element=?,
    ) =>
  <AntAvatar
    icon={Antd_Utils.tts(Antd_Icon.iconToJsSafe(icon))}
    shape
    size
    src
    srcSet
    alt
    onError>
    children
  </AntAvatar>;