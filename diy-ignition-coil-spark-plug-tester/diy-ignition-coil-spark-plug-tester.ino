/*
 * DIY Ignition Coil and Spark Plug Tester with Arduino
 *
 * This program controls an ignition coil using an Arduino and an IRF520 MOSFET module to produce a series of sparks.
 * The number of sparks, the duration of the signal to the ignition coil, and the pause
 * between cycles can be configured using the constants defined below.
 *
 */

// Number of sparks the ignition coil will produce in each cycle
const unsigned int SPARK_NO = 10;

// Duration (in milliseconds) for which the ignition coil signal is held low between sparks
const unsigned long IGNITION_COIL_OFF_TIME = 15;

// Duration (in milliseconds) for which the ignition coil signal is held high to charge the coil
const unsigned long IGNITION_COIL_LOADING_TIME = 8;

// Duration (in milliseconds) to wait after completing a cycle of sparks before starting the next cycle
const unsigned long IGNITION_COIL_PAUSE_TIME = 4000;

// Pin number on the Arduino used to control the ignition coil
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
