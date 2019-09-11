[@react.component] [@bs.module "antd"]
external make:
  (
    ~allowClear: bool=?,
    ~autoClearSearchValue: bool=?,
    ~autoFocus: bool=?,
    ~defaultActiveFirstOption: bool=?,
    ~defaultValue: 'defaultValue=?, /*string|string[]number|number[]LabeledValue|LabeledValue[]=?,*/
    ~disabled: bool=?,
    ~dropdownClassName: string=?,
    ~dropdownMatchSelectWidth: bool=?,
    ~dropdownRender: (React.element, 'props) => React.element=?,
    ~dropdownStyle: 'obj=?,
    ~filterOption: ('inputValue, 'option) => bool=?,
    ~firstActiveValue: array(string)=?,
    ~getPopupContainer: unit => Dom.element=?,
    ~labelInValue: bool=?,
    ~maxTagCount: int=?,
    ~maxTagTextLength: int=?,
    ~maxTagPlaceholder: React.element=?,
    ~mode: [@bs.string] [ | `default | `multiple | `tags]=?,
    ~notFoundContent: string=?,
    ~optionFilterProp: string=?,
    ~optionLabelProp: string=?,
    ~placeholder: 'placeholder=?, /* string | React.element */
    ~showArrow: bool=?,
    ~showSearch: bool=?,
    ~size: string=?,
    ~suffixIcon: React.element=?,
    ~removeIcon: React.element=?,
    ~clearIcon: React.element=?,
    ~menuItemSelectedIcon: React.element=?,
    ~tokenSeparators: array(string)=?,
    ~value: 'value=?, /* string|string[]\number|number[]\LabeledValue|LabeledValue[],*/
    ~inputValue: string=?,
    ~onBlur: unit => unit=?,
    ~onChange: ('value, 'option) => unit=?,
    ~onDeselect: 'value => unit=?,
    ~onFocus: unit => unit=?,
    ~onInputKeyDown: ReactEvent.Form.t => unit=?,
    ~onMouseEnter: unit => unit=?,
    ~onMouseLeave: unit => unit=?,
    ~onPopupScroll: unit => unit=?,
    ~onSearch: 'value => unit=?,
    ~onSelect: ('value, 'option) => unit=?,
    ~defaultOpen: bool=?,
    ~_open: bool=?,
    ~onDropdownVisibleChange: bool => unit=?,
    ~loading: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Select";

module Option = {
  [@react.component] [@bs.module "antd"] [@bs.scope "Select"]
  external make:
    (
      ~disabled: bool=?,
      ~key: string=?,
      ~title: string=?,
      ~value: 'value=?,
      ~className: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Option";
};
