//while 1-e задание

//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	int a,b,c=1,max,min;
//	cin >> a;
//	cin >> b;
//	if (a == 0 || b==0)
//	{
//		cout << endl;
//		system("pause");
//		return -1;
//	}
//	if (a > b)
//	{
//		max = a;
//		min = b;
//	}
//	else {
//		max = b;
//		min = a;
//	}
//	while (c!=0)
//	{
//		
//		cin >> c;
//
//		if (c == 0)
//		{
//			break;
//		}
//		if (c > max)
//			max = c;
//		if (c < min)
//			min = c;
//
//	}
//	cout << "max=" << max << " min=" << min;
//	cout << endl;
//	system("pause");
//	
//	return 0;
//
//}

//2-е

//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	int a, b, c = 1, max, count=0;
//	cin >> a;
//	cin >> b;
//	if (a == 0 || b == 0)
//	{
//		cout << endl;
//		system("pause");
//		return -1;
//	}
//	if (a > b)
//	{
//		max = a;
//		
//	}
//	else {
//		max = b;
//		
//	}
//	while (c != 0)
//	{
//
//		cin >> c;
//
//		if (c == 0)
//		{
//			break;
//		}
//		if (max==c||max==a||max==b)
//			count++;
//		if (c > max)
//		{
//			max = c;
//			
//		}
//		
//
//	}
//	cout << "max=" << max << " "<<"same="<<count;
//	cout << endl;
//	system("pause");
//
//	return 0;
//
//	
//
//}

// 3-е
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	string stroka,result;
//	cin >> stroka;
//	int size = stroka.size();
//	int i = 0;
//	
//	while (result[i]!=size+1)
//	{
//		result += stroka[size];
//		size -= 1;
//	}
//	cout << "result =" << result << endl;
//
//	system("pause");
//	return 0;
//}

//

//4-е
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	int N, pred=0,num=1,sled,count=0;
//	cin >> N;
//	if (N == 0 )
//	{
//		sled = 0;
//		
//	}
//	else if (N == 1)
//	{
//		sled = 1;
//		cout << sled;
//		cout << endl;
//		system("pause");
//		return 0;
//	}
//	else {
//
//		while (count != N - 1)
//		{
//			sled = pred + num;
//			pred = num;
//			num = sled;
//			count++;
//		}
//	}
//	cout << sled;
//	cout << endl;
//	system("pause");
//	return 0;
//}
//
//
//

// 5-е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	int pred, sled, num, a,b,c=1,count=0;
//	cin >> a;
//	cin >> b;
//	pred = a;
//	num = b;
//	while (c != 0)
//	{
//		
//		cin >> c;
//		if (c == 0)
//			break;
//		sled = c;
//		if (num > pred && num > sled)
//		{
//			
//			count++;
//		}
//		pred = num;
//		num = sled;
//	}
//	
//	cout << count;
//	cout << endl;
//	system("pause");
//	return 0;
//}