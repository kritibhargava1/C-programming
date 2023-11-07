//Histogram Generator README
This C program, histogram_generator.c, is designed to create a histogram of integer values read from standard input. The generated histogram represents the distribution of values in specified bins within a given range.
//Overview
A histogram is a graphical representation of the distribution of a dataset. In this program, the distribution of input values is represented as a histogram with specified bin size and range. The histogram is displayed with asterisks '*' indicating the frequency of values in each bin.
//Functionality
An overview of the key functionality of the program:
The program starts with a histogram initialized with all zeros, with a specified number of bins (MAX_VAL).
It uses a fixed bin size of 1 initially and a range starting from 0 to MAX_VAL.
The program dynamically expands the histogram if input values exceed the current range, effectively doubling the range and bin size.
Negative values are ignored and not included in the histogram.
The program computes the bin index for each input value and increments the corresponding bin count.
After processing all input values, the program prints the histogram, showing the range of each bin and the frequency of values in each bin represented by asterisks.
