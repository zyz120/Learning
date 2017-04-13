#ifndef _SHADER_H_
#define _SHADER_H_
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <GL\glew.h>

class Shader
{
public :
	GLuint Program;
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);

	void use();
};

#endif