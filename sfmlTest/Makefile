objects = testSFML.o
main: $(objects)
	g++ -std=c++11 $(objects) -o main -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system -framework OpenGl
testSFML.o: testSFML.cpp
	g++ -std=c++11 -c testSFML.cpp
testGlut: testGlut.cpp
	g++ testGlut.cpp -framework OpenGl -lGLEW -lGLUT
clean:
	rm -f *.o
	rm -f main
