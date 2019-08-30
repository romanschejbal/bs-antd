[@bs.module "antd"] [@react.component]
external make:
  (
    ~disabled: bool=?,
    ~ghost: bool=?,
    ~href: string=?,
    ~htmlType: string=?,
    ~icon: string=?,
    ~shape: string=?,
    ~size: [@bs.string] [ | `small | `large]=?,
    ~target: string=?,
    /* ~loading:bool | { delay: number }, @todo */
    ~_type: [@bs.string] [ | `primary | `default | `dashed | `danger | `link]=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~block: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Button";