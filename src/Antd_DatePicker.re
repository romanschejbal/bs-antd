[@bs.module "antd"] [@react.component]
external make:
  (
    ~allowClear: bool=?,
    ~autoFocus: bool=?,
    ~className: string=?,
    // ~dateRender:function(currentDate: moment, today: moment) => React.ReactNode=?,
    ~disabled: bool=?,
    ~disabledDate: 'moment => bool=?,
    ~dropdownClassName: string=?,
    ~getCalendarContainer: 'trigger => unit=?,
    ~locale: 'object_=?,
    ~mode: string=?,
    ~_open: bool=?,
    ~placeholder: string=?,
    ~popupStyle: 'object_=?,
    ~size: string=?,
    ~suffixIcon: React.element=?,
    ~style: 'object_=?,
    ~onOpenChange: 'status => unit=?,
    ~onPanelChange: ('value, 'mode) => unit=?
  ) =>
  React.element =
  "DatePicker";
