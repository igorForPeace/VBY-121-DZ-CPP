// ������� �1
//1.	������� �� ����� �������������� ����� �� ��������.����� �������� ��������� ������������.

/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char A= '*';   // ������
	int SymbolCount = 0;  //���������� ��������
	cout << "������� ���������� �������� - " << endl;
	cin >> SymbolCount;
	int i = 0; // ������� ������ �����
	while (i < SymbolCount)
	{
		
		cout << A << " ";
		i++;
	}
	return 0;

}*/

// ������� �2
//2.	�������� ���������, ��������� �� ����� ������ ������ ����� ����� �� ��������� �� 1 �� 100.

/*#include <iostream>
using namespace std;
int main()
{
	
	int i = 1;
	while (i <= 100)
	{
		i++;
		if (i % 2 != 0)   // ��������� ������� �������������� �������
		{                 // ���� ����� ������� �� 2 ���� �������, �� �������� continue ��������� ���� ���
			continue;
		}
		
		cout << i << endl;
	}
	return 0;

}*/

//������� �3
// 3.	��������� ����� ����� � ��������� �� M �� N. 

/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int M;  //����������� ����� � ���������
	int N;  // ����������� ����� �� ���������
	cout << " ������� ����������� ����� �� ���������- " << endl; 
	cin >> M;
	cout << " ������� ����������� ����� �� ���������- " << endl;
	cin >> N;
	int sum = 0;   //������ ���������� �����
	while (M <= N)
	{
		sum += M;
		M++;

	}
	cout << "����� ���� ����� ����� = " << sum << endl;
	cout << "�����!" << endl;
	return 0;
}*/

// ������� �4
//4.	��������� �������� ������� ������������ ���������� �� ������� � ����������  � ��������� ���������.

/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double MIN_t;  //  ���������� ��� ����� ����������� �����������
    double MAX_t;  //  ���������� ��� ����� ������������ �����������
	cout << "������� ����������� �������� ��������� ����������� �� �������: " << endl;
	cin >> MIN_t;
	cout << "������� ������������ �������� ��������� ����������� �� �������: " << endl;
	cin >> MAX_t;
	cout << " t - �� �������; t - �� ����������" << endl;
	while (MIN_t <= MAX_t)
	{
		cout << MIN_t << "-------------------" << (MIN_t * 9 / 5) + 32 << endl;  // ������� �� ����� �������� ������� � 
		                                                        // ����� ������� ������� �������� �������� �� ����������
		MIN_t++;   // ���������� ����������� �������� ����������� ��� �������
	}
	return 0;
}*/

// ������� �5
//5.	�������� ���������, ����������� ��������� ��������� �����.

/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int A;  // ���������� �� ������� �� ����� ������ ��������� (�����)
	int FACT = 1;   //�������� ����������
	cout << "������� ����� �����-> ";
	cin >> A;
	while (A > 0)
	{
		FACT *= A;
		A--;
	}
	cout << "��������� ����� � = " << FACT << endl;
	return 0;
}*/

// ������� �6
// � ���������� �������� ����� ����� ����� �����������. ���������� ���������� ���� � ��� � �� �����. 

/*#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int A;  // ����� �������� ������������� ��� ���������� ���������� ����� � �� �����
	int n = 0;
	cout << "������� ����� �����-> ";
	cin >> A;
	int sum = 0;
	while (A != 0)
	{
		sum += A % 10;
		A /= 10;
		n++;
	}
	cout << "���������� ����� ����� � - "<< n << endl;
	cout << "����� ����� ����� � =" <<sum << endl;
	return 0;
}*/

// ������� �7
//7.	� ���������� �������� ����� ����� ����� �����������. ���������� ����������� ��� �����, �.�.  
//����� ������ ������������� � �������� ������� (��������, ������ ����� 1234 � � ���������� ����� 4321).

/*#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;  // ���� ������ �����
	cout << "������� ����� � - >";
	cin >> a;
	int b;   // ����� ����������� 
	while (a > 0)
	{
		b = a % 10;
		a = a / 10;
		cout << b;
	}
	cout << " -���� ������������ ����� " << endl;
	
	
	
	return 0;
}*/

// ������� �8
//8.	� ���������� �������� ����� �����. ������� �� ����� ��� �����, �� ������� �������� ����� ������� ��� �������. 
//    ��������, ��� 60 ������ ������� ������ 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60.

/*#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	cout << "������� ���� ����� ->";
	cin >> a;
	
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			cout << i << ", ";
		}
	
	}
	
	return 0;
}*/

