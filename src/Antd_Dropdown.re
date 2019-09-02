[@bs.deriving jsConverter]
type trigger = [ | `click | `hover | `context];

module AntDropdown = {
  [@bs.module "antd"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~getPopupContainer: Dom.element => Dom.element=?,
      ~overlay: 'overlayType=?,
      ~overlayClassName: string=?,
      ~overlayStyle: ReactDOMRe.Style.t=?,
      ~placement: 'placementType=?,
      ~trigger: array('triggerType)=?,
      ~visible: bool=?,
      ~onVisibleChange: bool => unit=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Dropdown";
};

module AntDropdownButton = {
  [@bs.module "antd"] [@bs.scope "Dropdown"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~icon: React.element=?,
      ~overlay: React.element=?,
      ~placement: 'placementType=?,
      ~size: 'sizeType=?,
      ~trigger: array('triggerType)=?,
      ~_type: 'typeType=?,
      ~visible: bool=?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Button";
};

[@react.component]
let make =
    (
      ~disabled: bool=?,
      ~getPopupContainer: Dom.element => Dom.element=?,
      ~overlay: 'overlayType'=?, // React.element | () => React.element
      ~overlayClassName: string=?,
      ~overlayStyle: ReactDOMRe.Style.t=?,
      ~placement:
         [@bs.string] [
           | `bottomLeft
           | `bottomCenter
           | `bottomRight
           | `topLeft
           | `topCenter
           | `topRight
         ]=?,
      ~trigger: array(trigger)=?,
      ~visible: bool=?,
      ~onVisibleChange: bool => unit=?,
      ~children: React.element=?,
    ) =>
  <AntDropdown
    disabled
    getPopupContainer
    overlay
    overlayClassName
    overlayStyle
    placement
    trigger={Array.map(triggerToJs, trigger)}
    visible
    onVisibleChange>
    children
  </AntDropdown>;

module Button = {
  [@react.component]
  let make =
      (
        ~disabled: bool=?,
        ~icon: React.element=?,
        ~overlay: React.element=?,
        ~placement:
           [@bs.string] [
             | `bottomLeft
             | `bottomCenter
             | `bottomRight
             | `topLeft
             | `topCenter
             | `topRight
           ]=?,
        ~size: [@bs.string] [ | `small | `large]=?,
        ~trigger: array(trigger)=?,
        ~_type:
           [@bs.string] [
             | `primary
             | `default
             | `dashed
             | `danger
             | `link
             | `ghost
           ]=?,
        ~visible: bool=?,
        ~onClick: ReactEvent.Mouse.t => unit=?,
        ~children: React.element=?,
      ) =>
    <AntDropdownButton
      disabled
      icon
      overlay
      placement
      size
      trigger={Array.map(triggerToJs, trigger)}
      _type
      visible
      onClick>
      children
    </AntDropdownButton>;
};
