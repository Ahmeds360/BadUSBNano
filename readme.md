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
6. Customize the DuckyScript payloads in the sketch if needed.
7. Upload the sketch to the Arduino Nano Pro Micro.
8. Convert your DuckyScript payloads using [Nixu Corp's DuckyScript converter](https://nixu-corp.github.io/).
9. Copy the converted payloads to the appropriate variables in the sketch.
10. Enjoy using your BadUSBNano!

## Usage

1. Plug in the BadUSBNano device into a target computer.
2. The device will automatically execute the configured DuckyScript payloads, if any.
3. To run a single script, set `SINGLE_SCRIPT` to `true` in the sketch.
4. To run two scripts sequentially, set `SINGLE_SCRIPT` to `false` in the sketch.
5. To not run any script, leave both DuckyScript variables empty.

## Contributing

Contributions are welcome! Feel free to submit pull requests, suggest features, or report bugs.

## License

This project is licensed under the [MIT License](LICENSE).