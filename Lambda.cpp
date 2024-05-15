//////////////////////////////////////////////////
// UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE      //
//                                              //
// DESCRIPCION DEL PROBLEMA: Deber Lambda       //
// AUTOR: Pablo Antonio Campoverde Jimenez      //
// FECHA DE CREACION: 14/05/2024                //
//////////////////////////////////////////////////

//PRIMERA FORMA: Dentro de una Funcion
#include <iostream>
#include <functional>

int main() {

	auto Operacion = [](int a, int b) {return a + b; };
	auto Operacion = [](int a, int b) {return a - b; };
	auto Operacion = [](int a, int b) {return a * b; };
	auto Operacion = [](float a, float b) {return a / b; };

	cout << Operacion(8, 5) << endl;
	cout << Operacion(8, 5) << endl;
	cout << Operacion(8, 5) << endl;
	cout << Operacion(8, 5) << endl;
}
