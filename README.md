# DIY Ignition Coil and Spark Plug Tester with Arduino

This project uses an Arduino and an IRF520 MOSFET module to control an ignition coil and spark plug to produce a series of sparks. The number of sparks, the duration of the signal to the ignition coil, and the pause between cycles can be configured using the constants defined in the code.

Example:
https://github.com/popradu10/pop-radu-diy-ignition-coil-spark-plug-tester/blob/main/docs/YouCut_20250327_202833411.mp4

## Constants
- **SPARK_NO**: Number of sparks the ignition coil will produce in each cycle.
- **IGNITION_COIL_OFF_TIME**: Duration (in milliseconds) for which the ignition coil signal is held low between sparks.
- **IGNITION_COIL_LOADING_TIME**: Duration (in milliseconds) for which the ignition coil signal is held high to charge the coil.
- **IGNITION_COIL_PAUSE_TIME**: Duration (in milliseconds) to wait after completing a cycle of sparks before starting the next cycle.
- **IGNITION_COIL_SIGNAL_PIN**: Pin number on the Arduino used to control the ignition coil via the IRF520 MOSFET module.

## Functions
- **setup()**: Initializes the ignition coil signal pin as an output.
- **loop()**: Produces the configured number of sparks by toggling the ignition coil signal pin.

## Usage
1. Connect the ignition coil and spark plug to the IRF520 MOSFET module, and connect the module to the specified pin on the Arduino.
2. Upload the sketch to the Arduino.
3. The Arduino will control the ignition coil and spark plug to produce sparks based on the configured parameters.

## Note
- Ensure that the ignition coil, spark plug, and MOSFET module are properly connected and that all safety precautions are followed.
- Adjust the constants as needed to match the specifications of your ignition coil and desired spark behavior.
