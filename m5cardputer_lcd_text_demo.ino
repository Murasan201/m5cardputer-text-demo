#include "M5Cardputer.h"

void setup() {
  // 初期化
  auto cfg = M5.config();
  M5Cardputer.begin(cfg);

  // スピーカーをミュート
  M5Cardputer.Speaker.setVolume(0);

  // 画面向きと文字設定
  M5Cardputer.Display.setRotation(1);        // 必要に応じて向きを変更
  M5Cardputer.Display.setTextColor(WHITE);   // 文字色
  M5Cardputer.Display.setTextSize(2);        // 文字サイズ

  // 画面に文字列を描画
  //    第一引数: 出力文字列、第二引数: X座標、第三引数: Y座標
  M5Cardputer.Display.drawString(
    "Hello, M5Cardputer!", 
    20,                   // 左から 20px
    20                    // 上から 20px
  );
}

void loop() {
  // 何もしない（文字は setup() 時に一度だけ描画されます）
}
