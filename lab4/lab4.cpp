

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

/* zad 2 */

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
}