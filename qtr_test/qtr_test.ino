const int sensorCount = 8;
const int sensorPins[sensorCount] = { 3, 4, 5, 6, 7, 8, 9, 10 };
int sensorValues[sensorCount];

//For 1 sensor
const int sensorPin = 2;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < sensorCount; i++) {
    pinMode(sensorPins[i], INPUT_PULLUP);
  }
}

void readSensorValues() {
  for (int i = 0; i < sensorCount; i++) {
    sensorValues[i] = digitalRead(sensorPins[i]);
  }
}

void printSensorValues(){
  readSensorValues();
  Serial.print("SensorValues: | ");
  for (int i = 0; i < sensorCount; i++) {
    Serial.print(sensorValues[i]);
    Serial.print(" | ");
  }
  Serial.println();
}

int readSensor() {
  return digitalRead(sensorPin);
}

void printSensorValue(){
  Serail.print("Sensor Value: ")
  Serial.print(readSensor());
  Serial.println();
}

void loop() {
  //For 8 sensor qtr
  printSensorValues();

  //For 1 sensor qtr
  //printSensorValue();
}
