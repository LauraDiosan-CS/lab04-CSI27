#include<iostream>
using namespace std;
#include"InOut.h"
#include"Seqs.h"
#include"Tests.h"
int main() {
	testseqd();
	testseqsigns();
	int n = 0;
	int* x;
	x = new int[100];

	int start = -1;
	int end = -1;
	
	int choice;

	do {
		cout << endl;
		cout << "1. Citirea listei;\n";
		cout << "2. Cea mai lunga secventa de numere distincte;\n";
		cout << "3. Cea mai lunga secvente de numere cu semne contrare;\n";
		cout << "4. Toata lista;\n";
		cout << "5. Iesire;\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			citire(n, x);
			break;
		case 2:
			seqd(n, x, start, end);
			iesiredistincte(start, end, x);
		
			break;
		case 3:
			seqsigns(n, x, start, end);
			iesirepozitivneg(start, end, x);
			break;
		case 4:
			iesiretoate(0, n, x);
			break;
		case 5:
			break;

		}
	
	
	} while (choice != 5);

	delete[] x;
	return 0;

}