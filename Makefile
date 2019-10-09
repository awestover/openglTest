tutorial2: tutorial2.cpp
	g++ tutorial2.cpp -o tutorial2 -lGLEW -framework OpenGl -I/usr/local/include -lglfw
	./tutorial2
tutorial3: tutorial3.cpp
	g++ tutorial3.cpp -o tutorial3 -lGLEW -framework OpenGl -I/usr/local/include -lglfw
	./tutorial3
tutorial32: tutorial3_part2.cpp
	g++ tutorial3_part2.cpp -o tutorial32 -lGLEW -framework OpenGl -I/usr/local/include -lglfw
	./tutorial32
tutorial4: tutorial4.cpp
	g++ tutorial4.cpp -o tutorial4 -lGLEW -framework OpenGl -I/usr/local/include -lglfw
	./tutorial4
testAlt4: testAlt4.cpp
	g++ testAlt4.cpp -o testAlt4 -lGLEW -framework OpenGl -I/usr/local/include -lglfw 
	./testAlt4
lotsOfCubes: lotsOfCubes.cpp
	g++ lotsOfCubes.cpp -o lotsOfCubes -lGLEW -framework OpenGl -I/usr/local/include -lglfw 
	./lotsOfCubes
testSFMLOPENGL: testSFMLOPENGL.cpp
	g++ testSFMLOPENGL.cpp -o testSFMLOPENGL -lsfml-graphics -lsfml-window -lsfml-system -Wno-deprecated-declarations -framework OpenGl -lGLEW
clean:
	rm -f main
	rm -f *.o
