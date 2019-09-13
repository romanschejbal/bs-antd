[@bs.module "antd"] [@react.component]
external make:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~checkedChildren: 'checkedChildren=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~loading: bool=?,
    ~size: string=?,
    ~unCheckedChildren: 'uncheckedChildren=?,
    ~onChange: (bool, ReactEvent.Form.t) => unit=?,
    ~onClick: (bool, ReactEvent.Form.t) => unit=?,
    ~className: string=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Switch";
