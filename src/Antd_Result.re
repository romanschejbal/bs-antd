[@bs.module "antd"] [@react.component]
external make:
  (
    ~title: string=?,
    ~subTitle: string=?,
    ~status: string=?,
    ~icon: React.element=?,
    ~extra: React.element=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Result";
