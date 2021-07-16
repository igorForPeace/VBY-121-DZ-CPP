// Задание №1

// 1.	Загадать случайно 100 целых чисел в диапазоне от -100 до 100. 
//Вычислить процент положительных чисел, процент отрицательных чисел и процент нулей.
//Вычислить процент чётных чисел и процент нечётных. 

//#include <iostream>
//#include <time.h>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	srand(time(0));
//	int x;
//	int positive = 0;
//	int negative = 0;
//	int zero = 0;
//	int even_number = 0;
//	int non_even_number = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		x = rand() % 200 - 100;
//		cout << x  << endl;
//		if (x > 0)
//		{
//			positive++;
//		}
//		if (x < 0)
//		{
//			negative++;
//		}
//		if (x == 0)
//		{
//			zero++;
//		}
//		if (x % 2 == 0)
//		{
//			even_number++;
//		}
//		if (x % 2 == 1||x%2==-1)
//		{
//			non_even_number++;
//		}
//
//	}
//	cout << " Положительных - " << positive << "%" << endl;
//	cout << " Отрицательных - " << negative << "%" << endl;
//	cout << " Нулей - " << zero << "%" << endl;
//	cout << " Четные числа - " << even_number << "%" << endl;
//	cout << " Не четные числа - "<<non_even_number<<"%"<<endl;
//	return 0;
//}

// Задание №2

// 2.	Вывести на экран таблицу умножения (таблицу Пифагора).

//#include <iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			
//			cout << i * j << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}

// Задание №3
// 

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	double N; // стипендия студента
//	double M; // затраты студента за месяц
//	cout << " Введите сумму стипендии - ";
//	cin >> N;
//	cout << " Введите сумму затрат в месяц - ";
//	cin >> M;
//	double sum = 0; // затраты на весь учебный период
//	if (N < M)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			sum += M;
//			M *= 1.03;
//		}
//		cout << " Родители должны выслать единовременно - " << sum - N * 10 << " грн." << endl;
//	}
//	else
//	{
//		cout << " Затраты должны превышать стипендию!" << endl;
//		exit(0);
//	}
//	return 0;
//}

// Задание №4
//  4.	Показать на экране прямоугольник размером MxN, состоящий из звёздочек.
//Затем сделать то же самое, но чтоб фигура внутри была пустая (остаётся только рамка).


// Задание с заполненой внутреностью

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int M;  // Ширина прямоугольника
//	cout << " Введите ширину прямоугольника - ";
//	cin >> M;
//	int N;
//	cout << " Введите высоту прямоугольника - ";
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}

// Задание с полостью внутри

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int M;  // Ширина прямоугольника
//	cout << " Введите ширину прямоугольника - ";
//	cin >> M;
//	int N;
//	cout << " Введите высоту прямоугольника - ";
//	cin >> N;
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= M; j++)
//		{
//			if (i > 1 && i < N&&j>1&&j<M)
//			{
//				cout << "  ";
//				continue;
//			}
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}

// Задание №5
// 5.	Показать на экране равнобедренный треугольник 
//(пользователь вводит высоту). 
//Затем сделать то же самое, но чтоб фигура внутри была пустая (остаётся только контур).



//
//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	
//	int H;
//	cout << "Введите высоту треугольника - ";
//	cin >> H;
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < 2 * H -1; j++)
//		{
//			if (i + j < H - 1 ||j>H+i-1 ) {
//				cout << " ";
//				
//			
//			}
//			else {
//				cout << "*";
//			}
//			
//			
//
//		}
//		cout << endl;
//	}
//	return 0;
//}

// Треугольник  с полостью внутри

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int H;
//	cout << "Введите высоту треугольника - ";
//	cin >> H;
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < 2 * H - 1; j++)
//		{
//			if (i == H - 1|| j == H - i - 1||j == H + i-1 )
//			{
//				cout << "*";
//			}
//			else
//			{
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

