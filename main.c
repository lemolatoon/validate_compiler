int あ() {
  // tokenize error
  // 関数名にすることのできない文字

  int b;
  int a = int b = 3;
  // parse error
  // 初期化は式でなければならない
  // 宣言は式ではない

  int c = 2;
  int array[c];
  // 配列の長さの宣言は定数式でなければならない

  char ch = 'a';
  c = *ch;
  // type error
  // intの変数へのchar*型の代入(型変換もできない)
}