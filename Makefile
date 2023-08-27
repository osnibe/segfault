CC=gcc

all: seg

seg: seg.c
	$(CC) -g -O0 seg.c -o seg

clean:
	find . -type f -executable -exec rm -f {} \;
