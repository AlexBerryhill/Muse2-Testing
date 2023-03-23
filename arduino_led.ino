int LED = 13;
int data;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop() {
  while (Serial.available()){
    data = Serial.read();
    if(data == '1'){
      digitalWrite(LED, HIGH);
      Serial.println("LED ON");
    }
    else if(data == '0'){
     digitalWrite(LED, LOW);
      Serial.println("LED OFF");
    }
  }
}