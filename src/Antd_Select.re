[@react.component] [@bs.module "antd"]
external make:
  (
    ~_open: bool=?,
    ~allowClear: bool=?,
    ~autoClearSearchValue: bool=?,
    ~autoFocus: bool=?,
    ~children: React.element=?,
    ~className: string=?,
    ~clearIcon: React.element=?,
    ~defaultActiveFirstOption: bool=?,
    ~defaultOpen: bool=?,
    ~defaultValue: 'defaultValue=?, /*string|string[]number|number[]LabeledValue|LabeledValue[]=?,*/
    ~disabled: bool=?,
    ~dropdownClassName: string=?,
    ~dropdownMatchSelectWidth: bool=?,
    ~dropdownRender: (React.element, 'props) => React.element=?,
    ~dropdownStyle: 'obj=?,
    ~filterOption: ('inputValue, 'option) => bool=?,
    ~firstActiveValue: array(string)=?,
    ~getPopupContainer: unit => Dom.element=?,
    ~inputValue: string=?,
    ~labelInValue: bool=?,
    ~loading: bool=?,
    ~maxTagCount: int=?,
    ~maxTagPlaceholder: React.element=?,
    ~maxTagTextLength: int=?,
    ~menuItemSelectedIcon: React.element=?,
    ~mode: [@bs.string] [ | `default | `multiple | `tags]=?,
    ~notFoundContent: string=?,
    ~onBlur: unit => unit=?,
    ~onChange: ('value, 'option) => unit=?,
    ~onDeselect: 'value => unit=?,
    ~onDropdownVisibleChange: bool => unit=?,
    ~onFocus: unit => unit=?,
    ~onInputKeyDown: ReactEvent.Form.t => unit=?,
    ~onMouseEnter: unit => unit=?,
    ~onMouseLeave: unit => unit=?,
    ~onPopupScroll: unit => unit=?,
    ~onSearch: 'value => unit=?,
    ~onSelect: ('value, 'option) => unit=?,
    ~optionFilterProp: string=?,
    ~optionLabelProp: string=?,
    ~placeholder: 'placeholder=?, /* string | React.element */
    ~removeIcon: React.element=?,
    ~showArrow: bool=?,
    ~showSearch: bool=?,
    ~size: string=?,
    ~suffixIcon: React.element=?,
    ~tokenSeparators: array(string)=?,
    ~value: 'value=?
  ) => /* string|string[]\number|number[]\LabeledValue|LabeledValue[],*/
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
