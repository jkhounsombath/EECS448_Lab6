QueueDemo: main.o Queue.o testCases.h
	g++ -g -Wall -std=c++11 main.o Queue.o testCases.o -o QueueDemo

main.o: main.cpp testCases.h
	g++ -g -std=c++11 -c main.cpp testCases.cpp

clean:
	rm main.o QueueDemo *~
