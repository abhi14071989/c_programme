CC = gcc

number: numberApp.o numberUtils.o
	$(CC) numberApp.o numberUtils.o -o $@

numberApp.o: numberApp.c number.h
	$(CC) -c numberApp.c

numberUtils.o: numberUtils.c number.h
	$(CC) -c numberUtils.c

clean:
	rm -rf numberApp.o
	rm -rf numberUtils.o
	rm -rf number
