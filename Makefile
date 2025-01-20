all:
	g++ -Wall helloworld.cpp -o helloworld

run:
	./helloworld

try: all run