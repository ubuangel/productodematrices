int main(int argc, char **argv) {
	int A[3][2][2]={{{2,5},{7,9}},
					{{3,4},{6,1}},
					{{0,8},{11,13}}};
//A[2][1][1]=3;
	cout<<A<<" "<<*A<< " "<<A[0]<<" "<<&A[0][0]<<'\n';
	cout<<*(A[0][0]+1)<<'\n';
	cout<<'\n';
cout<<A[0][0][0]<<'\n';
cout<<A[0][0][1]<<'\n';
cout<<A[0][1][0]<<'\n';
cout<<A[0][1][1]<<'\n';
cout<<endl;
cout<<A[1][0][0]<<'\n';
cout<<A[1][0][1]<<'\n';
cout<<A[1][1][0]<<'\n';
cout<<A[1][1][1]<<'\n';

cout<<endl;
cout<<A[2][0][0]<<'\n';
cout<<A[2][0][1]<<'\n';
cout<<A[2][1][0]<<'\n';
cout<<A[2][1][1]<<'\n';
cout<<endl;
for (int i = 0; i < 3; ++i) {
	for (int j = 0; j < 2; ++j) {
		for (int k = 0; k < 2; ++k) {
			cout<<"vector["<<i<<"] "<<"["<<j<<"] "<<"["<<k<<"] "<<A[i][j][k]<<"\n";

		}

	}


}
for (int i = 0; i < 3; ++i) {
	for (int j = 0; j < 2; ++j) {
		for (int k = 0; k < 2; ++k) {
			*(*(*(A+i)+j)+k)=2*  *(*(*(A+i)+j)+k);


		}

	}

}
for (int i = 0; i < 3; ++i) {
	for (int j = 0; j < 2; ++j) {
		for (int k = 0; k < 2; ++k) {
			cout<<"ahora el array es :"<<"vector["<<i<<"] "<<"["<<j<<"] "<<"["<<k<<"] "<<A[i][j][k]<<"\n";

		}
	}

}

}
