[@bs.module "antd"] [@react.component]
external make:
  (
    ~bordered: bool=?,
    ~footer: React.element=?,
    ~header: React.element=?,
    ~itemLayout: string=?,
    ~rowKey: string=?,
    ~loading: bool=?,
    ~loadMore: React.element=?,
    ~split: bool=?,
    ~dataSource: array('a)=?,
    ~renderItem: 'b => React.element=?
  ) =>
  React.element =
  "List";

module Item = {
  [@bs.module "antd"] [@bs.scope "List"] [@react.component]
  external make:
    (
      ~actions: array(React.element)=?,
      ~extra: React.element=?,
      ~children: React.element=?,
      ~className: string=?
    ) =>
    React.element =
    "Item";

  module Meta = {
    [@bs.module "antd"] [@bs.scope ("List", "Item")] [@react.component]
    external make:
      (
        ~avatar: React.element=?,
        ~description: React.element=?,
        ~title: React.element=?
      ) =>
      React.element =
      "Meta";
  };
};

<Item />;
