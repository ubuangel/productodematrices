//============================================================================
// Name        : sobreunproyecto.cpp
// Author      : angelote
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;



void llenar_matriz(int A[][c],int f,int c ){
	    cout<<"ingrese datos de la matriz a:"<<endl;
	    for(int i=0;i<f;i++){
	        for(int j=0;j<c;j++){
	            cin>>A[i][j];
	        }
	    }
}
void llenar_matriz(int B[][m],int c,int m){
	    cout<<"ingrese datos de la matriz b:"<<endl;
	    for(int i=0;i<c;i++){
	        for(int j=0;j<m;j++){
	            cin>>B[i][j];
	        }
	    }
	}

int multmatrix(int A[][c],int B[][m],int Z[f][m]){
for (int i = 0; i < f; i++) {
	for (int j = 0; j < m; j++) {
		for (int z = 0; z < c; z++) {
			Z[i][j]+=A[i][z]*B[z][j];
		}
	}
}
}
void mostrar_matriz(double M[3][3]){
	    cout<<endl;
	    for(int i=0;i<3;i++){
	        for(int j=0;j<3;j++){
	            cout<<M[i][j]<<"\t";
	        }cout<<endl;
	    }
	    cout<<endl;
	}

int main(){
		int m,f,c;
		int A[f][c];
		int B[c][m];
		int Z[f][m];
		cout<<" numero de filas dematriz a "<<endl;
		cin>>f;
		cout<<" columnas de matriz a "<<endl;
		cin>>c;
		cout<<" numero de filas dematriz b "<<endl;
		cin>>c;
		cout<<" columnas de matriz b "<<endl;
		cin>>m;
		llenar_matriz(A,f,c);
		llenar_matriz(B,c,m);
		multmatrix(A, B,Z);

	}
