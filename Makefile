all:
	g++ -o main main.cpp
	# g++ -o student Student.cpp
	./main
clean:
	rm -f main
	# rm -f student