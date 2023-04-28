all:
	g++ -o main main.cpp
	# g++ -o student Student.cpp
	g++ -o StudentDB main.cpp
	./StudentDB
	./main
clean:
	rm -f main
	# rm -f student
	rm -f StudentDB
