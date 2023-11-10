#include <iostream>
using namespace std;

int main() {
	// Trabajo con enteros
	int edades[] = {18, 20, 24, 28, 30, 32};
	int *ptr = edades;
	
	cout << "Trabajo con enteros:" << endl << endl;
	for (int i = 0; i < 6; i++) {
		cout << "La direccion del elemento " << i + 1 << " es: " << ptr + i
			<< ", y el valor es: " << *(ptr + i) << endl;
	}
	
	// Trabajo con cadenas
	cout << "\nTrabajo con cadenas:" << endl << endl;
	char cadena[] = "Ciberseguridad";
	char *ptrc = cadena;
	
	for (int i = 0; i < 14; i++) {
		cout << "La direccion del elemento " << i + 1 << " es: " << (void *)(ptrc + i)
																	 << ", y el valor es: " << *(ptrc + i) << endl;
	}
	
	return 0;
}
