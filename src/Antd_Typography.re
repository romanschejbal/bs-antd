module Paragraph = {
  [@bs.module "antd/lib/typography/Paragraph.js"] [@react.component]
  external make:
    (
      ~code: bool=?,
      ~copyable: bool=?, // TODO: it has to be `boolean | { text: string, onCopy: Function }`
      ~delete: bool=?,
      ~disabled: bool=?,
      ~editable: bool=?, // TODO: it has to be `boolean | { editing: boolean, onStart: Function, onChange: Function(string) }`
      ~ellipsis: bool=?, // TODO: it has to be `boolean | { rows: number, expandable: boolean, onExpand: Function }`
      ~mark: bool=?,
      ~underline: bool=?,
      ~onChange: string => unit=?,
      ~strong: bool=?,
      ~_type: [@bs.string] [ | `secondary | `warning | `danger]=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};

module Text = {
  [@bs.module "antd/lib/typography/Text.js"] [@react.component]
  external make:
    (
      ~code: bool=?,
      ~copyable: bool=?, // TODO: it has to be `boolean | { text: string, onCopy: Function }`
      ~delete: bool=?,
      ~disabled: bool=?,
      ~editable: bool=?, // TODO: it has to be `boolean | { editing: boolean, onStart: Function, onChange: Function(string) }`
      ~ellipsis: bool=?, // TODO: it has to be `boolean | { rows: number, expandable: boolean, onExpand: Function }`
      ~mark: bool=?,
      ~underline: bool=?,
      ~onChange: string => unit=?,
      ~strong: bool=?,
      ~_type: [@bs.string] [ | `secondary | `warning | `danger]=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};

module Title = {
  [@bs.module "antd/lib/typography/Title.js"] [@react.component]
  external make:
    (
      ~code: bool=?,
      ~copyable: bool=?, // TODO: it has to be `boolean | { text: string, onCopy: Function }`
      ~delete: bool=?,
      ~disabled: bool=?,
      ~editable: bool=?, // TODO: it has to be `boolean | { editing: boolean, onStart: Function, onChange: Function(string) }`
      ~ellipsis: bool=?, // TODO: it has to be `boolean | { rows: number, expandable: boolean, onExpand: Function }`
      ~level: [@bs.int] [
                | [@bs.as 1] `lv1
                | [@bs.as 2] `lv2
                | [@bs.as 3] `lv3
                | [@bs.as 4] `lv4
              ]
                =?,
      ~mark: bool=?,
      ~underline: bool=?,
      ~onChange: string => unit=?,
      ~_type: [@bs.string] [ | `secondary | `warning | `danger]=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};