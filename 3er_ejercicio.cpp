#include<iostream>
using namespace std;

int main(){
	double compra, pago;
	int camisas;
	cout<<"El total de compra es: ";
	cin>>compra;
	cout<<"La cantidad de camisas compradas es: ";
	cin>>camisas;
	
	if(camisas>=3){
		pago=compra*0.8;
		cout<<"La cantidad a pagar es: "<<pago<<endl;
	}else{
		pago=compra*0.9;
		cout<<"La cantidad a pagar es: "<<pago<<endl;
	}
	return 0;
	
}