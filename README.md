# Scale Simulator

A Arduino-based scale simulator. For the parser to the API see: [Socket Simulator Parser](https://github.com/DDuunk/scale-simulator-parser.git).

# Dependencies

* [Arduino IDE](https://www.arduino.cc/en/Main/Software)

# Usage

To get started clone this repo or download zip and extract on your local machine. To clone using git:

```shell
$ git clone https://github.com/DDuunk/scale-simulator.git
```

Open the `./scale-simulator/scale-simulator.ino` file in the Arduino IDE and set the serial port, serial speed & Arduino board.

To verify your sketch click the verify button in the Arduino IDE.

To upload your sketch click the upload button in the Arduino IDE.

When the sketch is uploaded, open the serial monitor to open the application.

# Application usage

To use the application simply type `S` into the serial monitor to receive a random weight value.

## Format

The format of the returned weight values ​​is as follows, for example:  
*Note: The prefix indicates that the value is stable, this ensures a more realistic scale value.*

```
ST,G        239kg
ST,G        492kg
ST,G        212kg
```

