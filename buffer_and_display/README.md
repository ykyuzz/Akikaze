## Display と Buffer の役割の違いについて
Displayはファイルの表示を担当する。

Bufferはファイルの書き換えとかを担当する

クラスFieldで定義したものをどちらも流用する。

めんどくさいので、~/setting/setting.confの中身はfieldで読み込んでおく
~~それから表示する元の配列もFIeldで読み込み、Shallow copyで対応する。~~(取り消し。両方ともfieldを参照する。)

## 参考
Buffer とDisplayの違いは、Displayは全OS共通の動きを提供するのに対して、Bufferは全OS共通のモジュールを提供する。
（初期Verに書いてあったこと）

## previous positionについて
previous positionは、file nameとrow, columnの順でほしい。具体的には
file_name
row_pos, column_pos
のような感じ

## 開発メモ
扱うファイルの名前の処理は、Bufferに投げたい
セルの移動もOS別の処理を書いたやつがキーボード処理を投げるようにしたい。
とはいえ、これらはmain.cppで吸収するように作ればよい気がするので、とりあえず、特定のキーが呼ばれたときの動作を全部Bufferに書いていきたい
……DisplayよりBufferの開発をしたほうが良さそう。