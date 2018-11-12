// Zadanie 1.10: Napisać program obliczajšcy pole powierzchni kuli o promieniu r. P=4*PI*r*r. Uwaga: PI należy zadeklarować jako stałš.

#include <iostream>

using namespace std;

float r;

#define PI 3.1415 //zdefionwane PI

int main()
{
	cout << "Podaj wielkosc promienia r aby obliczyc pole powierchni kuli: ";
		cin >> r;
			if (r==0) cout << "Nie mnozymy zer! " <<endl;
	
	cout << "Pole powierzchni kuli wynosi: " << 4*PI*r*r << endl;

return 0;
}
