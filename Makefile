all:
	g++ -o StudentDB main.cpp
	./StudentDB
clean:
	rm -f StudentDB
