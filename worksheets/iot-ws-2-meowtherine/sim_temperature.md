# Activity 2: Create a simulated temperature sensor

[<--back](./README.md)

Read the description of the following files of the project and complete all the sections in the source code that include a `TODO` comment.

Once you have completed the code, build your project by running the command `make` as done in worksheet 1. Once built the executable of your project, you should be able to run it with:

``./main sensors.csv 1``

Where `sensors.csv` is the file that the HALManager uses to simulate readings from the sensor and `1` is the number of ports this HAL supports. The expected output should be:

```
[CSVHALManager] Device attached to port 0.
Temperature data: 23.5
Temperature data: 24.7
Temperature data: 36.1
[CSVHALManager] Device released from port 0.
```


## [Makefile](Makefile)

This file is provided, you just need to understand how it works. This is similar to the one defined in worksheet 1 but dependencies related to the HAL interfaces and the Catch2 testing framework (see [Activity 3](./README.md#activities)) have been included. 

## [main.cpp](src/main.cpp)


You need to complete part of this file. The `main.cpp` file initializes and manages the hardware abstraction layer (HAL) using the `CSVHALManager` class. It reads configuration data from a CSV file, attaches a `TemperatureSensor` to a port, and periodically reads and prints sensor data. 

##  [TemperatureSensor.h](src/TemperatureSensor.h)

You need to complete parts of this file. 
The `TemperatureSensor` class is a concrete implementation of the `ISensor` interface, representing a temperature sensor device. It provides methods to retrieve the sensor's ID and dimension (number of measurements), and to format sensor readings into a string. The class ensures that temperature data can be read, formatted, and managed consistently within the hardware abstraction layer (HAL) framework.

[<--back](./README.md)