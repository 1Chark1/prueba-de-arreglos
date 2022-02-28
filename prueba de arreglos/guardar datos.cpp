#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;
int main() {

	string productos[100];
	int opc = 0, i=0;
	char vacio = ' ';

	while (opc != 5) {
		system("cls");
		cout << "1 producto" << endl;
		cout << "2 modificar" << endl;
		cout << "3 ver" << endl;
		cout << "4 eliminar" << endl;
		cout << "5 salir" << endl;
		cin >> opc;

		string nombre;
		string nuevo;
		string eliminar;

		switch (opc) {

		case 1: 
			cout << "Ingrese nombre del producto: ";
			cin >> nombre;
			productos[i] = nombre;
			i++;

			break;

		case 2:
			cout << "Ingrese nombre del producto a  modificar: ";
			cin >> nombre;
			cout << "igrese el nuevo nombre: ";
			cin >> nuevo;
			for (int j = 0; j < i; j++) {
				if(productos[j] == nombre) {
					productos[j] = nuevo;
					cout << "Productos modificado correctamente...!";
					break;
				}

			}

			system("pause>nul");

			break;

		case 3:
			for (int j = 0; j < i; j++) {
				cout << "-> " << (j + 1) << "-" << productos[j] << endl;

			}

			system("pause>nul");

			break;

		case 4:
			cout << "Ingrese la letra que desea borrar: " << endl;
			cin >> nombre;

			for (int i = 0; i < nombre.length(); ++i) {
				if (productos[i] == nombre) {
					productos[i] = eliminar;
				}
				else {
					nombre += productos[i];
				}
			}

			cout << "se a eliminado: " << nombre << "\n";
			
			system("pause>nul");
			break;
			

		case 5:
			exit(1);
			
			break;

		}


	}


}