[@bs.module "antd"] [@react.component]
external make:
  (
    ~autoFocus: bool=?,
    ~checked: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~indeterminate: bool=?,
    ~value: 'value=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Checkbox";
