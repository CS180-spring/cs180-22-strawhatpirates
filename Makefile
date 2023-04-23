all:
	g++ -o test test.cpp
	./test
clean:
	rm -f test