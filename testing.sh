#0 arguments                                                                    
./coolness
#1 argument                                                                      
./coolness 32.0
#1 argument test
./coolness 35.5
#2 arguments                                                                     
./coolness 32.5 10.0
#2 argument test
./coolness 35.0 12.5
#temperature not in range                                                                 
./coolness 75
#wind not in range                                                                 
./coolness 14 0
#3 positive arguments
./coolness 31 2 8
#temperature as decimal
./coolness 17.63 5
#negative wind
./coolness 32 -6
#wind as decimal
./coolness 31 2.2
#2 integers
./coolness 31 8
#not in range
./coolness 56
#negative temperature
./coolness -8 5
#0 wind speed
./coolness 31 0
#max value
./coolness 100 50
#both values are 0
./coolness 0 0




