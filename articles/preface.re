= はじめに

本書はGraphQLサーバをGo言語で構築していく本です。
筆者もコミッタになっている@<href>{https://github.com/99designs/gqlgen,github.com/99designs/gqlgen}の利用を前提として解説します。

残念ながら、筆者はまだGraphQLを使ったなんらかのAPIサーバをリリースできていません。
よって、ここで語られる知見は今後アップデートされ、変わっていく可能性があります。

もしあなたが次の範囲の人であれば、ぜひ本書を読み進めていっていただきたいです。

 * GraphQLに興味がある
 ** 特にサーバ側視点の話が知りたい
 ** 罠とかも知りたい
 * Go言語でやっていきたい
 * schemaありきで開発を進めたい
 * ボイラープレートなコードは嫌いです

逆に、次のような話題については深く言及しません。

 * 特定のクライアント側ツールに関する話
 * クライアント側についての設計のベストプラクティス
