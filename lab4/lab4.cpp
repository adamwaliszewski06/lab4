

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

/* zad 6 - 2 do n-tej
int n;
int power_of_n(int n);

int main() {
	cout << "Enter a natural exponent (0,1,2,...): ";
	cin >> n;
	if (n < 0) {
		cout << "Number must be natural." << endl;
	}
	else {
		cout << "2 to the power of " << n << " is " << power_of_n(n) << endl;
	} 
	return 0;
}

int power_of_n(int n) {

		int result = 1;
		for (int i = 0; i < n; i++) {
			result = result * 2;
		}
		return result;
	}
*/

/* zad 6 z funkcja pow 

#include <cmath>

int n;

int main() {
	cout << "Enter a natural exponent (0,1,2,...): ";
	cin >> n;
	if (n < 0) {
		cout << "Number must be natural." << endl;
	}
	else {
		cout << "2 to the power of " << n << " is " << pow(2,n) << endl;
	}
	return 0;
}
*/


/* zad 7 - Napisz funkcję, która jako argument przyjmuje liczbę całkowitą (szczęśliwy numerek), a następnie losuje
10 liczb całkowitych z przedziału [1, 10] i zlicza ile razy podczas tego losowania pojawił się podany szczęśliwy
numerek oraz ile stanowi to procent wszystkich wylosowanych liczb. Wartość argumentu funkcji powinna być
podana przez użytkownika i powinna należeć do przedziału [1, 10]. 

#include <cstdlib> // biblioteki potrzebne do uzycia rand i srand 
#include <ctime> 

int main() { 
int lucky_number, percentage;
int count = 0;
cout << "Enter a whole number [1-10]: ";
cin >> lucky_number;


srand(static_cast<unsigned>(time(nullptr)));


	for (int i = 0; i < 10; ++i) {  // draws a random number in [0,10], 10 times, and writes them out 
		int x = rand() % (10 + 1);
		cout << x << " ";
		if (x == lucky_number)
			count++;
	}
	percentage = (count * 100) / 10;
	cout << endl << "Your number was drawn " << count << " time(s), " << "which is " << percentage << "% of the numbers drawn." << endl;
	return 0;
}
*/

/* zad 8 - Napisz program, który dla 100 kolejnych liczb naturalnych wykona następujące działania: jeśli liczba jest
parzysta to program obliczy n/2, jeśli liczba jest nieparzysta to obliczy (n − 1)/2. Niech oba te działania będą
zaimplementowane w oddzielnych funkcjach zwracających odpowiednie rozwiązania. 

int odd(int n);
int even(int n);
int n = 1;

int main() {
	for (int i = 1; i <= 100; ++i) {
		if (i % 2 == 0) {
			cout << n << "/2     = " << even(i) << endl;
		}
		else {
			cout << "(" << n << "-1)/2 = " << odd(i) << endl;
		}
		n++;
	}
	return 0;
}

int even(int n) {
	return n / 2;
}

int odd(int n) {
	return (n - 1) / 2;
}
*/