[@bs.module "antd"] [@react.component]
external make:
  (
    ~_type: [@bs.string] [ | `line | `circle | `dashboard]=?,
    ~format: int => string=?,
    ~percent: int=?,
    ~showInfo: bool=?,
    ~status: [@bs.string] [ | `success | `exception_ | `normal | `active]=?,
    ~strokeLinecap: [@bs.string] [ | `round | `square]=?,
    ~strokeColor: string=?,
    ~successPercent: int=?,
    ~strokeWidth: int=?,
    ~width: int=?,
    ~gapDegree: int=?,
    ~gapPosition: [@bs.string] [ | `top | `bottom | `left | `right]=?,
    ~size: [@bs.string] [ | `small | `default]=?
  ) =>
  React.element =
  "Progress";
