module FormItem = {
  [@bs.module "antd"] [@bs.scope "Form"] [@react.component]
  external make:
    (
      ~label: string,
      ~help: string=?,
      ~required: bool=?,
      ~className: string=?,
      ~validateStatus: string=?,
      ~children: React.element
    ) =>
    React.element =
    "Item";
};
