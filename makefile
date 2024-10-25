CC=gcc
CFLAGS=-I.
DEPS = Headers/ArrayAndStrings.h Headers/helpers.h

%.o: Src/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)



clean: 
	rm -rf ./*.o ./*.exe