// ������� �9
//9.	� ���������� �������� ����� �����. ����������, �������� �� ��� �������. 
//������� ����� ������� ��� ������� ������ �� 1 � ���� �� ����.

/*#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	cout << "������� ����� ����� - >";
	cin >> a;
	
	int time = 0;   // ���������� ��� ����������� ���������� ���������� �����  
	for (int i = 2; i <=a ; i++)
	{
		if (a % i == 0) {
			time++;
		}
		
		
	}
	if (time == 1)
	{
		cout << "���� ����� �������" << endl;
		exit(0);
	}
	else
	{
		cout << " ���� ����� �� �������" << endl;
		exit(0);
	}
	
	
	return 0;
}*/

// ������� �10 
// 10.	���������, ���� �� �� �������� ����� ���������� ����� ������.

/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	cout << "������� ���� ����� " << endl;
	cin >> a;
	int b;
	for (int i = 1; i < a; i *= 10)
	{
		b = a / i % 10;
		
		if (b == a / i / 10 % 10)   // ������ ��������� b � ��� ������� ���������
		{
			cout << "���� ����� ����� ���������� ����� ������ " << endl;
			exit(0);
			
		}
	}
	cout << "� ��� ������� �����" << endl;
	
	return 0;

}*/

// ������� � 11
// 11.	������ � ���������� �����. 
//���������, ��� ��� ����� ����� ����� ����������� � ����������� ������� 
//(��������, ����� 11299 ������������� �������, � ����� 22044 ���).

/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	cout << "������� ���� ����� " << endl;
	cin >> a;
	int b;   // �����, ��������� ��� �������� ���� ����� �
	
	for (int i = 1; i < a; i *= 10)
	{
		b = a / i % 10;
		if (b >= a / i / 10 % 10) // ��������� ������� ����, ��� b ������ �������������� ����� �
			                     // � ����� �� ����� ��������� ��� ����� �
		{
			continue;
		}
		if (b < a / i / 10 % 10) // � ��� ������ ���� b ������ �������������� ����� �
			                     // �� ��� �� ���� ����� � �� ������� �� ��������� 
		{
			cout << "���� ����� ����� ��� ��������� ��� � ���������� ����." << endl;
			exit(0);
		}
	}
	cout << " ���� ����� ������ ���������� ��� ����� ���� �����!" << endl;

	return 0;
}*/

// ������� � 12
// 12.	�������� ���� ������� �����.
//������������ �������� ���������� ����� �� 0 �� 1000, ��������� ���������� ��� �� ����������� ���������� �������.

/*#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));
	cout << "��������� ���� ����� ��������" << endl;
	cout << "1 - �������, 0 - ��� ���" << endl;
	int answer;
	cin >> answer;
	if (answer == 0)
	{
		while (answer == 0)
		{
			cout << "� ������?" << endl;
			cin >> answer;
		}
	}
	if (answer == 1)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << rand() % 1000 <<"- ��� ���� ����� ?"<< endl;
			cout << "1 - �� , 0 - ��� " << endl;
			cin >> answer;
			if (answer == 1)
			{
				cout << " ���, ������ ��������� ���������� �������. ���������!!" << endl;
				exit(0);
			}
			if (answer == 0)
			{
				continue;
			}
			else
			{
				cout << "WRONG NUMBER !" << endl;
				exit(0);
			}
		}
		cout << " � ������ ��  ���� ����������!!!" << endl;
		cout << " ������� �� ��� �� ������� " << endl;
		exit(0);
	}	
	else
	{
		cout << "WRONG NUMBER !" << endl;
	}
	return 0;
}*/

// ������� �13
// 13.	�������� ������ � ����� ���������� ���� ���������� ���������� ������� � ������������� ��������.

/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int NUM_1, NUM_2, NUM_3, NUM_4, NUM_5, NUM_6;
	int SUM_1, SUM_2;
	int count = 0; // ���������� �������
	for (int i = 100000; i <= 999999; i++)
	{
		
		NUM_1 = i / 100000;
		NUM_2 = i / 10000 % 10;
		NUM_3 = i / 1000 % 10;
		NUM_4 = i / 100 % 10;
		NUM_5 = i / 10 % 10;
		NUM_6 = i % 10;
		SUM_1 = NUM_1 + NUM_2 + NUM_3;
		SUM_2 = NUM_4 + NUM_5 + NUM_6;
		if (SUM_1 == SUM_2)
		{
			cout << i << "--";  // ���� ���������� ������ 
			                    
			count++;          // ������� �������� ������ ����� ����������� ������� ��� ����� ���������
		}
		if (SUM_1 != SUM_2)
		{
			continue;
		}
	}
	cout << "\n���������� - " << count << endl;
	return 0;
}*/

