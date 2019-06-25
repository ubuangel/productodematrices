//============================================================================
// Name        : sobreunproyecto.cpp
// Author      : angelote
// Version     :
// Copyright   : Your copyright notice
// Description : Hproductodematrices C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void llenar_matriz(int A[][20],int f,int c ){
	    cout<<"ingrese datos de la matriz A:\n";
	    for(int i=0;i<f;i++){
	        for(int j=0;j<c;j++){
	            cin>>A[i][j];
	        }
	    }
}
void llenar_matriz2(int B[][20],int c,int m){
	    cout<<"ingrese datos de la matriz B:\n";
	    for(int i=0;i<c;i++){
	        for(int j=0;j<m;j++){
	            cin>>B[i][j];
	        }
	    }
	}
void inicializar(int Z[][20],int f,int m){
	for(int i=0; i<f; ++i)
	        for(int j=0; j<m; ++j)
	            Z[i][j] = 0;
}
void multmatrix(int A[][20],int B[][20],int Z[][20],int m,int f,int c){
	for (int i = 0; i < f; i++)
		for (int j = 0; j < m; j++)
			for (int z = 0; z < c; z++)
				Z[i][j] +=A[i][z]* B[z][j];

}
void mostrar_matrizA(int A[ ][20],int f,int c ){
	    cout<<endl;
	    for(int i=0;i<f ; ++i)
	    {
	        for(int j=0;j<c ;++j)
	        {
	           cout<<A[i][j]<<"  ";
	        }
	        cout<<endl;
	    }

	}
void mostrar_matrizB(int B[ ][20],int c,int m ){
	    cout<<endl;
	    for(int i=0;i<c ; ++i)
	    {
	        for(int j=0;j<m ;++j)
	        {
	           cout<<B[i][j]<<"  ";
	        }
	        cout<<endl;
	    }

	}
void mostrar_matriz(int Z[ ][20],int f,int m ){
	    cout<<endl;
	    for(int i=0;i<f; ++i)
	    {
	        for(int j=0;j<m;++j)
	        {
	           cout<<Z[i][j]<<"  ";
	        }
	        cout<<endl;
	    }

	}

int main(){
		int m,f,c;
		int A[20][20];//f c
		int B[20][20];// c m
		int Z[20][20];// f m
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

		inicializar(Z,f,m);

		multmatrix(A, B,Z,f,m,c);

		cout<<"La matriz generada A es: \n";
		mostrar_matrizA(A,f,c);
		cout<<"La matriz generada B es: \n";
		mostrar_matrizB(B,c,m);
		cout<<"La matriz generada es: \n";
		mostrar_matriz(Z,f,m);

}
