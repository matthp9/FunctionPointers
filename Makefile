functionPtrs: functionPtrs.o
	gcc -o functionPtrs functionPtrs.o
	
functionPtrs.o: functionPtrs.c
	gcc -c functionPtrs.c -o functionPtrs.o

clean:
	rm *.o
	rm functionPtrs
