#include <iostream>
#include <cmath>

using namespace std;

//void main()
//{
//	int a;
//	int b;
//	int c;
//	int result;
//	setlocale(LC_ALL, "Russian");
//	cout << "Введите первое число: " << endl;
//	cin >> a;
//	cout << "Введите второе число: " << endl;
//	cin >> b;
//	cout << "Введите третье число: " << endl;
//	cin >> c;
//	result = a + b + c;
//	result = result / 3;
//	cout << "Среднее арифметическое введенных чисел: " << result << endl;
//}
// 
//void main()
//{
//	int a;
//	int b;
//	int x;
//	setlocale(LC_ALL, "Russian");
//	cout << "Это приложение решает уровнения вида ax + b = 0.\n Введите значение a: " << endl;
//	cin >> a;
//	cout << "Введите значение b: " << endl;
//	cin >> b;
//	x = -b / a;
//	cout << "Значение x: " << x << endl;
//
//}
// 
//void main()
//{
//	int a;
//	int b;
//	setlocale(LC_ALL, "Russian");
//	cout << "Эта программа вычисляет значение числа возведенного в степень, для начала введите число которое возводится: " << endl;
//	cin >> a;
//	cout << "Введите сетепень: " << endl;
//	cin >> b;
//	cout << "Результат: " << pow(a, b) << endl;
//}
// 
//void main()
//{
//	double rad;
//	double s;
//	double l;
//	const double PI = 3.14;
//	setlocale(LC_ALL, "Russian");
//	cout << "Эта программа находит площадь и длинну окружности по радиусу. Введите радиус: " << endl;
//	cin >> rad;
//	s = PI * pow(rad, 2);
//	l = 2 * rad * PI;
//	cout << "Площадь окружнсти равняется: " << s << endl << "Длинна окружности равняется: " << l << endl;
//}
//
//void main()
//{
//	int uah;
//	double usd;
//	double eur;
//	double btc;
//	const double USDC = 0.037;
//	const double EURC = 0.031;
//	const double BTCC = 9.103554756061147 * pow(10, -7);
//	setlocale(LC_ALL, "Russian");
//	cout << "Эта программа конвертирует UAH в USD, EUR и BTC. Введите сумму в UAH: " << endl;
//	cin >> uah;
//	usd = uah * USDC;
//	eur = uah * EURC;
//	btc = uah * BTCC;
//	cout << "UAH - > " << uah << "\nUSD - > " << usd << "\nEUR - > " << eur << "\nBTC - > " << btc << endl;
//}
//
//void main()
//{
//	int km;
//	setlocale(LC_ALL, "Russian");
//	cout << "Эта программа переводит километры в сухопутные и морские мили. Введите количество километров: " << endl;
//	cin >> km;
//	cout << "Километры - > " << km << "\nСухопутные мили - > " << km * 0.621371192 << "\nМорские мили - > " << km * 0.539956803;
//}
//
//void main()
//{
//	double p;
//	double n;
//	setlocale(LC_ALL, "Russian");
//	cout << "Эта программа находит процент от числа. Введите число:" << endl;
//	cin >> n;
//	cout << "Введите процент:" << endl;
//	cin >> p;
//	cout << "Результат: " << n / 100 * p;
//}
//
//void main()
//{
//	double cel;
//	double far;
//	double kel;
//	double reo;
//	double del;
//	int fl;
//	setlocale(LC_ALL, "Russian");
//	cout << "Эта программа переводит градусы Цельсия в градусы по: Фаренгейту, Кельвину, Реомюру и Делилю,\n либо градусы Фаренгейта в градусы по: Цельсию, Кельвину, Реомюру, Делилю.\n Для начала работы программы введите:\n1\t-\tдля конвертации из шкалы цельсия.\n2\t-\tдля конвертации из шкалы Фаренгейта." << endl;
//	cin >> fl;
//	if (fl == 1)
//	{
//		cout << "Введите температуру в градусах Цельсия: ";
//		cin >> cel;
//		far = cel * 1.8 + 32;
//		kel = cel + 273.15;
//		reo = cel * 0.8;
//		del = cel * 1.5 - 100;
//		cout << "Цельсий - > " << cel << "\nФаренгейт - > " << far << "\nКельвин - > " << kel << "\nРеомюр - > " << reo << "\nДелиль - > " << del;
//	}
//	else if (fl == 2)
//	{
//		cout << "Введите температуру в градусах Фаренгейта: ";
//		cin >> far;
//		far -= 32;
//		cel = far / 1.8;
//		kel = far / 1.8 + 273.15;
//		reo = far * 0.44444;
//		del = far * 0.83333 - 100;
//		far += 32;
//		cout << "Цельсий - > " << cel << "\nФаренгейт - > " << far << "\nКельвин - > " << kel << "\nРеомюр - > " << reo << "\nДелиль - > " << del;
//	}
//	else if (fl < 1 || fl > 2)
//	{
//		cout << "Вы ввели неверное число!" << endl;
//	}
//}
//
void main()
{
	int a;
	int b;
	int c;
	setlocale(LC_ALL, "Russian");
	cout << "Эта программа меняет местами переменные. Введите переменную a:" << endl;
	cin >> a;
	cout << "Введите переменную b:" << endl;
	cin >> b;
	c = b;
	b = a;
	a = c;
	cout << "Через три переменные - a: " << a << " b: " << b << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Через две переменные снова поменяем их местами - a: " << a << " b: " << b << endl;
}