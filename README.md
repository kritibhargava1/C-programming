//Coolness Calculator
This C program, Coolness Calculator, is a command-line tool for calculating the "coolness" of a given temperature and wind speed. It uses the formula defined by the American National Weather Service to estimate the cooling effect of wind on the human body. The program can be run with or without command-line arguments to calculate coolness for various scenarios.
//Features

Calculate the coolness factor based on temperature and wind speed.
Support for multiple usage scenarios:

Calculate coolness for a range of predefined temperature and wind speed values.
Calculate coolness for a specific temperature with a range of wind speeds.
Calculate coolness for a specific temperature and wind speed.



//Usage
The program can be run with the following command-line arguments:
./coolness_calculator [temperature] [wind speed]

temperature: The temperature in degrees Fahrenheit. Acceptable values are -99 <= T <= 50.
wind speed: The wind speed in miles per hour. Acceptable values are 0.5 <= V.

If no arguments are provided, the program will calculate coolness for a range of temperature and wind speed values.
//Building
To compile the program, use a C compiler like gcc:
gcc -o coolness_calculator coolness_calculator.c -lm
The -lm flag is used to link the math library since the code uses mathematical functions from the <math.h> library.
//Examples
///Example 1: Calculate Coolness for a Range of Parameters
If no arguments are provided, the program will calculate coolness for a predefined range of temperature and wind speed values:
./coolness
//Example 2: Calculate Coolness for a Specific Temperature
You can specify the temperature as an argument to calculate coolness for that temperature with a range of wind speeds:
./coolness_calculator 32.0
///Example 3: Calculate Coolness for a Specific Temperature and Wind Speed
To calculate coolness for a specific temperature and wind speed, provide both arguments:
./coolness_calculator 32.5 10.0
If you provide invalid input values outside the acceptable range, the program will display an error message.
