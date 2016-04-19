#include <stdio.h>
#include <time.h>
#include "point.h"
#include "matrix.h"
#include "stack.h"


int main(int argc, char const *argv[]) {
	int n = 10;
	row = n;
	col = n;
	int matrix[row][col];
	fillMatrix(matrix);
	printMatrix(matrix);
	/*

	//criando pontos
	struct POINT p0 = createPoint(1,1);
	struct POINT p1 = createPoint(2,3);
	struct POINT p2 = createPoint(3,4);
	struct POINT p3 = createPoint(5,6);

	//criando pilha
	int size = 3;
	struct POINT points[size];
	struct STACK s = createStack(size, points);

	//adicionando pontos pra pilha
	pushStack(p1, &s);
	pushStack(p2, &s);

	//imprimindo pilha
	printStack(&s);
	*/
	int size = n*n; // define tamanho máximo da pilha
	struct POINT points[size]; // cria vetor de ponto
	struct STACK stack = createStack(size, points); // cria pilha
	struct POINT p0 = createPoint(0,0);
	pushStack(p0,&stack); // empilha primeira posição
	visitMatrix(p0,matrix);
	
	

	printMatrix(matrix);
	
	
	printStack(&stack);
	return 0;
}
