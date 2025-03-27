
const unsigned int SPARK_NO = 10;
const unsigned long IGNITION_COIL_OFF_TIME = 15;
const unsigned long IGNITION_COIL_LOADING_TIME = 8;
const unsigned long IGNITION_COIL_PAUSE_TIME = 4000;

static const uint8_t IGNITION_COIL_SIGNAL_PIN = A2;

void setup() {
  //transistor PIN that will go trigger the ignition coil GND
  pinMode(IGNITION_COIL_SIGNAL_PIN, OUTPUT);
}

void loop() {
  for (int i = 1; i <= SPARK_NO; i++) {
    digitalWrite(IGNITION_COIL_SIGNAL_PIN, HIGH);  //connect ignition coil signal to GND
    delay(IGNITION_COIL_LOADING_TIME);
    digitalWrite(IGNITION_COIL_SIGNAL_PIN, LOW);  //disconnect ignition coil signal to GND
    delay(IGNITION_COIL_OFF_TIME);
  }
  delay(IGNITION_COIL_PAUSE_TIME);
}
