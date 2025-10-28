

#include <iostream>
using namespace std;

/* zad 1 
int ktora_wieksza(int a, int b);
void wyswietlanie_wiekszej (int a, int b);


int main()
{
    int a, b;
	cout << "Podaj dwie liczby calkowite: ";
	cin >> a >> b;
	wyswietlanie_wiekszej(a, b);
	return 0;
}

int ktora_wieksza (int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

void wyswietlanie_wiekszej(int a, int b) {
	cout << "Wieksza liczba to: " << ktora_wieksza(a, b) << endl;
}
*/

/* zad 2 

int n; 
void wypisz_dzielniki(int n);

int main() {
	wypisz_dzielniki(n);
}

void wypisz_dzielniki(int n) {
	cout << "Podaj liczbe dodatnia calkowita: ";
	cin >> n;
	if (n > 0) {
		cout << "Dzielniki liczby " << n << " to: ";
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				cout << i << " ";
			}
		}
	}
	else {
		cout << "Podana liczba nie jest dodatnia." << endl;
	}
} */

/* zad 3 - kalkulator z funkcjami */

float a, b;
char operation;
bool fini; //finish? 

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);


int main() {

	while (1) {
		cout << "Enter two numbers: ";
		cin >> a;
		cin >> b;
		cout << "Enter the operation (+, -, *, /): ";
		cin >> operation;
		switch (operation) {
		case '+':
			cout << "Result: " << addition(a,b) << endl;
			break;
		case '-':
			cout << "Result: " << subtraction(a,b) << endl;
			break;
		case '*':
			cout << "Result: " << multiplication(a,b) << endl;
			break;
		case '/':
			if (b != 0) {
				cout << "Result: " << division(a, b) << endl;
			}
			else {
				cout << "Error: division by zero." << endl;
			}
			break;
		default:
			cout << "Invalid operation" << endl;
		}
		cout << "Finish? (Enter 0 to finish or 1 to continue) ";
		cin >> fini;
		if (fini == false)
			return 0;
		else
			continue;

	}
}

float addition(float a, float b) {
	return a + b;
}
float subtraction(float a, float b) {
	return a - b;
}

float multiplication(float a, float b) {
	return a * b;
}

float division(float a, float b) {
		return a / b;
	}
