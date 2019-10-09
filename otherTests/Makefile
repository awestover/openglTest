# Link: GL GLEW SDL2
objects=helloWorld.o
main: $(objects)
	g++ -std=c++11 $(objects) -o main -lsdl2 -lGLEW -framework OpenGL -framework GLUT
helloWorld.o: helloWorld.cpp 
	g++ -std=c++11 -c helloWorld.cpp
tutorial4: tutorial4.cpp
	g++ tutorial4.cpp -o tutorial4 -lGLEW -framework OpenGl -I/usr/local/include -lglfw
	./tutorial4
testSFMLOPENGL: testSFMLOPENGL.cpp
	g++ testSFMLOPENGL.cpp -o testSFMLOPENGL -lsfml-graphics -lsfml-window -lsfml-system -Wno-deprecated-declarations -framework OpenGl -lGLEW
clean:
	rm -f main
	rm -f *.o