// Задание № 6
//  6.	Написать программу, которая выводят на экран ромб 
//(длины диагоналей ромба одинаковы по значению, но могут быть равны любому числу). 
//Затем сделать то же самое, но чтоб фигура внутри была пустая (остаётся только контур).

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int H;
//	cout << "Введите высоту диагоналей ромба - ";
//	cin >> H;
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < H; j++)
//		{
//			if (i <= H / 2)
//			{
//				if (j >= H / 2 - i && j <= H / 2 + i)
//				{
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//			}
//			else 
//			{
//				if (j >= H/2 +i -H+1 && j <= H / 2 - i + H - 1)
//				{
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

// Задание с пустым ромбом

//#include<iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	cout << "Введите диагональ ромба - ";
//	int H;
//	cin >> H;
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < H; j++)
//		{
//			
//				if (j == H / 2 - i - 1 || j == H / 2 + i|| i == H + j - H/2|| i == H- j + H/2-1)
//				{
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//			
//			
//			
//			
//			
//			
//		}
//		cout << endl;
//	}
//	return 0;
//}

// Задание №7
// 7.	Определить, является ли введённое число любой разрядности палиндромом 
//(например, 1234321 – палиндром, 12345 – не палиндром).

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	string P;
//	cout << "Введите ваше число - ";
//	cin >> P;
//
//	for (int i = 0; i < P.length() / 2; i++)
//	{
//		if (P[i] == P[P.length() - i - 1])
//		{
//			continue;
//		}
//		else
//		{
//			cout << "Ваше число не палидром" << endl;
//			exit(0);
//		}
//	}
//	cout << "Ваше число палиндром" << endl;
//	return 0;
//}


// Задание №8
//8.	Осуществить циклический сдвиг влево введённого числа на N разрядов
//(например, при сдвиге числа 12345 влево на 3 разряда получится число 45123).

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	string S;
//	cout << "Введите ваше число - ";
//	cin >> S;
//	cout << "Введите значени разряда - ";
//	int N;
//	cin >> N;
//	int i = 0;
//	for (; i < N; i++)
//	{
//		S = S + S[i];
//	}
//	S.erase(0, i);
//	cout << S << endl;
//	return 0;
//}

// Задание №9
//	Вывести на экран каркас параллелепипеда размерностью AxBxC.

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	cout << "Введите высоту параллелепипеда - ";
//	int H;
//	cin >> H;
//	cout << "Введите ширину паралелепипеда -";
//	int A;
//	cin >> A;
//	cout << "Введите глубину параллелепипеда - ";
//	int B;
//	cin >> B;
//	for (int i = 1; i <= H; i++)
//	{
//		for (int j = 1; j <= A+B; j++)
//		{
//			if (i == 1||j== B)
//			{
//				cout << "* ";
//			}
//			else
//			{
//				cout << "# ";
//			}
//		}
//		cout << endl;
//	}
//	
//	return 0;
//}

// Задание №10
//10.	Написать программу, которая выводит на экран все простые числа в диапазоне от 2 до 10.000.000.

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	int i;
//	for (a = 2; a <= 10000000; a++)
//	{
//		for (i = 2; i < a; i++)
//		{
//			if (a % i == 0)
//			{
//				break;
//			}
//			else if (a == i + 1)
//			{
//				cout << a << ", ";
//
//			}
//		}
//	}
//	cout << endl;
//	return 0;
//}

// ЗАдание №11
// 11.	Показать на экране все числа Армстронга в диапазоне от 0 до 10.000.000.

