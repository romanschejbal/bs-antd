[@bs.module "antd"] [@react.component]
external make:
  (
    ~allowClear: bool=?,
    ~autoFocus: bool=?,
    ~backfill: bool=?,
    ~children: React.element=?,
    ~dataSource: 'dataSource=?,
    ~defaultActiveFirstOption: bool=?,
    ~defaultValue: array(string)=?,
    ~disabled: bool=?,
    ~filterOption: (string, 'option) => bool=?,
    ~optionLabelProp: string=?,
    ~placeholder: string=?,
    ~name: string=?,
    ~value: 'value=?,
    ~onBlur: unit => unit=?,
    ~onChange: 'value => unit=?,
    ~onFocus: unit => unit=?,
    ~onSearch: 'value => unit=?,
    ~onSelect: ('value, 'option) => unit=?,
    ~defaultOpen: bool=?,
    ~_open: bool=?,
    ~onDropdownVisibleChange: bool => unit=?
  ) =>
  React.element =
  "AutoComplete";
