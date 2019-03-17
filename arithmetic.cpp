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
//	int input,a,b,c;
//	cin >> input;
//	a = input / 100;
//	b = (input - (input / 100 * 100)) / 10;
//	c = input - input / 10 * 10;
//	cout << a + b + c;
//	
//
//	
//	
//	cout << endl;
//	system("pause");
//	return 0;
//}

//2-e задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	int first, second,a,b,c,first_r,second_r, result;
//	cin >> first;
//	cin >> second;
//	a = first / 100;
//	b = (first - (first / 100 * 100)) / 10;
//	c = first - first / 10 * 10;
//	first_r = a * 3600 + b * 60 + c;
//
//	a = second / 100;
//	b = (second - (second / 100 * 100)) / 10;
//	c = second - second / 10 * 10;
//	second_r= a * 3600 + b * 60 + c;
//	result = second_r - first_r;
//	cout << result;
//	cout << endl;
//	system("pause");
//	return 0;
//}

////3-e задание
//#include <iostream>
//#include <cstdlib>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	int Month, M, Day, Year, Y;
//	cout << "Enter Month:"; cin >> Month;
//	cout << "Enter Day:"; cin >> Day;
//	cout << "Enter Year:"; cin >> Year;
//
//	Y = Year;
//	M = Month;
//	if (Month>2)
//	{
//		Y = Year;
//		M = Month;
//	}
//	if (M == 1 || M == 2)
//	{
//		Y = Year - 1;
//		M = Month + 12;
//	}
//
//	int A = (Y / 100); int B = 2 - A + (A / 4);
//	double JD = int(365.25*(Y + 4716)) + int(30.6001*(M + 1))  + Day + B - 1524.5;
//	//cout << "Julian Day's = " << JD << endl;
//	cout << "Julian Day's = " << setprecision(20) << JD << endl;
//	system("PAUSE");
//	return 0;
//}

//////4-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	int input,a,b,c;
//	
//	cin >> input;
//	c = input % 60;
//	b = input / 60;
//	a = 0;
//	
//	if (b > 59)
//	{
//		a = b / 60;
//		b = b % 60;
//	}
//	if (a < 10)
//		cout << "0" << a << ":";
//	else cout << a << ":";
//	if(b<10)
//		cout << "0" << b << ":";
//	else cout << b << ":";
//	if (c<10)
//		cout << "0" << c;
//	else cout << c;
//
//		cout << endl;
//	system("pause");
//	return 0;
//}

//5-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	int input, a, b, c;
//
//	cin >> input;
//	a = input + 1;
//	if (a % 2 == 0)
//		cout << a << endl;
//	else
//	{
//		a = a + 1;
//		cout << a << endl;
//	}
//	system("pause");
//	return 0;
//}

////7-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	int H, A,B, up=0,down=0, track;
//	int count = 0;
//	cin >> H;
//	cin >> A;
//	cin >> B;
//
//	while (up < H)
//	{
//		up = down+A;
//		down = up - B;
//		count++;
//
//	}
//	
//	
//	
//	cout<<count << endl;
//	system("pause");
//	return 0;
//}