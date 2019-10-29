[@bs.module "antd"] [@react.component]
external make:
  (
    ~visible: bool=?,
    ~closable: bool=?,
    ~title: string=?,
    ~footer: array(React.element)=?,
    ~children: React.element=?,
    ~className: string=?,
    ~onCancel: ReactEvent.Form.t => unit=?
  ) =>
  React.element =
  "Modal";
