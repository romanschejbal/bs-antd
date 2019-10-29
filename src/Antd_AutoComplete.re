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
    ~dropdownAlign: 'dropdownAlign=?,
    ~dropdownClassName: string=?,
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

module OptGroup = {
  [@bs.module "antd"] [@bs.scope "AutoComplete"] [@react.component]
  external make:
    (~key: string, ~label: React.element, ~children: React.element=?) =>
    React.element =
    "OptGroup";
};

module Option = {
  [@bs.module "antd"] [@bs.scope "AutoComplete"] [@react.component]
  external make:
    (~key: string, ~value: 'value, ~children: React.element=?) => React.element =
    "Option";
};
