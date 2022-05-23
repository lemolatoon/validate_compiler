#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // tokenize error
  // 関数名にすることのできない文字

  int b;
  // int a = int b = 3;
  // parse error
  // 初期化は式でなければならない
  // 宣言は式ではない

  srand(time(NULL));
  int c = rand();
  int cons = 1;
  if (c != cons) {
    c = cons;
  }
  // c = c / 1000000;
  printf("%d\n", c);
  int array[c];

  printf("end\n");

  // 配列の長さの宣言は定数式でなければならない

  // char ch = 'a';
  // c = *ch;
  // type error
  // intの変数へのchar*型の代入(型変換もできない)
}
