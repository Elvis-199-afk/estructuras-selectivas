#include <iostream>
#include <cstdlib>
using namespace std;

float  valor_final(float valor_compra, float descuento){
		descuento = valor_compra*0.2;
		return valor_compra - descuento;
}

int main (){
	float valor_compra, descuento;
	do{
		system("cls");
		cout << "Introduzca el valor de la compra: ";
		cin >> valor_compra;
		if(valor_compra<0){
			cout<<"Introduzca un numero positivo"<<endl;
			system("pause");
		}
	}while(valor_compra<0);
	
	if (valor_compra > 1000){
		cout << "El valor final de la compra es: " <<  valor_final( valor_compra,  descuento) << endl;
	} else {
		cout << "El valor final de la compra es: " << valor_compra << endl;
	}
	return 0;
}
