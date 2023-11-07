# Coolness Index Calculator

This C program, `coolness_index_calculator.c`, calculates the "coolness" index based on temperature and windspeed inputs. The coolness index provides a measure of how comfortable the weather conditions are. The program supports multiple usage scenarios, allowing you to calculate the coolness index for various temperature and windspeed combinations.

## Prerequisites

Before using this program, ensure you have a C compiler (e.g., GCC) installed on your system.

## Compilation

Compile the program by running the following command in your terminal:

```bash
gcc coolness_index_calculator.c -o coolness_index_calculator -lm
```

The `-lm` flag is added to link the math library, which is necessary for using the `pow` function.

## Usage

You can use the compiled `coolness_index_calculator` executable to calculate the coolness index. The program supports three usage scenarios:

### 1. Calculate Coolness for a Range of Parameters

If you run the program without any arguments, it will calculate the coolness index for a range of temperature and windspeed values and display the results in a table format. This is useful for understanding how different combinations of temperature and windspeed affect the coolness index.

```bash
./coolness_index_calculator
```

### 2. Calculate Coolness for a Given Temperature

Provide one argument, the temperature in degrees Celsius, to calculate the coolness index for that specific temperature with varying windspeeds.

```bash
./coolness_index_calculator 20.0
```

### 3. Calculate Coolness for a Given Temperature and Windspeed

Provide two arguments, the temperature in degrees Celsius and the windspeed in meters per second, to calculate the coolness index for the given temperature and windspeed.

```bash
./coolness_index_calculator 25.0 8.0
```

## Input Limits

- Temperature must be within the range of -99 to 50 degrees Celsius.
- Windspeed must be at least 0.5 meters per second.

The program will display an error message and exit if the provided input values do not meet these limits.

## Output

The program will output a table with the following columns:

- Temperature (°C): The temperature input.
- Windspeed (m/s): The windspeed input.
- Coolness: The calculated coolness index.

## Author

This program was written by Kriti Bhargava.

