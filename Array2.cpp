#include <iostream>
using namespace std;
main(){
	
	
		int tam=0;
				cout<<"Cuantos notas desea ingresar";
				cin>>tam;// 5
				int notas[tam];
				for (int i=0;i<tam;i++){
					cout<<"ingresa Notas" <<i+1<<":";
					cin>>notas[i];
					
				}
				
				for(int i=0;i<tam;i++){
					cout<<notas[i]<<endl;
				}
}