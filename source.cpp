#include<iostream>
#include<limits>
#include<iomanip>
#include<locale.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "    Тип переменной    \t|\tРазмер\t\t|\t\t    Значение    \t\t|\tКоличество"<< endl;
	cout << "\t\t\t|\tБайт\t\t|\tМинимальное\t|\tМаксимальное\t|\tЗначимых бит" << endl;
	cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "      bool\t\t|\t   1\t\t|\tfalse\t\t|\ttrue\t\t|\t  1" << endl;
	cout << "      unsigned short    |\t   2\t\t|\t   0\t\t|\t65535\t\t|\t 16" << endl;
	cout << "      short\t\t|\t   2\t\t|\t-32768\t\t|\t32767\t\t|\t 16" << endl;
	cout << "      unsigned int      |\t   4\t\t|\t   0\t\t|\t4294967295\t|\t 32" << endl;
	cout << "      int\t\t|\t   4\t\t|\t-2147483648\t|\t2147483647\t|\t 32" << endl;
	cout << "      unsigned long     |\t   4\t\t|\t   0\t\t|\t4294967295\t|\t 32" << endl;
	cout << "      long\t\t|\t   4\t\t|\t-2147483648\t|\t2147483647\t|\t 32" << endl;
	cout << "      unsigned long long|\t   4\t\t|\t   0\t\t|\t4294967295\t|\t 32" << endl;
	cout << "      long long\t\t|\t   4\t\t|\t-2147483648\t|\t2147483647\t|\t 32" << endl;
	cout << "      char\t\t|\t   1\t\t|\t -128\t\t|\t  127\t\t|\t 8" << endl;
	cout << "      float\t\t|\t   4\t\t|\t 3.4e-38\t|\t 3.4e+38\t|\t 32" << endl;
	cout << "      double\t\t|\t   8\t\t|\t 1.7e-308\t|\t 1.7e+308\t|\t 64" << endl;
	system("pause");
	return 0;
}
