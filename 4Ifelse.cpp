// работа с if 
//1-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//
//	if (a + b > c && b+c>a && c+a>b)
//	{
//		cout << "Da";
//
//	}
//	else
//	{
//		cout << "Net";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}


//2-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	int a;
//	cin >> a;
//	int temp=a;
//	while (temp > 10)
//	{
//		temp=a-(a / 10)*10;
//
//	}
//	
//
//	switch (temp)
//	{
//	case 0:
//		cout << a << " рублей";
//		break;
//	case 1:
//		cout<<a<<" рубль";
//		break;
//	case 2:
//		cout <<a<< " рубля";
//		break;
//	case 3:
//		cout << a<<" рубля";
//		break;
//	case 4:
//		cout <<a<< " рубля";
//		break;
//	default:
//		cout << a<<" рублей";
//		break;
//	}
//	
//	cout << endl;
//	system("pause");
//	return 0;
//}
//
//



//3-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	
//	
//	bool enemyInFront;
//	bool isBoss;
//	int robotHealth;
//
//	cout << "enemyInFront";
//	cin >> enemyInFront;
//
//	cout << "isBoss";
//	cin >> isBoss;
//
//	cout << "robotHealth";
//	cin >> robotHealth;
//
//	// Код Васи
//	bool shouldFire = true;
//
//
//	if (enemyInFront == true)
//	{
//		if (isBoss == true)
//		{
//			if (robotHealth < 50)
//				shouldFire = false;
//			
//			
//		}
//	}
//	else
//	{
//		shouldFire = false;
//	}
//
//	if (shouldFire)
//	{
//		cout << "Fire" << endl;
//	}
//
//	
//	cout << endl;
//	system("pause");
//	return 0;
//}

//4-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	
//	int a, b, c,  second;
//	cout << "Первая оценка";
//	cin >> a;
//	
//	cout << "Вторая оценка";
//	cin >> b;
//
//	cout << "Третья оценка";
//	cin >> c;
//	if (a > b, a > c)
//	{
//		if (b >= c)
//			second = b;
//		else second = c;
//	}
//
//	if (b > a, b > c)
//	{
//		if (a >= c)
//			second = a;
//		else second = c;
//	}
//
//	if (c > a, c > b)
//	{
//		if (a >= b)
//			second = a;
//		else second = b;
//	}
//	if (a = b, b = c, c = a)
//		second = c;
//
//
//
//	
//
//	cout << second;
//	cout << endl;
//	system("pause");
//	return 0;
//}

////5-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	
//	int date, month, year,  second;
//
//	cout << "Введите дату ";
//	cin >> date;
//	
//	cout << "Введите месяц ";
//	cin >> month;
//
//	cout << "Введите год ";
//	cin >> year;
//
//	bool visocos;
//	bool result=false;
//
//	
//	
//	if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) visocos=false;
//	else visocos=true;
//	if (month == 1)
//	{
//		if (date < 32)
//			result = true;
//	}
//
//	if (month == 2)
//	{
//		if (visocos == false)
//			if (date < 29)
//				result = true;
//			
//		if (visocos == true)
//			if (date < 30)
//				result = true;
//			
//	}
//	if (month == 3)
//	{
//		if (date < 32)
//			result = true;
//	}
//
//	if (month == 4)
//	{
//		if (date < 31)
//			result = true;
//	}
//
//	if (month == 5)
//	{
//		if (date < 32)
//			result = true;
//	}
//
//	if (month == 6)
//	{
//		if (date < 31)
//			result = true;
//	}
//	if (month == 7)
//	{
//		if (date < 32)
//			result = true;
//	}
//	if (month == 8)
//	{
//		if (date < 32)
//			result = true;
//	}
//	if (month == 9)
//	{
//		if (date < 31)
//			result = true;
//	}
//	if (month == 10)
//	{
//		if (date < 32)
//			result = true;
//	}
//	if (month == 11)
//	{
//		if (date < 31)
//			result = true;
//	}
//	if (month == 12)
//	{
//		if (date < 32)
//			result = true;
//	}
//
//	
//	cout << "Высокосный"<<endl;
//	if (visocos == true)
//		cout << "Da";
//	else cout<<"Net";
//
//	cout << endl;
//
//	if(result==true)
//	cout << "true";
//	else cout << "false";
//
//	cout << endl;
//	system("pause");
//	return 0;
//}




////6-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	int first, second, a,b,c;
//	bool result=false;
//	cout << "Введите координаты первой клетки: ";
//	cin >> first;
//	cout << "Введите координаты второй клетки: ";
//	cin >> second;
//
//	if (first / 10 == second / 10 || first - first / 10 * 10 == second - second / 10 * 10)
//		result = true;
//	a = first / 10;
//	b = first - first / 10 * 10;
//	c = a * 10 + b;
//
//	if (first < second)
//	{
//		while (b<9)
//		{
//			a += 1;
//			b += 1;
//			c = a * 10 + b;
//			if (c == second)
//				result = true;
//			
//		}
//	}
//	if (first > second)
//	{
//		while (b > 0)
//		{
//			a -= 1;
//			b -= 1;
//			c= a * 10 + b;
//			if (c == second)
//				result = true;
//			
//		}
//	}
//
//	if (result)
//		cout << "true";
//	else cout << "false";
//	cout << endl;
//	system("pause");
//	return 0;
//}
