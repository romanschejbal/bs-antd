[@bs.module "antd"] [@react.component]
external make:
  (
    ~className: string=?,
    ~dashed: bool=?,
    ~orientation: [@bs.string] [ | `left | `right | `center]=?,
    ~style: ReactDOMRe.Style.t=?,
    ~_type: [@bs.string] [ | `horizontal | `vertical]=?
  ) =>
  React.element =
  "Divider";