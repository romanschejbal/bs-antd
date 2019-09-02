[@bs.module "antd"] [@react.component]
external make:
  (
    ~color: string=?,
    ~count: React.element=?,
    ~dot: bool=?,
    ~offset: array(int)=?,
    ~overflowCount: int=?,
    ~showZero: bool=?,
    ~status: [@bs.string] [
               | `success
               | `processing
               | `default
               | `error
               | `warning
             ]
               =?,
    ~text: string=?,
    ~title: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Badge";
