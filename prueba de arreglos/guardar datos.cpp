#include <iostream>
#include <cstdio>

using namespace std;
int main() {

	string productos[100];
	int opc = 0, i=0;

	while (opc != 4) {
		system("cls");
		cout << "1 producto" << endl;
		cout << "2 modificar" << endl;
		cout << "3 ver" << endl;
		cout << "4 salir" << endl;
		cin >> opc;

		string nombre;
		string nuevo;

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

			break;

		case 3:
			for (int j = 0; j < i; j++) {
				cout << "-> " << (j + 1) << productos[j] << endl;

			}

			system("pause");

			break;

		case 4:
			exit(1);
			
			break;

		}


	}


}