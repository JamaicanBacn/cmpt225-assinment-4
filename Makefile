all:app

app: main.o
	g++ -o app main.o
	
main.o: main.cpp HeapT.h
	g++ -c main.cpp

clean:
	rm -f *.exe *.o *.h.gch