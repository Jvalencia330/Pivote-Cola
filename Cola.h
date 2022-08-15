#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#define ROTA 45
#define NUM_SEG 5

class Cola
{
public:
	Cola() {};
	void dibujarCola(float x, float y, float z);
};

