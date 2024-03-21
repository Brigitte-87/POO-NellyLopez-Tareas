#include <iostream>
using namespace std;
main(){
	
	int notas[4];  // indice o pocision del arreglo inicia en 0 0-3, 0,1,2,3
	notas[0]=80;
	notas[1]=65;
	notas[2]=60;
	notas[3]=75;
	
	cout<<notas[0]<<endl;
		cout<<notas[1]<<endl;
			cout<<notas[2]<<endl;
				cout<<notas[3]<<endl;
				
				
				
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