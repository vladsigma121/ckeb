#include<iostream>
#include<Windows.h>
#include<cstdlib>
using namespace std;

int main()
{
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	//srand(time(NULL));

	//
	//int a;
	//cout << "Введите число: \n\n";
	//cin >> a;

	//int b;
	//cout << "Выберите знак: + - * / : \n\n";
	//cin >> b;

	//int c;
	//cout << "Введите число: \n\n";
	//cin >> c;

	/*int a, b;
	a = 0;
	b = 0;

	char c;

	
while(true){

	cin >> b >> a >> c;

	switch (c) {

	case '+':
		cout << a + b;
		break;

	case '-':
		cout << a - b;
		break;

	case '*':
		cout << a * b;
		break;

	case '/':
		cout << a / b;
		break;

	default:
		return 0;
	}



	}*/

	setlocale(LC_ALL, "rus");


		int a = 0;
		int b = 0;
		char operation;
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		cout << "Введите операцию: ";
		cin >> operation;

		switch (operation) {
		case '-':
			cout << "a - b = " << a - b << '\n';
			break;
		case '+':
			cout << "a + b = " << a + b << '\n';
			break;
		case '*':
			cout << "a * b = " << a * b << '\n';
			break;
		case '/':
			cout << "a / b = " << a / b << '\n';
			break;
		default:
			cout << "Error\n";
		}
	




	return 0;
}
