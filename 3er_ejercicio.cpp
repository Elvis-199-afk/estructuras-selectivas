#include<iostream>
using namespace std;

int main(){
	double compra, pago;
	int camisas;
	
	do{
		system("cls");
		cout<<"El total de compra es: ";
		cin>>compra;
		if(compra<0){
			cout<<"El valor a pagar debe ser positivo. Intente de nuevo"<<endl;
			system("pause");
		}	
		
	}while(compra<0);
	
	do{
		cout<<"La cantidad de camisas compradas es: ";
		cin>>camisas;
		if(camisas<0){
			cout<<"La cantidad de camisas no puede ser negativo. Intente de nuevo"<<endl;
		}	
	}while(camisas<0);

	
	if(camisas>=3){
		pago=compra*0.8;
		cout<<"La cantidad a pagar es: "<<pago<<endl;
	}else{
		pago=compra*0.9;
		cout<<"La cantidad a pagar es: "<<pago<<endl;
	}
	return 0;
	
}