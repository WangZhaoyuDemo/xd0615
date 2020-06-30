/*
  Keyboard

  Plays a pitch that changes based on a changing
  input circuit:
  * 3 pushbuttons from +5V to analog in 0 through
  3
  * 3 10K resistors from analog in 0 through 3 to
  ground
  * 8-ohm speaker on digital pin 8
*/

int pos = 0;

void setup()//开始函数
{
  pinMode(A0, INPUT);//将A0号引脚设为输入
  pinMode(8, OUTPUT);//将8号引脚设为输出
  pinMode(A1, INPUT);//将A1号引脚设为输入
  pinMode(A2, INPUT);//将A2号引脚设为输入
}

void loop()//循环函数
{
  // 监控a0引脚电位变化（即a0按钮状态）
  if (digitalRead(A0) == HIGH) {
    tone(8, 440, 100); // 输出440赫兹的方波
  }
  // 监控a1引脚电位变化（即a1按钮状态）
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 100); // 输出494赫兹的方波
  }
  // 监控a1引脚电位变化（即a1按钮状态）
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 100); // 输出523赫兹的方波
  }
  delay(10); // 延迟10毫秒
}