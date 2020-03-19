#include <iostream>
using namespace std;
void citire(int& n, int* x) {
	cout << "Numar de elemente este egal cu"<<" ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
}
void iesiredistincte(int start, int end, int* x) {
	cout << "Cea mai lunga secventa de elemente distincte este "<<" ";
	int i;
	for (i=start; i <= end; i++) {
		cout << x[i] << " ";
	}
}

void iesirepozitivneg(int start, int end, int* x) {
	cout << "Cea mai lunga secventa de elemente cu semne contrare este " << " ";
	int i;
	for (i = start; i <= end; i++) {
		cout << x[i] << " ";
	}
}
void iesiretoate(int start, int end, int* x) {
	cout << "Lista este " << " ";
	int i;
	for (i = start; i < end; i++) {
		cout << x[i]<<" ";
	}
}