// ������� �14
// 14.	�������� �� ����� ��� ������������� �����, ����� � ������� �� �����������. 
//��� ����� ������ �������� �� 12345 ��� �������. �������� ����� ���������� ��������� �����.
/*#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int NUM_1, NUM_2, NUM_3, NUM_4, NUM_5, NUM_6, NUM_7, NUM_8;
	int count = 0;
	for (int i = 10000000; i <= 99999999; i++)
	{
		NUM_1 = i / 10000000;
		NUM_2 = i / 1000000 % 10;
		NUM_3 = i / 100000 % 10;
		NUM_4 = i / 10000 % 10;
		NUM_5 = i / 1000 % 10;
		NUM_6 = i / 100 % 10;
		NUM_7 = i / 10 % 10;
		NUM_8 = i % 10;
		if (i % 12345 == 0)
		{
			if (NUM_1 != NUM_2 && NUM_1 != NUM_3 && NUM_1 != NUM_4 && NUM_1 != NUM_5 && NUM_1 != NUM_6 && NUM_1 != NUM_7 && NUM_1 != NUM_8)
			{
				if (NUM_2 != NUM_3 && NUM_2 != NUM_4 && NUM_2 != NUM_5 && NUM_2 != NUM_6 && NUM_2 != NUM_7 && NUM_2 != NUM_8)
				{
					if (NUM_3 != NUM_4 && NUM_3 != NUM_5 && NUM_3 != NUM_6 && NUM_3 != NUM_7 && NUM_3 != NUM_8)
					{
						if (NUM_4 != NUM_5 && NUM_4 != NUM_6 && NUM_4 != NUM_7 && NUM_4 != NUM_8)
						{
							if (NUM_5 != NUM_6 && NUM_5 != NUM_7 && NUM_5 != NUM_8)
							{
								if (NUM_6 != NUM_7 && NUM_6 != NUM_8)
								{
									if (NUM_7 != NUM_8)
									{
										cout << i << "--";
										count++;
									}
									else
									{
										continue;
									}
								}
								else
								{
									continue;
								}
							}
							else
							{
								continue;
							}

						}
						else
						{
							continue;
						}
					}
					else
					{
						continue;
					}
				}
				else
				{
					continue;
				}
			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
	}
	cout << "\n ���������� ����� - " << count << endl;
	return 0;
}*/


// ������� � 15
//15.	�������� ���������, ����������� ���������� ����� ����� �� ���������� ������� ��������� � 2, 8 � 16 - ������ �������.


 //�� ���������� ������� ��������� � ��������
//#include <iostream>
//
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int a;
//	cout << "������� ���� ����� - ";
//	cin >> a;
//	int i;
//	int n = 0;
//	if (a == 0) {
//		cout << " 0 " << endl;
//	}
//	if (a >= 1) {
//
//		for (i = 0 ; i <= a;  )
//		{
//			i = a % 2;
//			a /= 2;
//			
//			
//
//			if (a == 0)
//			{
//				cout << "1";
//				break;
//			}
//
//			cout << i;
//		}
//	}
//	cout << " -( ����� ���������� ������ ����� �� �����.)\n �����!" << endl;
//	
//	return 0;
//}



// �� ���������� � ����������

//#include <iostream>
//
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	cout << " ������� ���� ����� -";
//	int b;
//	int c=0;
//	cin >> b;
//	if (b >= 0 && b <= 7)
//	{
//		cout << b << " ���� ����� � 8-������ �������" << endl;
//		exit(0);
//	}
//	if (b > 7)
//	{
//		for (int i = 0; b> 0 ;)
//		{
//			i = b % 8;
//			b /= 8;
//			
//			
//			
//			
//			cout << i;
//		}
//	}
//	cout << " - ( ����� ���������� ������ ����� �� �����.) \n �����" << endl;
//	return 0;
//}

