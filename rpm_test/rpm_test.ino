const int qtrPin = 3;
long int t1, t2;
float prev;
int totalTimeMilliSecond, val;

void setup() {
  Serial.begin(9600);

}

void loop() {
  val = digitalRead(qtrPin);
  
  if(val == 0){
    t1 = millis();
  }

  t2 = millis();
  prev = totalTimeMilliSecond;
  totalTimeMilliSecond = t2 - t1;

  if(prev > 10 && totalTimeMilliSecond == 0){
    Serial.print("Milliseconds per roll: ");
    Serial.print((float)prev);
    Serial.print("| Rpm:");
    Serial.println(60000.0 / (float)prev);
  }
}
