# Histogram Generator

This C program, `histogram_generator.c`, allows you to generate a histogram from a series of non-negative integer input values. The histogram divides the input values into bins of a specified size, tracks the count of values falling into each bin, and then visualizes the distribution using asterisks. The program supports dynamic resizing of bins and adapts to the range of input values.

## Prerequisites

Before using this program, ensure you have a C compiler (e.g., GCC) installed on your system.

## Compilation

Compile the program by running the following command in your terminal:

```bash
gcc histogram_generator.c -o histogram_generator
```

## Usage

You can use the compiled `histogram_generator` executable to generate histograms. Simply run the program and provide non-negative integer input values one at a time. To exit the program, input any non-integer value (e.g., a character or a floating-point number). The program will continue to generate histograms until you choose to exit.

### Example:

```bash
./histogram_generator
```

```plaintext
Number of bins: 16, Bin size: 1, Range: [0, 16)
10
Number of bins: 16, Bin size: 1, Range: [0, 16)
22
Number of bins: 16, Bin size: 1, Range: [0, 16)
37
Number of bins: 16, Bin size: 1, Range: [0, 16)
64
Number of bins: 16, Bin size: 1, Range: [0, 16)
93
Number of bins: 16, Bin size: 1, Range: [0, 16)
-1
```

The program will print a histogram based on the input values:

```plaintext
[  0 to   0]: *
[  1 to   1]: *
[  2 to   2]: *
[  3 to   3]: *
[  4 to   4]: *
[  5 to   7]: ***
[  8 to  15]: *********
[ 16 to  31]: ***************
[ 32 to  63]: ******************
[ 64 to 127]: ************************
[128 to 255]: *******************************
[256 to 511]: ******************************
[512 to1023]: ********************
[1024 to2047]: *****
[2048 to4095]: *
[4096 to8191]:
```

## Customization

You can customize the number of bins by changing the `NUM_BINS` constant in the code. Additionally, you can modify the bin size and range visualization as needed.

## Author

This program was written by Kriti Bhargava.
