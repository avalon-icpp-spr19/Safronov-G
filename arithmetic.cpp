#include<iomanip>
#include<iostream>
using namespace::std;
int main()

{
	//���������� 1
	/*int first;
	cout << "������� ��������";
	cin >> first;
	cout << first / 100 + first / 10 % 10 + first % 10 << endl;*/

	//���������� 


	//���������� 4
	int seconds;
	int hh;
	int mm;
	int ss;	
	cout << "������� ���� ������ ";
	cin >> seconds;
	hh = seconds / 3600;
	seconds = seconds % 3600;
	mm = seconds / 60;
	ss = seconds % 60;
	cout << hh<<":"<<mm<<":"<<ss << endl;
	//��� ������� ���������� ���������� ����� � ������ ��� ������������ �����



}