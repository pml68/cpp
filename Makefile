build:
	@g++	-g -std=c++20 main.cpp -o main

clean:
	@rm main

run:
	@g++	-g -std=c++20 main.cpp -o main
	@./main
