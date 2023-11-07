#example 1 (given)
echo 3 -4 5 1 7 0 8 0 15 12 3 5 3 3 3 3 3 |./histogram

#example 2 (given)
echo 3 -4 5 1 7 0 8 0 15 12 3 5 18 19 20 30 7 12 50 34 32 19 44 |./histogram

#values that are grater than the gratest value
echo 2 4 16 10 12 20 8 15 14 |./histogram

#example 2 (given)
echo 150 |./histogram

#values < 16
echo {1..12} |./histogram

#5 numbers only
echo 5 |./histogram

# all identical values
echo 5 5 5 5 5 5 5 5 5 5 |./histogram

#big and small num
echo 0 160 |./histogram

#neg and pos num
echo 3 -7 6 -4 9 -10 5 -12 8 -1 |./histogram

#the same num
echo 2 4 2 2 4 2 2 6 11 7 |./histogram

#large num
echo {1..200} |./histogram
