module FormItem = {
  [@bs.module "antd"] [@bs.scope "Form"] [@react.component]
  external make:
    (
      ~label: string,
      ~help: option(string)=?,
      ~required: bool=?,
      ~className: string=?,
      ~validateStatus: option(string)=?,
      ~children: React.element
    ) =>
    React.element =
    "Item";
};
