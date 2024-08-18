# BadUSBNano

![BadUSBNano](https://github.com/Ahmeds360/BadUSBNano/blob/main/nano.jpeg?raw=true)

BadUSBNano is an Arduino project designed to emulate a BadUSB device using an Arduino Nano Pro Micro. It allows users to execute custom DuckyScript payloads, or choose not to run any script at all.

## Features

- Emulates a BadUSB device using Arduino Nano Pro Micro.
- Supports execution of DuckyScript payloads.
- Flexible options to run one, two, or no scripts.

## Getting Started

1. Obtain an Arduino Nano Pro Micro.
2. Clone or download this repository.
3. Connect the Arduino Nano Pro Micro to your computer.
4. Open the Arduino IDE.
5. Load the `BadUSBNano.ino` sketch.
6. Copy the contents of the converted DuckyScript payload from [Nixu Corp's DuckyScript converter](https://nixu-corp.github.io/).
7. Paste the DuckyScript payload into either the `scriptYi()` or `scriptEr()` function in the `BadUSBNano.ino` sketch, depending on whether you want to run script 1 or script 2.
8. To run script 1, short pins 8 and 9.
9. To run script 2, short pins 7 and 8.
10. For debugging purposes, don't short any pins, and no script will run.
11. Upload the sketch to the Arduino Nano Pro Micro.
12. Enjoy using your BadUSBNano!

## Usage

1. Plug in the BadUSBNano device into a target computer.
2. The device will automatically execute the configured DuckyScript payloads, based on the pins shorted.
3. To run script 1, short pins 8 and 9.
4. To run script 2, short pins 7 and 8.
5. For debugging purposes, don't short any pins, and no script will run.

## Contributing

Contributions are welcome! Feel free to submit pull requests, suggest features, or report bugs.

## License

This project is licensed under the [MIT License](LICENSE).
