//============================================================================
// Name        : sobreunproyecto.cpp
// Author      : angelote
// Version     :
// Copyright   : Your copyright notice
// Description : Hproductodematrices C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void llenar_matriz(double A[][10],int f,int c ){
	    cout<<"ingrese datos de la matriz a:\n";
	    for(int i=0;i<f;i++){
	        for(int j=0;j<c;j++){
	            cin>>A[i][j];
	        }
	    }
}
void llenar_matriz2(double B[][10],int c,int m){
	    cout<<"ingrese datos de la matriz b:\n";
	    for(int i=0;i<c;i++){
	        for(int j=0;j<m;j++){
	            cin>>B[i][j];
	        }
	    }
	}

void multmatrix(double A[][10],double B[][10],double Z[][10],int m,int f,int c){
for (int i = 0; i < f; i++) {
	for (int j = 0; j < m; j++) {
		for (int z = 0; z < c; z++) {
			Z[i][j]+=A[i][z]*B[z][j];
		}
	}
}
}
void mostrar_matriz(double Z[][10],int f,int m ){
	    cout<<endl;
	    for(int i=0;i<f;i++){
	        for(int j=0;j<m;j++){
	            cout<<Z[i][j]<<" \t";
	        }cout<<endl;
	    }
	    cout<<endl;
	}

int main(){
		int m,f,c;
		double A[10][10];//f c-
		double B[10][10];// c m
		double Z[10][10];// f m
		cout<<" numero de filas de la matriz a \n";
		cin>>f;
		cout<<" columnas de la matriz a  \n";
		cin>>c;
		cout<<" numero de filas de la matriz b  \n";
		cin>>c;
		cout<<" columnas de la matriz b  \n";
		cin>>m;
		llenar_matriz(A,f,c);

		llenar_matriz2(B,c,m);
		multmatrix(A, B,Z,f,m,c);
		mostrar_matriz(Z,f,m);

	}
