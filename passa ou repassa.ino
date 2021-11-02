const int bt1Pin = 4;
const int bt2Pin = 5;
const int luz1Pin = 2;
const int luz2Pin = 3;

int bt1Val = digitalRead(bt1Pin);
int bt2Val = digitalRead(bt2Pin);

void setup() {
  pinMode(luz1Pin, OUTPUT);
  pinMode(luz2Pin, OUTPUT);
  pinMode(bt1Pin, INPUT_PULLUP);
  pinMode(bt2Pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  bt1Val = digitalRead(bt1Pin);
  bt2Val = digitalRead(bt2Pin);
  if (bt1Val == LOW){
    digitalWrite(luz1Pin, HIGH);
    delay(2000);
    digitalWrite(luz1Pin, LOW);
  }
  if (bt2Val == LOW){
    digitalWrite(luz2Pin, HIGH);
    delay(2000);
    digitalWrite(luz2Pin, LOW);
  }
}
