#ifndef _MATRIX_H
#define _MATRIX_H

int row;
int col;

void fillMatrix(int matrix[][col]);

void printMatrix(int matrix[][col]);

void visitMatrix(struct POINT point, int matrix[][col]);

int isVisited(struct POINT point,int matrix[][col]);

struct POINT getPath(struct POINT point, int matrix [][col]);


#endif
