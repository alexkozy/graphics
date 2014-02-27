#include "Cube.h"

const GLfloat Z_WIDTH = 0.4;
const GLfloat XY_WIDTH = 10.0;

static const GLfloat VertexBufferData[] = {
	-XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	-XY_WIDTH,-Z_WIDTH, XY_WIDTH,
	-XY_WIDTH, Z_WIDTH, XY_WIDTH,
	XY_WIDTH,  Z_WIDTH,-XY_WIDTH,
	-XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	-XY_WIDTH, Z_WIDTH,-XY_WIDTH,
	XY_WIDTH,-Z_WIDTH, XY_WIDTH,
	-XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	XY_WIDTH, Z_WIDTH,-XY_WIDTH,
	XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	-XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	-XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	-XY_WIDTH, Z_WIDTH, XY_WIDTH,
	-XY_WIDTH, Z_WIDTH,-XY_WIDTH,
	XY_WIDTH,-Z_WIDTH, XY_WIDTH,
	-XY_WIDTH,-Z_WIDTH, XY_WIDTH,
	-XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	-XY_WIDTH, Z_WIDTH, XY_WIDTH,
	-XY_WIDTH,-Z_WIDTH, XY_WIDTH,
	XY_WIDTH,-Z_WIDTH, XY_WIDTH,
	XY_WIDTH, Z_WIDTH, XY_WIDTH,
	XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	XY_WIDTH, Z_WIDTH,-XY_WIDTH,
	XY_WIDTH,-Z_WIDTH,-XY_WIDTH,
	XY_WIDTH, Z_WIDTH, XY_WIDTH,
	XY_WIDTH,-Z_WIDTH, XY_WIDTH,
	XY_WIDTH, Z_WIDTH, XY_WIDTH,
	XY_WIDTH, Z_WIDTH,-XY_WIDTH,
	-XY_WIDTH, Z_WIDTH,-XY_WIDTH,
	XY_WIDTH, Z_WIDTH, XY_WIDTH,
	-XY_WIDTH, Z_WIDTH,-XY_WIDTH,
	-XY_WIDTH, Z_WIDTH, XY_WIDTH,
	XY_WIDTH, Z_WIDTH, XY_WIDTH,
	-XY_WIDTH, Z_WIDTH, XY_WIDTH,
	XY_WIDTH,-Z_WIDTH, XY_WIDTH
};

GLuint cubeVertexBuffer()
{
	GLuint vertexBuffer = 0;
	glGenBuffers(1, &vertexBuffer);
	glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(VertexBufferData), VertexBufferData, GL_STATIC_DRAW);
	return vertexBuffer;
}

void drawCube(GLuint vertexBuffer)
{
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
	glDrawArrays(GL_TRIANGLES, 0, 12 * 3);

	glDisableVertexAttribArray(0);
}
