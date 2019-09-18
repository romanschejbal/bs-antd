[@bs.module "antd"] [@react.component]
external make:
  (
    ~visible: bool=?,
    ~closable: bool=?,
    ~title: string=?,
    ~footer: React.element=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Modal";
