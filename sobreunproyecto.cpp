/*
 * litlle.cpp
 *
 *  Created on: 3 jul. 2020
 *      Author: angel
 */
#include<iostream>
#include<vector>
#include <cassert>
using namespace std;

double **iniciar(const int filas,const int columnas) {

	double **mat = new double*[filas];
	for (size_t i = 0; i < filas; ++i)
		mat[i] = new double[columnas];

	return mat;

}

void llenar_matriz(double **A,const  int f,const int c) {
	std::cout << "ingrese datos de la matriz A:\n";
	for (size_t i = 0; i < f; i++) {
		for (size_t j = 0; j < c; j++) {
			std::cin >> A[i][j];
		}
	}
}


void mostrar_matriz(double **mat, const int f, const int c) {
	for (size_t i = 0; i < f; ++i) {
		for (size_t j = 0; j < c; ++j) {
			std::cout << mat[i][j] << "  ";
		}
		std::cout << std::endl;
	}

}

void destruir(double **&mat,const int filas) {
	 if (mat)
	    {
	        for (size_t i = 0; i < filas; ++i)
	        {
	            delete[] mat[i]; //delete each row..
	        }

	        delete[] mat;  //delete the rows..
	        mat = nullptr;
	    }

}

int main() {
	int m, f, c,d;

	std::cout << " numero de filas de la matriz a \n";
	std::cin >> f;
	std::cout << " columnas de la matriz a  \n";
	std::cin >> c;
	std::cout << " numero de filas de la matriz b  \n";
	std::cin >> d;
	 assert(c == d);
	std::cout << " columnas de la matriz b  \n";
	std::cin >> m;

	double** matA = iniciar(f, c);
	double** matB = iniciar(d, m);
	double** matC = iniciar(f, m);

	llenar_matriz(matA,f,c);
	llenar_matriz(matB,c,m);


for (int i = 0; i < f; ++i) {
	for (size_t j = 0; j < m; ++j) {
		matC[i][j]=0;
		for (int z = 0; z < d; ++z) {
			matC[i][j]+=matA[i][z]*matB[z][j];
		}
	}
}

std::cout << "La matriz generada A es: \n";
	mostrar_matriz(matA, f, c);
	std::cout << "La matriz generada B es: \n";
	mostrar_matriz(matB, d, m);
	std::cout << "La matriz generada es: \n";
	mostrar_matriz(matC, f, m);

destruir(matA,f);
destruir(matB,f);
destruir(matC,f);



}
