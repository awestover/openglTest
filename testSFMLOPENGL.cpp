#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <GL/glut.h>

int main()
{
    // create the window
    sf::Window window(sf::VideoMode(800, 600), "OpenGL", sf::Style::Default, sf::ContextSettings(32));
    window.setVerticalSyncEnabled(true);

    // activate the window
    window.setActive(true);

    // load resources, initialize the OpenGL states, ...

    // run the main loop
    bool running = true;
    while (running) {
        // handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                // end the program
                running = false;
            }
            else if (event.type == sf::Event::Resized) {
                // adjust the viewport when the window is resized
                glViewport(0, 0, event.size.width, event.size.height);
            }
        }

        // clear the buffers
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix
 
	   // Render a color-cube consisting of 6 quads with different colors
	   glLoadIdentity();                 // Reset the model-view matrix
	   glTranslatef(1.5f, 0.0f, -7.0f);  // Move right and into the screen


		glBegin(GL_POLYGON);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(0.5, 0.0, 0.0);
		glVertex3f(0.5, 0.5, 0.0);
		glVertex3f(0.0, 0.5, 0.0);
		glEnd();


		//  glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
		//       // Front
		//       // glColor3f(1.0f, 0.0f, 0.0f);     // Red
		//       glVertex3f( 0.0f, 1.0f, 0.0f);
		//       // glColor3f(0.0f, 1.0f, 0.0f);     // Green
		//       glVertex3f(-1.0f, -1.0f, 1.0f);
		//       // glColor3f(0.0f, 0.0f, 1.0f);     // Blue
		//       glVertex3f(1.0f, -1.0f, 1.0f);
		 
		//       // Right
		//       // glColor3f(1.0f, 0.0f, 0.0f);     // Red
		//       glVertex3f(0.0f, 1.0f, 0.0f);
		//       // glColor3f(0.0f, 0.0f, 1.0f);     // Blue
		//       glVertex3f(1.0f, -1.0f, 1.0f);
		//       // glColor3f(0.0f, 1.0f, 0.0f);     // Green
		//       glVertex3f(1.0f, -1.0f, -1.0f);
		 
		//       // Back
		//       // glColor3f(1.0f, 0.0f, 0.0f);     // Red
		//       glVertex3f(0.0f, 1.0f, 0.0f);
		//       // glColor3f(0.0f, 1.0f, 0.0f);     // Green
		//       glVertex3f(1.0f, -1.0f, -1.0f);
		//       // glColor3f(0.0f, 0.0f, 1.0f);     // Blue
		//       glVertex3f(-1.0f, -1.0f, -1.0f);
		 
		//       // Left
		//       // glColor3f(1.0f,0.0f,0.0f);       // Red
		//       glVertex3f( 0.0f, 1.0f, 0.0f);
		//       // glColor3f(0.0f,0.0f,1.0f);       // Blue
		//       glVertex3f(-1.0f,-1.0f,-1.0f);
		//       // glColor3f(0.0f,1.0f,0.0f);       // Green
		//       glVertex3f(-1.0f,-1.0f, 1.0f);
		//    glEnd();   // Done drawing the pyramid


		// glFlush();

        // end the current frame (internally swaps the front and back buffers)
        window.display();
    }

    // release resources...

    return 0;
}
