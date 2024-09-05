#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);

	string *pS=nullptr;
	string mes[3];

	int tam, i,j;
	cout<<"Defina el tamaño: ";
	cin>>tam;

	pS=new string[tam];
	if(pS==nullptr){
		return 1;
	}else{
		cout<<"Todo Ok por le momento."<<endl;
	}
	cin.ignore();

	for(i=0;i<tam;i++){
		cout<<"Ingrese el mes: ";
		getline(cin,mes[i]);
	}

	for(j=0;j<tam;j++){
		cout<<"Mes: "<<mes[j]<<endl;
	}



	/*for(int i=0;i<3;i++){
		cout<<"Ingrese el mes: ";
		getline(cin,mes[i]);
	}

	for(int i=0;i<3;i++){
		cout<<"Mes: "<<mes[i]<<endl;
	}*/
	return 0;
}
