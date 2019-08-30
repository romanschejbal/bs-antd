type any('a) = Js.t({..}) as 'a;
type t('a) = [ | `Number(int) | `Object(any('a))];

[@bs.module "antd"] [@react.component]
external make:
  (
    ~offset: int=?,
    ~order: int=?,
    ~pull: int=?,
    ~push: int=?,
    ~span: int=?,
    ~xs: 'a=?,
    ~sm: 'b=?,
    ~md: 'c=?,
    ~lg: 'd=?,
    ~xl: 'e=?,
    ~xxl: 'f=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Col";