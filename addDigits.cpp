#include <iostream>
using namespace std;

void scan(int &num, int temp = 1) {
	do {
		cout << "Enter a digit:  "; cin >> temp;
		if (temp >= 10)
			cout << "The entered value you've is not valid! \n";
		else if (temp > 0) 
			num = num * 10 + temp;
	} while (temp > 0);
}
void print(int num) {
	cout << "The number made up of the entered digits is: " << num;
}
void main() {
	int num = 0;
	scan(num);
	print(num);

	system("pause>nul");
}
