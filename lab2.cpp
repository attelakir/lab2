#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	//Задание 1:

	cout << "Задание 1. Введите X, Y и Z\n";
	int x1, y1, z1;
	cin >> x1 >> y1 >> z1;

	//Задание 1.1
	if (
		(x1 % 2 != 0) & (y1 % 2 != 0)
		)
		cout << "1) Condition is true\n";
	else cout << "1) Condition is false\n";
	
	//Задание 1.2
	if (
		(x1 < 20) ^ (y1 < 20)
		)
		cout << "2) Condition is true\n";
	else cout << "2) Condition is false\n";

	//Задание 1.3
	if (
		(x1 == 0) | (y1 == 0)
		)
		cout << "3) Condition is true\n";
	else cout << "3) Condition is false\n";

	//Задание 1.4
	if (
		(x1 < 0) & (y1 < 0) & (z1 < 0)
		)
		cout << "4) Condition is true\n";
	else cout << "4) Condition is false\n";

	//Задание 1.5

	if (
		(x1 % 5 == 0) ^ (y1 % 5 == 0)                        //если X ИЛИ Y кратно 5
		)                                                    //то проверяем Z
		if (z1 % 5 == 0) cout << "5) Condition is false\n";
		else cout << "5) Condition is true\n";
	else if (z1 % 5 == 0) cout << "5) Condition is true\n";
		else cout << "5) Condition is false\n";

	//Задание 1.6
	if (
		(x1 > 100) | (y1 > 100) | (z1 > 100)
		)
		cout << "6) Condition is true\n";
	else cout << "6) Condition is false\n";
	
	//Задание 2:

	cout << "Задание 2. Введите координаты фигур A и B\n";
	using byte = unsigned char;
	int a =0, b = 0;
	pair<byte, byte> A;
	pair<byte, byte> B;
	cin >> A.first >> A.second >> B.first >> B.second; 

	//Задание 2.1
	if (
		(A.first == B.first) | (A.second == B.second)
		)
	{
		cout << "1) Ладья A угрожает полю B\n";
		a++;
	}
	else cout << "1) Ладья А не угрожает полю B\n";

	//Задание 2.2
	if (
		abs(A.first - B.first) == abs(A.second - B.second)
		)
	{
		cout << "2) Слон A угрожает полю B\n";
		b++;
	}
	else cout << "2) Слон А не угрожает полю B\n";

	//Задание 2.3
	if (
		(abs(A.first - B.first) == 1) & (abs(A.second - B.second) == 1)
		)
		cout << "3) Король A может попасть на поле B\n";
	else cout << "3) Король А не может попасть на поле B\n";

	//Задание 2.4
	if (
		(a == 1) | (b == 1)
		)
		cout << "4) Ферзь A угрожает полю B\n";
	else cout << "4) Ферзь А не угрожает полю B\n";

	//Задание 2.5.1
	if (
		(A.second + 1 == B.second) & (A.first == B.first)
		)
		cout << "5.1) Пешка может попасть на поле B\n";
	else cout << "5.1) Пешка не может попасть на поле B\n";

	//Задание 2.5.2
	if (
		(abs(A.first - B.first) == 1) & ((B.second - A.second) == 1)
		)
		cout << "5.2) Пешка угрожает полю B\n";
	else cout << "5.2) Пешка не угрожает полю B\n";
	cout << endl;

	//Задание 3.1
	cout << "Задание 3.1\n";
	for (int i = 1; i != 10; i++)
		cout << i << " x " << 7 << " = " << i * 7 << endl;
	cout << endl;

	//Задание 3.2
	cout << "Задание 3.2. Введите N\n";
	int N;
	cin >> N;
	for (int i = 1; i != 10; i++)
		cout << i << " x " << N << " = " << i * N << endl;
	cout << endl;

	//Задание 4.1
	cout << "Задание 4.1\n";
	for (int i = 8, q = 1; i != 16; q *= i, i++)
		if (i == 15)
			cout << q * i << endl;
	cout << endl;

	//Задание 4.2
	cout << "Задание 4.2\n" << "Введите a\n";
	cin >> a;
	for (;
		(a >= 20) | (a <= 1);
		)
	{
		cout << "Введите другое a\n";
		cin >> a;
	}
	for (long double i = a, q = 1; i != 21; q *= i, i++)
		if (i == 20)
			cout << fixed << q * i << endl;
	cout << endl;

	//Задание 4.3
	cout << "Задание 4.3\n" << "Введите b\n";
	double b2;
	cin >> b2;
	for (;
		(b2 >= 20) | (b2 <= 1);
		)
	{
		cout << "Введите другое b\n";
		cin >> b2;
	}
	for (long double i = 1, q = 1; i != b2 + 1; q *= i, i++)
		if (i == b2)
			cout << fixed << q * i << endl;
	cout << endl;
	
	//Задание 4.4
	cout << "Задание 4.4\n" << "Введите a и b\n";
	double a3, b3;
	cin >> a3 >> b3;
	for (;
		b3 < a3;
		)
	{
		cout << "Введите другие a и b\n";
		cin >> a3 >> b3;
	}
	for (long double i = a3, q = 1; i != b3 + 1; q *= i, i++)
		if (i == b3)
			cout << fixed << q * i << endl;

}