// �� ������������ � 16-������

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int a;
//	cout << " ������� ����� - ";
//	cin >> a;
//	for (int i = 0; a > 0; )
//	{
//		i = a % 16;
//		a /= 16;
//		
//		if (i >= 0 && i <= 9)
//		{
//			cout << i;
//			continue;
//		
//		}
//		if (i == 10)
//		{
//			cout << "A";
//			continue;
//		
//		}
//		if (i == 11)
//		{
//			cout << "B";
//			continue;
//
//		}
//		if (i == 12)
//		{
//			cout << "C";
//			continue;
//			
//		}
//		if (i == 13)
//		{
//			cout << "D";
//			continue;
//			
//		}
//		if (i==14)
//		{
//			cout << "E";
//			continue;
//			
//		}
//		if (i == 15)
//		{
//			cout << "F";
//			continue;
//			
//		}
//		if (a < 16)
//		{
//			cout << a<<endl;
//			exit(0);
//		}
//		
//
//	}
//	cout << " ����� ������ ����� �� �����.\n �����!" << endl;
//	return 0;
//}


// ������� �16
//16.	����������� ������� ��������� ���������� ������(������� �������).
//� ������ ���� ������������ ������� 5000 ��������.
//��������� ������� �� ������������ �������� ��� �������� �� 0 �� 7. 
//�������� ���������� : 0 0 0, 1 1 1, 2 2 2, 3 3 3, 4 4 4, 5 � �, 5 5 �, 5 5 5, 7 � �, 7 7 �, 7 7 7 
//(�� ����� � ����� ���� ����� �����).�������� ���������� : 6 6 6.
//��� ��������� ���������� �����������.
//� ����� ������, �� ����� ����� ���������� � �������� ����� ������������ ��������� ����������� ������������� ����� �����.
//���������� ��������� ��������� �������������� �� ��������� �������� ����������.
//���������� ����� ���������� ����� MessageBox, ��������.��������� ������ ����������.
//���� ������������� ����������, ���� ������ �����������.���� ������������� �������, ���� �������� ���� - ���(7 7 7).

/*#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));
	cout << "��� ����������� ���� \"��������� ������\" " << endl;
	cout << "��� ����� ����� � 5000 ��������" << endl;
	cout << "���� �� ��������� ������� � ��� �� ������ �������� ����������, �� � ��� ��������� 400 ��������" << endl;
	cout << "�� �������� ���������� �� ��������� �� 500 ��������" << endl;
	cout << "�������� ���������� ���������� 666- ����� 1000 ��������." << endl;
	   // ����� ����� , ������� ������� �� ����� � ������
	int a;  // ���������� ��� �������� ��������� �����
	int b;
	int c;
	int flag;
	cout << "������� 1 ����� ������ ����" << endl;
	cout << " 0 - ����� �� ��������" << endl;
	cin >> flag;
	if (flag == 1) {
		for (int SUM = 5000;    ; )
		{
			if (SUM == 0)
			{
				cout << " ��� ����� ����, �� � ��� ����������� �������((" << endl;
				cout << " � ��������� ��� ��� ����� �������!!" << endl;
				cout << "����������!" << endl;
				exit(0);
			}
			if (SUM < 0)
			{
				cout << "�� ��� ��� ������ ������!" << endl;
				cout << "������� �������� � ������ ������ ������ � �� �������� ����� � ������� 3-� ����!" << endl;
				cout << "� ��� ����� ��� ������� ���������� ! ����������� ����! ����� �������!!" << endl;
				exit(0);
			}
			cout << "��������� ����������? 1 - ��, 0 - ���" << endl;
			cin >> flag;
			if (flag == 1)
			{
				a = rand() % 7;
				c = rand() % 7;
				b = rand() % 7;
				cout << a << b << c << endl;
				if ((a == 6) && (b == 6) && (c == 6)) {
					SUM -= 1000;
					cout << "� ��� ������ �������� ����������! �� �������� 1000 ��������." << endl;
					cout << "��� ������� ������ = " << SUM << endl;
					continue;
				}
				if ((a == 0) && (b == 0) && (c == 0))
				{
					SUM += 500;
					cout << "� ��� ������ �������� ����������! ��� ������������ +500 ��������" << endl;
					cout << "��� ������� ������ = " << SUM << endl;
					continue;
				}
				if ((a == 1) && (b == 1) && (c == 1))
				{
					SUM += 500;
					cout << "� ��� ������ �������� ����������! ��� ������������ +500 ��������" << endl;
					cout << "��� ������� ������ = " << SUM << endl;
					continue;
				}
				if ((a == 2) && (b == 2) && (c == 2))
				{
					SUM += 500;
					cout << "� ��� ������ �������� ����������! ��� ������������ +500 ��������" << endl;
					cout << "��� ������� ������ = " << SUM << endl;
					continue;
				}
				if ((a == 3) && (b == 3) && (c == 3))
				{
					SUM += 500;
					cout << "� ��� ������ �������� ����������! ��� ������������ +500 ��������" << endl;
					cout << "��� ������� ������ = " << SUM << endl;
					continue;
				}
				if ((a == 4) && (b == 4) && (c == 4))
				{
					SUM += 500;
					cout << "� ��� ������ �������� ����������! ��� ������������ +500 ��������" << endl;
					cout << "��� ������� ������ = " << SUM << endl;
					continue;
				}
				if (a == 5)
				{
					SUM += 500;
					cout << "� ��� ������ �������� ����������! ��� ������������ +500 ��������" << endl;
					cout << "��� ������� ������ = " << SUM << endl;
					continue;
				}
				if ((a == 7) && (b == 7) && (c == 7))
				{
					SUM += 10000;
					cout << "� ��� ����� ����-���! ��� ������������ +10000 ��������. ���� �������������!!" << endl;
					cout << "��� ������� ������ = " << SUM << endl;
					break;
				}
				if (a == 7)
				{
					SUM += 500;
					cout << "� ��� ������ �������� ����������! ��� ������������ +500 ��������" << endl;
					cout << "��� ������� ������ = " << SUM << endl;
					continue;
				}
				else
				{
					SUM -= 400;
					cout << "� ��� ������ ������� �����. � ��� ��������� 400 ��������! " << endl;
					cout << "���������� �������� ����� = " << SUM << endl;
					continue;
				}
			}
			if (flag == 0)
			{
				cout << "���� ����� �������� ����� = " << SUM << " ��������" << endl;
				cout << "�������� ��� ���!" << endl;
				exit(0);
			}
			else
			{
				cout << "���������� ������ �����" << endl;
				continue;
			}
		}
	}
	if (flag > 1)
	{
		cout << "�������� ���� - 0 ��� 1. ����������." << endl;
		exit(0);
	}
	else
	{
		cout << "�� ������ �� �������� - ����������!" << endl;
		exit(0);
	}
	
	return 0;
}*/


