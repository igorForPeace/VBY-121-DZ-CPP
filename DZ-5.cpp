// ������� �1

// 1.	�������� �������� 100 ����� ����� � ��������� �� -100 �� 100. 
//��������� ������� ������������� �����, ������� ������������� ����� � ������� �����.
//��������� ������� ������ ����� � ������� ��������. 

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
//	cout << " ������������� - " << positive << "%" << endl;
//	cout << " ������������� - " << negative << "%" << endl;
//	cout << " ����� - " << zero << "%" << endl;
//	cout << " ������ ����� - " << even_number << "%" << endl;
//	cout << " �� ������ ����� - "<<non_even_number<<"%"<<endl;
//	return 0;
//}

// ������� �2

// 2.	������� �� ����� ������� ��������� (������� ��������).

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

// ������� �3
// 

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	double N; // ��������� ��������
//	double M; // ������� �������� �� �����
//	cout << " ������� ����� ��������� - ";
//	cin >> N;
//	cout << " ������� ����� ������ � ����� - ";
//	cin >> M;
//	double sum = 0; // ������� �� ���� ������� ������
//	if (N < M)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			sum += M;
//			M *= 1.03;
//		}
//		cout << " �������� ������ ������� ������������� - " << sum - N * 10 << " ���." << endl;
//	}
//	else
//	{
//		cout << " ������� ������ ��������� ���������!" << endl;
//		exit(0);
//	}
//	return 0;
//}

// ������� �4
//  4.	�������� �� ������ ������������� �������� MxN, ��������� �� ��������.
//����� ������� �� �� �����, �� ���� ������ ������ ���� ������ (������� ������ �����).


// ������� � ���������� ������������

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int M;  // ������ ��������������
//	cout << " ������� ������ �������������� - ";
//	cin >> M;
//	int N;
//	cout << " ������� ������ �������������� - ";
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

// ������� � �������� ������

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int M;  // ������ ��������������
//	cout << " ������� ������ �������������� - ";
//	cin >> M;
//	int N;
//	cout << " ������� ������ �������������� - ";
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

// ������� �5
// 5.	�������� �� ������ �������������� ����������� 
//(������������ ������ ������). 
//����� ������� �� �� �����, �� ���� ������ ������ ���� ������ (������� ������ ������).



//
//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	
//	int H;
//	cout << "������� ������ ������������ - ";
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

// �����������  � �������� ������

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int H;
//	cout << "������� ������ ������������ - ";
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

// ������� � 6
//  6.	�������� ���������, ������� ������� �� ����� ���� 
//(����� ���������� ����� ��������� �� ��������, �� ����� ���� ����� ������ �����). 
//����� ������� �� �� �����, �� ���� ������ ������ ���� ������ (������� ������ ������).

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int H;
//	cout << "������� ������ ���������� ����� - ";
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

// ������� � ������ ������

//#include<iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	cout << "������� ��������� ����� - ";
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

// ������� �7
// 7.	����������, �������� �� �������� ����� ����� ����������� ����������� 
//(��������, 1234321 � ���������, 12345 � �� ���������).

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	string P;
//	cout << "������� ���� ����� - ";
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
//			cout << "���� ����� �� ��������" << endl;
//			exit(0);
//		}
//	}
//	cout << "���� ����� ���������" << endl;
//	return 0;
//}


// ������� �8
//8.	����������� ����������� ����� ����� ��������� ����� �� N ��������
//(��������, ��� ������ ����� 12345 ����� �� 3 ������� ��������� ����� 45123).

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	string S;
//	cout << "������� ���� ����� - ";
//	cin >> S;
//	cout << "������� ������� ������� - ";
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

// ������� �9
//	������� �� ����� ������ ��������������� ������������ AxBxC.

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	cout << "������� ������ ��������������� - ";
//	int H;
//	cin >> H;
//	cout << "������� ������ �������������� -";
//	int A;
//	cin >> A;
//	cout << "������� ������� ��������������� - ";
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

// ������� �10
//10.	�������� ���������, ������� ������� �� ����� ��� ������� ����� � ��������� �� 2 �� 10.000.000.

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

// ������� �11
// 11.	�������� �� ������ ��� ����� ���������� � ��������� �� 0 �� 10.000.000.

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

// ������� �12
// 12.	�������� �� ������ ��� ����������� ����� � ��������� �� 0 �� 10.000.000.

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



// ������� �13
//13.	�������� �� ������ ��� ����� ��������� � ��������� �� 0 �� 10.000.000.

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


// ������� �14
// 14.	�������� ���������, ������� ���������� ��������� �� ����� ���, ��������� � ����������.



// ������� �15
//15.	������� �������� �� �������� ����������� �����.�����(��������, 14) � ���������� ��������(��������, 4) ����������� � ����������.

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	string S = " ";
//	string P = "";
//	
//	cout << "������� ���������� �������� - ";
//	int N;
//	cin >> N;
//	cout << "������� ����� �������� - ";
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

// ������� �16
// �������� �� ������ �������.

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	string S = "  ";
//	string P = "  ";
//	
//	cout << "������� ���������� �������� - ";
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


// ������� �17
//������������ ��������� � ���������� �������� �����. �������� ������ � �������� ��������

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	cout << "������� �������� ����� - ";
//	int n;
//	cin >> n;
//	if (n % 2 == 0)
//	{
//		cout << "���� ����� ������! " << endl;
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

//������� �18.	
//���������� ������� ������ for - �����, � ������, ����� � ������.������ ������ ����������� � ����������.

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	cout << " ������� ������ ������ - ";
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


// ������ �19
// ����� ���� ����� ���! ���������� ������ ���������� ������. 
//� ���������� �������� ���������� ������, � ������ ������� ����� ������. 
//��������, �� �������� 4 �����, ������ ������� ����� � 5 ��������

#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ���������� ������ ���� - ";
	int n;
	cin >> n;
	cout << "������� ������ ������� ����� -  ";
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