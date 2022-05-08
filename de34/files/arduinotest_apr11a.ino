void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=0;

  val=analogRead(1);
  Serial.println(val);
  delay(500);
  if(200<val){digitalWrite(13,HIGH);
}
else{digitalWrite(13,LOW);}}
