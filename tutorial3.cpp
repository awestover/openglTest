#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp> // glm::vec3
#include <glm/gtx/transform.hpp>
#include <glm/gtc/matrix_transform.hpp> 
#include <glm/gtx/string_cast.hpp>

#include "common/shader.cpp"

/*
 * Homogenuos coordinates
 * If w == 1, then the vector (x,y,z,1) is a position in space.
 * If w == 0, then the vector (x,y,z,0) is a direction.
 * */


int main(){
	// Initialise GLFW
	glewExperimental = true; // Needed for core profile
	if( !glfwInit() ) {
		fprintf( stderr, "Failed to initialize GLFW\n" );
		return -1;
	}

	// Identity matrix: 
	glm::mat4 identityMatrix  = glm::mat4(1.0f);
	// Scaling matrix
	glm::mat4 scalingMatrix = glm::scale(glm::mat4(1.0f), glm::vec3(2.0f,2.0f,2.0f));
	// Translation matrix
	glm::mat4 myMatrix = glm::translate(glm::mat4(1.0f), glm::vec3(10.0f, 0.0f, 0.0f));
	// rotation matrix : see quarternions tutorial...
	// glm::vec3 myRotationAxis( ??, ??, ??);
	// glm::rotate( angle_in_degrees, myRotationAxis );

	// applying a matrix to a vector
	glm::vec4 myVector(10.0f, 10.0f, 10.0f, 0.0f);
	glm::vec4 transformedVector = myMatrix * myVector; // guess the result

	std::cout << glm::to_string(identityMatrix) << std::endl;
	std::cout << glm::to_string(scalingMatrix) << std::endl;
	std::cout << glm::to_string(myMatrix) << std::endl;
	std::cout << glm::to_string(transformedVector) << std::endl;
	return 0;
}

