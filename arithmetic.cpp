#include<iomanip>
#include<iostream>
using namespace::std;
int main()

{
	//”пражнение 1
	/*int first;
	cout << "введите значение";
	cin >> first;
	cout << first / 100 + first / 10 % 10 + first % 10 << endl;*/

	//”пражнение 


	//”пражнение 4
	int seconds;
	int hh;
	int mm;
	int ss;	
	cout << "введите ваши данные ";
	cin >> seconds;
	hh = seconds / 3600;
	seconds = seconds % 3600;
	mm = seconds / 60;
	ss = seconds % 60;
	cout << hh<<":"<<mm<<":"<<ss << endl;
	//как сделать двузначный показатель минут и секунд дл€ однозначного числа



}