module AntRow = {
  [@bs.module "antd"] [@react.component]
  external make:
    (~align: 'a, ~gutter: 'b, ~justify: 'c, ~_type: 'd, ~children: 'e) =>
    React.element =
    "Row";
};

[@react.component]
let make =
    (
      ~align: [@bs.string] [ | `top | `middle | `bottom]=?,
      ~gutter: Js.t({..})=?,
      ~justify:
         [@bs.string] [
           | `start
           | `end_
           | `center
           | `space_around
           | `space_between
         ]=?,
      ~_type: string=?,
      ~children: React.element=?,
    ) =>
  <AntRow align gutter justify _type> children </AntRow>;