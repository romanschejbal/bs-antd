[@bs.module "antd"] [@react.component]
external make:
  (
    ~id: string=?,
    ~title: string=?,
    ~placement: string=?,
    ~content: React.element=?,
    ~visible: bool=?,
    ~trigger: string=?,
    ~arrowPointAtCenter: bool=?,
    ~onClick: ReactEvent.Form.t => unit=?,
    ~onFocus: ReactEvent.Form.t => unit=?,
    ~className: string=?,
    ~overlayClassName: string=?,
    ~style: ReactDOMRe.style=?,
    ~children: React.element
  ) =>
  React.element =
  "Popover";
