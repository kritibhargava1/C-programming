#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate the "coolness" index
double calculateCoolness(double temperature, double windspeed) {
    // Formula to calculate the coolness index based on temperature and windspeed
    return 35.74 + 0.6215 * temperature - 35.75 * pow(windspeed, 0.16) + 0.4275 * temperature * pow(windspeed, 0.16);
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        // No arguments: Calculate coolness for a range of parameters
        printf("Temperature\tWindspeed\tCoolness\n");

        // Loop through temperature and windspeed ranges, and calculate the coolness index for each combination
        for (double temp = -10.0; temp <= 40.0; temp += 10.0) {
            for (double wind = 5.0; wind <= 15.0; wind += 5.0) {
                double coolness = calculateCoolness(temp, wind);
                printf("%.1lf\t%.1lf\t%.1lf\n", temp, wind, coolness);
            }
        }
    } else if (argc == 2) {
        // One argument: Temperature is provided
        double temperature = atof(argv[1]);

        // Check if the provided temperature is within acceptable limits
        if (temperature < -99 || temperature > 50) {
            fprintf(stderr, "Error: Invalid input. Temperature must be within the range -99 to 50.\n");
            return 1;
        }

        printf("Temperature\tWindspeed\tCoolness\n");

        // Loop through a range of windspeeds and calculate the coolness index for the provided temperature
        for (double wind = 5.0; wind <= 15.0; wind += 5.0) {
            double coolness = calculateCoolness(temperature, wind);
            printf("%.1lf\t%.1lf\t%.1lf\n", temperature, wind, coolness);
        }
    } else if (argc == 3) {
        // Two arguments: Temperature and windspeed are provided
        double temperature = atof(argv[1]);
        double windspeed = atof(argv[2]);

        // Check if the provided temperature and windspeed are within acceptable limits
        if (temperature < -99 || temperature > 50 || windspeed < 0.5) {
            fprintf(stderr, "Error: Invalid input. Temperature must be within the range -99 to 50, and windspeed must be at least 0.5.\n");
            return 1;
        }

        // Calculate the coolness index for the provided temperature and windspeed
        double coolness = calculateCoolness(temperature, windspeed);
        printf("Temperature\tWindspeed\tCoolness\n");
        printf("%.1lf\t%.1lf\t%.1lf\n", temperature, windspeed, coolness);
    } else {
        // Display usage information when the number of arguments is incorrect
        fprintf(stderr, "Usage: %s [temperature] [windspeed]\n", argv[0]);
        return 1;
    }

    return 0;
}
