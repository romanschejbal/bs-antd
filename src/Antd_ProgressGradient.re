[@bs.deriving abstract]
type gradient = {
  [@bs.optional]
  from: string,
  [@bs.optional] [@bs.as "to"]
  to_: string,
  [@bs.optional]
  direction: string,
  [@bs.optional] [@bs.as "0%"]
  fromPerc: string,
  [@bs.optional] [@bs.as "100%"]
  toPerc: string,
};

[@bs.module "antd"] [@react.component]
external make:
  (
    ~_type: [@bs.string] [ | `line | `circle | `dashboard]=?,
    ~format: int => string=?,
    ~percent: int=?,
    ~showInfo: bool=?,
    ~status: [@bs.string] [ | `success | `exception_ | `normal | `active]=?,
    ~strokeLinecap: [@bs.string] [ | `round | `square]=?,
    ~strokeColor: gradient=?,
    ~successPercent: int=?,
    ~strokeWidth: int=?,
    ~width: int=?,
    ~gapDegree: int=?,
    ~gapPosition: [@bs.string] [ | `top | `bottom | `left | `right]=?,
    ~size: [@bs.string] [ | `small | `default]=?
  ) =>
  React.element =
  "Progress";
