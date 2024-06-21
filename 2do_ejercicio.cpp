#include <iostream>
using namespace std;

int main (){
	
	float valor_compra, valor_final, descuento;
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
		descuento = valor_compra*0.2;
		valor_final = valor_compra - descuento;
		cout << "El valor final de la compra es: " << valor_final << endl;
	} else {
		valor_final = valor_compra;
		cout << "El valor final de la compra es: " << valor_final << endl;
	}
	return 0;
}
