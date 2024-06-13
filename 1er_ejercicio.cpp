#include <iostream>
using namespace std;

int main (){
	
	float c1, c2, c3, promedio;
	cout << "Introduce la primera calificacion: ";
	cin >> c1;
	cout << "Introduce la segunda calificacion: ";
	cin >> c2;
	cout << "Introduce la tercera calificacion: ";
	cin >> c3;
	promedio = (c1+c2+c3)/3;
	if (promedio >= 70){
		cout << "Aprobado.";
	} else {
		cout << "Reprobado.";
	}
	return 0;

}
