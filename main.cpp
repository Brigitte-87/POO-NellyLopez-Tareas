#include "Cliente.cpp"
#include <iostream>
using namespace std;

main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingresar NIT: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	
	// Instancia de un objeto (mandar a llamar a la clase)
	Cliente obj = Cliente(nombres,apellidos,direccion, telefono,nit);
//	obj.mostrar();
	cout<<"Datos del cliente: "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<",";
//	cout<<"Ingresar NIT: ";
//	cin>>nit;
//	obj.setNit(nit);
//	obj.mostrar(); 
	
	//cout<<obj.getNit();
	
/*	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/

	
}
