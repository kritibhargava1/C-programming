#include <stdlib.h>
#include <stdio.h>

#define NUM_BINS 16


int main() {
    int binSize = 1;
    int currentRange = NUM_BINS;
    int bins[NUM_BINS] = {0};
    int inputValue;

    // Print initial bin configuration
    printf("Number of bins: %d, Bin size: %d, Range: [0, %d)\n", NUM_BINS, binSize, currentRange);

    while (1) {
        // Read an input value, break the loop if input is not an integer
        if (scanf("%d", &inputValue) != 1) {
            break;
        }

        if (inputValue < 0) {
            continue; // Skip negative values
        }

        int bin = inputValue / binSize;
        bins[bin]++;

        while (inputValue >= currentRange) {
            // Combine bin counts for larger range
            for (int i = 0, j = 0; i < NUM_BINS / 2; i++, j += 2) {
                bins[i] = bins[j] + bins[j + 1];
            }

            // Update range and bin size
            currentRange *= 2;
            binSize *= 2;

            // Reset counts for new range
            for (int i = NUM_BINS / 2; i < NUM_BINS; i++) {
                bins[i] = 0;
            }

            // Print updated bin configuration
            printf("Number of bins: %d, Bin size: %d, Range: [0, %d)\n", NUM_BINS, binSize, currentRange);
        }
    }

    // Print the histogram
    for (int binIndex = 0; binIndex < NUM_BINS; binIndex++) {
        // Print the range for the current bin
        printf("[%3d to %3d]: ", binIndex * binSize, (binIndex + 1) * binSize - 1);

        int binCount = bins[binIndex];

        // Print asterisks to represent the count in the bin
        for (int asteriskIndex = 0; asteriskIndex < binCount; asteriskIndex++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}

