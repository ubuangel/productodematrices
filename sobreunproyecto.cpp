//============================================================================
// Name        : sobreunproyecto.cpp
// Author      : angelote
// Version     :
// Copyright   : Your copyright notice
// Description : Hproductodematrices C++, Ansi-style
//============================================================================

#include <iostream>

void llenar_matriz(int A[][20],int f,int c ){
	    std::cout<<"ingrese datos de la matriz A:\n";
	    for(int i=0;i<f;i++){
	        for(int j=0;j<c;j++){
	            std::cin>>A[i][j];
	        }
	    }
}
void llenar_matriz2(int B[][20],int c,int m){
	    std::cout<<"ingrese datos de la matriz B:\n";
	    for(int i=0;i<c;i++){
	        for(int j=0;j<m;j++){
	            std::cin>>B[i][j];
	        }
	    }
	}
void multmatrix(int (*A)[20],int (*B)[20],int (*Z)[20],int f,int m,int c){

	for (int i = 0; i < f; i++){
		for (int j = 0; j < m; j++){
			 Z[i][j]=0;
			for (int z = 0; z < c; z++){
				Z[i][j] +=A[i][z]* B[z][j];
			}
		}

}
}
void mostrar_matrizA(int (*A)[20],int f,int c ){
	    std::cout<<endl;
	    for(int i=0;i<f ; ++i)
	    {
	        for(int j=0;j<c ;++j)
	        {
	           std::cout<<A[i][j]<<"  ";
	        }
	        std::cout<<endl;
	    }

	}
void mostrar_matrizB(int (*B)[20],int c,int m ){
	    std::cout<<endl;
	    for(int i=0;i<c ; ++i)
	    {
	        for(int j=0;j<m ;++j)
	        {
	           std::cout<<B[i][j]<<"  ";
	        }
	        std::cout<<endl;
	    }

	}
void mostrar_matriz(int (*Z)[20],int f,int m ){
	    std::cout<<endl;
	    for(int i=0;i<f; ++i)
	    {
	        for(int j=0;j<m;++j)
	        {
	           std::cout<<Z[i][j]<<"  ";
	        }
	        std::cout<<endl;
	    }

	}

int main(){
		int m,f,c;
		int A[20][20];//f c
		int B[20][20];// c m
		int Z[20][20];// f m
		std::cout<<" numero de filas de la matriz a \n";
		std::cin>>f;
		std::cout<<" columnas de la matriz a  \n";
		std::cin>>c;
		std::cout<<" numero de filas de la matriz b  \n";
		std::cin>>c;
		std::cout<<" columnas de la matriz b  \n";
		std::cin>>m;

		llenar_matriz(A,f,c);
		llenar_matriz2(B,c,m);


		multmatrix(A,B,Z,f,m,c);

		std::cout<<"La matriz generada A es: \n";
		mostrar_matrizA(A,f,c);
		std::cout<<"La matriz generada B es: \n";
		mostrar_matrizB(B,c,m);
		std::cout<<"La matriz generada es: \n";
		mostrar_matriz(Z,f,m);

}
