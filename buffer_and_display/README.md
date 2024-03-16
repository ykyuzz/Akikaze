## Display と Buffer の役割の違いについて
Displayはファイルの表示を担当する。

Bufferはファイルの書き換えとかを担当する

クラスFieldで定義したものをどちらも流用する。

めんどくさいので、~/setting/setting.confの中身はfieldで読み込んでおく
~~それから表示する元の配列もFIeldで読み込み、Shallow copyで対応する。~~(取り消し。両方ともfieldを参照する。)

## 参考
Buffer とDisplayの違いは、Displayは全OS共通の動きを提供するのに対して、Bufferは全OS共通のモジュールを提供する。
（初期Verに書いてあったこと）
