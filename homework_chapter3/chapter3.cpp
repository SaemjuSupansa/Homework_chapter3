#include<iostream>
using namespace std;
int main() {
	int numA, numB;
	cout << "Enter A number : ";
	cin >> numA;
	cout << "Enter B number : ";
	cin >> numB;
	cout << "Largest : " << ((numA > numB) ? numA : numB) << endl;
	cout << "Smallest : " << ((numA < numB) ? numA : numB) << endl;
	return 0;
}