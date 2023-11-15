void setup() {
  // 设置2到8号引脚为输出模式
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // 依次点亮2到7号灯
  for (int pin = 2; pin <= 7; pin++) {
    digitalWrite(pin, HIGH);
    delay(10000); // 等待10秒
  }

  delay(1000); // 所有灯保持亮起5秒

  // 熄灭2到7号灯
  for (int pin = 2; pin <= 7; pin++) {
    digitalWrite(pin, LOW);
  }

  // 检查8号灯是否已经点亮，如果没有则点亮并保持
  if (digitalRead(8) == LOW) {
    digitalWrite(8, HIGH);
  }

  delay(1000); // 熄灭后等待5秒
}
