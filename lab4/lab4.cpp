

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

/* zad 3 - kalkulator z funkcjami 

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
*/

/* zad 4 - a do potegi b
int a, b;
int power(int a, int b);

int main() {
	cout << "Enter a whole, positive base (a): ";
	cin >> a;
	cout << "Enter a whole, positive exponent (b): ";
	cin >> b;
	if (a < 0 || b < 0) {
		cout << "Both numbers must be positive." << endl;
	}
	
	else {
		cout << a << " to the power of " << b << " is " << power(a, b) << endl;
	}
	return 0;
}

int power(int a, int b) {
	int result = 1; // a to the power of 0 is 1
	for (int i=0; i<b; i++) {
		result = result * a;
	}
	return result;
}
 */

 /* zad 5 - n! 
int n;
int factorial(int n);

int main() {
	cout << "Enter a natural number (0,1,2,...): ";
	cin >> n;
	if (n < 0) {
		cout << "Number must be natural." << endl;
	}
	else {
		cout << n << "! = " << factorial(n) << endl;
	}
}

int factorial(int n) {
	int result = 1;
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		for (int i = 1; i <= n; i++) {
			result = result * i;
		}
		return result;
	}

}
*/

/* zad 6 */
