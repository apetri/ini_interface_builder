CC = clang
CFLAGS = -g -Wall
LDFLAGS = -g

PYTHON = python

driver: options.o ini.o driver.o

ini.o: ini.c ini.h

options.o: options.c

options.c: build_options.py
	$(PYTHON) build_options.py

driver.o: driver.c options.c


.PHONY:clean
clean:
	rm -rf *.o options.h options.c default_options.ini driver