//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//	int sum;
//	for (int n = 1; n <= 10000000; n++)
//	{
//		if (n >= 1 && n <= 9)
//		{
//			cout << n << ", ";
//			continue;
//		}
//		if (n >= 10 && n <= 99)
//		{
//			sum = pow(n / 10, 2) + pow(n % 10, 2);
//			if (sum == n)
//			{
//				cout << n << ", ";
//				continue;
//			}
//			
//		}
//		if (n >= 100 && n <= 999)
//		{
//			sum = pow(n / 100, 3) + pow(n / 10 % 10, 3) + pow(n % 10, 3);
//			if (sum == n)
//			{
//				cout << n << ", ";
//				continue;
//			}
//			
//		}
//		if (n >= 1000 && n <= 9999)
//		{
//			sum = pow(n / 1000, 4) + pow(n / 100 % 10, 4) + pow(n / 10 % 10, 4) + pow(n % 10, 4);
//			if (sum == n)
//			{
//				cout << n << ", ";
//				continue;
//			}
//			
//		}
//		if (n >= 10000 && n <= 99999)
//		{
//			sum = pow(n / 10000, 5) + pow(n / 1000 % 10, 5) + pow(n / 100 % 10, 5) + pow(n/10 % 10, 5)+pow(n%10,5);
//			if (sum == n)
//			{
//				cout << n << ", ";
//				continue;
//			}
//			
//		}
//		if (n >= 100000 && n <= 999999)
//		{
//			sum = pow(n / 100000, 6) + pow(n / 10000 % 10, 6) + pow(n / 1000 % 10, 6) + pow(n / 100 % 10, 6) + pow(n/10 % 10, 6)+pow(n%10,6);
//			if (sum == n)
//			{
//				cout << n << ", ";
//				continue;
//			}
//			
//		}
//		if (n >= 1000000 && n <= 9999999)
//		{
//			sum = pow(n / 1000000, 7) + pow(n / 100000 % 10, 7) + pow(n / 10000 % 10, 7) + pow(n / 1000 % 10, 7) + pow(n / 100 % 10, 7) + pow(n/10 % 10, 7)+pow(n%10,7);
//			if (sum == n)
//			{
//				cout << n << ", ";
//				continue;
//			}
//			
//		}
//	}
//	return 0;
//}

// Задание №12
// 12.	Показать на экране все совершенные числа в диапазоне от 0 до 10.000.000.

//#include <iostream>
//using namespace std;
//int main()
//{
//	int sum = 0;
//	for (int n = 1; n <= 10000000; n++)
//	{
//		for (int b = 1; b < n; b++)
//		{
//			if (n % b == 0)
//			{
//				sum += b;
//				
//			}
//		}
//		if (sum == n)
//		{
//			cout << n << ", ";
//		}
//		sum = 0;
//	}
//	return 0;
//}



// Задание №13
//13.	Показать на экране все числа Фибоначчи в диапазоне от 0 до 10.000.000.

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	int b = 1;
//	cout << a << ", ";
//	cout << b << ", ";
//	for (int b = 1; b <= 10000000;  )
//	{	
//		b = b + a;
//		a = b-a;
//		cout << b << ", ";
//	}
//	return 0;
//}


// Задание №14
// 14.	Написать программу, которая генерирует календарь на любой год, указанный с клавиатуры.



// Задание №15
//15.	Вывести лестницу из отрезков определённой длины.Длина(например, 14) и количество ступенек(например, 4) указывается с клавиатуры.

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	string S = " ";
//	string P = "";
//	
//	cout << "Введите количество ступенек - ";
//	int N;
//	cin >> N;
//	cout << "Введите длину ступенек - ";
//	int L;
//	cin >> L;
//	
//	for (int i = 0; i < N; i++)
//	{
//		
//
//		
//			cout << P;
//			for (int j = 0; j < L; j++)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			P += S;
//		
//		
//	}
//	return 0;
//}

// Задание №16
// Показать на экране лесенку.

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	string S = "  ";
//	string P = "  ";
//	
//	cout << "Введите количество ступенек - ";
//	int N;
//	cin >> N;
//	
//	
//	for (int i = 0; i <= N; i++)
//	{
//		if (i == N)
//		{
//			cout << "***" << endl;
//			exit(0);
//		}
//		cout << "***" << endl;
//		cout << P;
//	    cout << "*" << endl;
//				
//	    cout << P;
//				P += S;
//				
//			
//		
//		
//	}
//	return 0;
//}


