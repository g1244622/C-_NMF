# CC = g++
FILE += -I./Algorithm

all: OneDimentionNMF


OneDimentionNMF.o: OneDimentionNMF.cpp
	$(CC) -O3 -c OneDimentionNMF.cpp $(FILE)

clean:
	rm OneDimentionNMF
	rm *.o

# CC = g++
# INC += -I./Algorithm
# CFLAGS = -c -g -Wall -Wextra
# OBJS=$(patsubst %.cpp,%.o,$(shell find ./ -name "*.cpp" -print))
#
# all: OneDimentionNMF
#
# %.o: %.cpp
# 	$(CC) -O3 -c -o $@ $< $(INC) $(CFLAGS)
#
# PossessingDrums.o: OneDimentionNMF.cpp
# 	$(CC) -O3 -c OneDimentionNMF.cpp $(INC)
#
# clean:
# 	rm OneDimentionNMF
# 	rm *.o
