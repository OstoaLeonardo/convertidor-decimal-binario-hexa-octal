#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
 
int main()
{
	int decimal, decimalO, decimalH;
	int opcion;
	
	do {
		cout << "------------------------------------------------" << endl;
		cout << "Numero decimal: ";
		cin >> decimal;
		decimalO = decimal;
		decimalH = decimal;
		cout << "------------------------------------------------" << endl;
		cout << "Numero binario: ";
	
		int binario[30]={0}, residuoB;
	
		if(decimal > 0) {
			int i = 0;
			while (decimal > 0) {
				residuoB = decimal%2;
				binario[i] = residuoB;
				decimal = decimal/2;
				//cout << residuoB << " ";
				i++;
			}
		} else {
			cout << "0" << endl;
		}
	
		int primerB = 0;
		for(int i=30; i>=0; i--) {
			if(binario[i]==0 && primerB==0) {
				primerB = 0;
			} else {
				cout << binario[i];
				primerB = 1;
			}
		}
	
		cout << endl << "------------------------------------------------" << endl;
		cout << "Numero octal: ";
	
		int octal[15]={0}, residuoO;
	
		if(decimalO > 0) {
			int i = 0;
			while (decimalO > 0) {
				residuoO = decimalO%8;
				octal[i] = residuoO;
				decimalO = decimalO/8;
				//cout << residuoO << " ";
				i++;
			}
		} else {
			cout << "0" << endl;
		}
	
		int primerO = 0;
		for(int i=15; i>=0; i--) {
			if(octal[i]==0 && primerO==0) {
				primerO = 0;
			} else {
				cout << octal[i];
				primerO = 1;
			}
		}
	
		cout << endl << "------------------------------------------------" << endl;
		cout << "Numero hexadecimal: ";
	
		char hexa[15]="", charH[2]="";
		int residuoH;
	
		if(decimalH > 0) {
			int i = 0;
			while (decimalH > 0) {
				residuoH = decimalH%16;
				itoa(residuoH, charH, 16);
				hexa[i] = charH[0];
				decimalH = decimalH/16;
				//cout << residuoH << " ";
				i++;
			}
		} else {
			cout << "0" << endl;
		}
	
		int primerH = 0;
		for(int i=15; i>=0; i--) {
			if(hexa[i]==0 && primerH==0) {
				primerH = 0;
			} else {
				cout << hexa[i];
				primerH = 1;
			}
		}
	
		cout << endl << "------------------------------------------------" << endl;
		cout << "Reiniciar [1 = Si][0 = No]: ";
		cin >> opcion;
		system("cls");
	}while(opcion==1);
	
    return 0;
}