// задание №17
//Пользователь указывает с клавиатуры нечётное число. Рисуется фигура с заданной стороной

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	cout << "Введите нечетное число - ";
//	int n;
//	cin >> n;
//	if (n % 2 == 0)
//	{
//		cout << "Ваше число четное! " << endl;
//		exit(0);
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if ( i == 0 || j == 0 || i == n-1 || j == n-1|| i == j)
//				{
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == n - 1 - j)
//				{
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//					
//			}
//			cout << endl;
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if ( i ==0||j==0||i==n-1||j==n-1|| j == n/2 )
//				{
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == n / 2)
//				{
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				
//				if (i ==0 || j == 0 || i == n - 1 || j == n -1  || i == j)
//				{
//					if (i == 0 && j > n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (j == 0 && i > n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n - 1 && j < n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (j == n - 1 && i < n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					cout << "*";
//				}
//				else 
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == n - j- 1)
//				{
//					if (i == 0 && j < n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (j == 0 && i < n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n - 1 && j > n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (j == n - 1 && i > n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == j||i==n-j-1)
//				{
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == j || i == n - j - 1)
//				{
//					if (i == 0 && j >= 1 && j < n - 1)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n - 1 && j >= 1 && j < n - 1)
//					{
//						cout << " ";
//						continue;
//					}
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == j || i == n - j - 1)
//				{
//					if (j == 0 && i >= 1 && i < n - 1)
//					{
//						cout << " ";
//						continue;
//					}
//					if (j == n - 1 && i >= 1 && i < n - 1)
//					{
//						cout << " ";
//						continue;
//					}
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if ( i ==0 || j == 0 || i == n - 1 || j == n - 1 || j == n / 2|| i == n/2)
//				{
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || j == n / 2 || i == n / 2)
//				{
//					if (i == 0 && j == 0)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == 0 && j >= n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (j == n - 1 && i <= n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (j < n / 2 && i > n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n / 2 && j == 0)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n / 2 && j == n/2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n -1 && j == n-1)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n - 1 && j == n/2)
//					{
//						cout << " ";
//						continue;
//					}
//					
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//		}
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1 || j == n / 2 || i == n / 2)
//				{
//					if (i < n / 2 && j < n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i > n / 2 && j > n / 2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == 0 && j == n / 2 )
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == 0 && j == n -1)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n/2 && j == n/2)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n / 2 && j == n -1)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n / 2 && j == 0)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n-1  && j == 0)
//					{
//						cout << " ";
//						continue;
//					}
//					if (i == n -1 && j == n/2)
//					{
//						cout << " ";
//						continue;
//					}
//					cout << "*";
//				}
//				else
//				{
//					cout << " ";
//				}
//
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}

//Задание №18.	
//Нарисовать двойным циклом for - домик, с крышей, окном и трубой.Высота домика указывается с клавиатуры.

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	cout << " Введите высоту домика - ";
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == n / 2)
//			{
//				cout << "|---|";
//				continue;
//			}
//			if (j == 2&&i>0)
//			{
//				cout << "|###|";
//				continue;
//			}
//			if (i + j < n/2 || j>n/2 + i )
//			{
//				cout << "     ";
//				continue;
//			}
//			if (j == n - 3 && i == n - 3)
//			{
//				cout << "|   |";
//				continue;
//			}
//			if (j == n - 4 && i == n - 3)
//			{
//				cout << "|   |";
//				continue;
//			}
//			if (j == n - 4 && i == n - 4)
//			{
//				cout << "|___|";
//				continue;
//			}
//			if (j == n - 3 && i == n - 4)
//			{
//				cout << "|___|";
//				continue;
//			}
//			cout << "|###|";
//
//		}
//		cout << endl;
//	}
//	return 0;
//}


// Задние №19
// Скоро ведь Новый год! Необходимо срочно нарисовать ёлочку. 
//С клавиатуры вводится количество ярусов, и высота каждого яруса ёлочки. 
//Например, на картинке 4 яруса, высота каждого яруса – 5 символов

#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите количество ярусов ёлки - ";
	int n;
	cin >> n;
	cout << "Введите высоту каждого яруса -  ";
	int h;
	cin >> h;
	string t = " ";
	string S = "()()";
	string P = "()";
	for (int i = 0; i < n; i++)
	{

		string P = "()";
		string S = "()()";
		string t = "  ";

		for (int j = 0; j < h; j++)
		{
			int k;
			for (k = h - j; k > 0; k--)
			{
				cout << t;

			}


			cout << P;
			P = P + S;

			cout << endl;
		}


	}
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < h + n / 2; j++)
		{
			cout << t;
		}
		cout << "()()()" << endl;
	}
	return 0;
}

//if (j == h - j - 1)
//{
//	cout << t + t;
//}