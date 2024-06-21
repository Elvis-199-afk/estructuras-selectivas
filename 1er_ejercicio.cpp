#include <iostream>
using namespace std;

int main (){
	
	float c1, c2, c3, promedio;
	
	do{
		
		cout << "Introduce la primera calificacion: ";
		cin >> c1;
		if(c1<0){
			cout<<"Introduzca numeros positivos"<<endl;
			
		}
	}while(c1<0);
	
	do{
		
		cout << "Introduce la segunda calificacion: ";
		cin >> c2;
		if(c2<0){
			cout<<"Introduzca numeros positivos"<<endl;
			
		}
	}while(c2<0);
	
	do{
		
		cout << "Introduce la tercera calificacion: ";
		cin >> c3;
		if(c3<0){
			cout<<"Introduzca numeros positivos"<<endl;
		}
	}while(c3<0);
	system("cls");
	promedio = (c1+c2+c3)/3;
	if (promedio >= 70){
		cout << "===Aprobado==="<<endl;
	} else {
		cout << "===Reprobado==="<<endl;
	}
	return 0;

}