//������� �17

/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ���������� ���������� ->" << endl;
	int count_knight;
	cin >> count_knight;
	cout << "������� ��������� ������ ������ ��������� - > " << endl;
	int hp_knight;
	cin >> hp_knight;
	cout << "������� ���� ������ ��������� ->" << endl;
	int knight_attack;
	cin >> knight_attack;
	cout << "������� ���������� ������ ������� ->" << endl;
	int hp_dragon;
	cin >> hp_dragon;
	cout << "������� ���� ������� ->" << endl;
	int dragon_attack;
	cin >> dragon_attack;
	int amount_hp = count_knight * hp_knight;
	for (   ; amount_hp>=0     ; )
	{
		cout << "��������� �������. (���� " << count_knight * knight_attack << ") - ";
		hp_dragon -= count_knight * knight_attack;
		
		if (hp_dragon <= 0)
		{
			cout << "������ ��������! ";
			cout << "������ ��������!!" << endl;
			cout << "����� ����" << endl;
			exit(0);
		}
        cout << "� ������� �������� - " << hp_dragon  << " ����� ��������." << endl;
		cout << "������ ������� (" << dragon_attack << " �����)";
		if (dragon_attack >= amount_hp)
		{
			cout << " � ���������. ����� ���������. ��� ����� ������ ���������� " << endl;
			cout << " � ������� �������� - " << hp_dragon << " ����� �����" << endl;
			cout << " ������������ ���������� ���������� �� 1 � ��������� ���� ����� �� ��� ���, ���� �� ����� ��������� ����������" << endl;
			exit(0);
		}
		
		if (dragon_attack % hp_knight == 0)
		{
			amount_hp -= dragon_attack;
			count_knight -= dragon_attack / hp_knight;
			cout << " �������� - " << count_knight << " ����������." << endl;
			continue;
		}
		if ((dragon_attack < hp_knight)||(dragon_attack > hp_knight))
		{
			amount_hp -= dragon_attack;
			count_knight = amount_hp / hp_knight;
			if (amount_hp % hp_knight == 0)
			{
				cout << " - �������� " << count_knight << " ����������." << endl;
				continue;
			}
			cout << " - �������� " << ++count_knight << " ��������� , ���� �� ������� ����� (" << amount_hp % hp_knight << " ����� �������� ��������)" << endl;
			continue;
		}
		
		
		

	}
	return 0;
}*/
