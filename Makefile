lab2: lab2.o Ranker.o
	g++ -o lab2 lab2.o Ranker.o

lab2.o: lab2.cpp Ranker.h
	g++ -o lab2.o -c lab2.cpp

Ranker.o: Ranker.cpp Ranker.h
	g++ -o Ranker.o -c Ranker.cpp

clean:
	rm lab2.o Ranker.o
