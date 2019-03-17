//For
//1е Задание
//#include <iostream>
//#include <locale.h>
//
//using namespace std;
//
//int main()
//{
//	int a, b, c, d;
//	int N = 0;
//	cout << "Enter N" << endl;
//	cin >> N;
//	cout << endl;
//
//	int count = 0;
//	for (int i = 100; i < 1000; i++)
//	{
//		a = i / 100;
//		b = i / 10 - a * 10;
//		c = i - (i / 10) * 10;
//		d = a + b + c;
//		if (d == N)
//			count++;
//	}
//	cout << "result=" << count << endl;
//	system("pause");
//	return 0;
//}
//
//2 - е задание
//#include <iostream>
//#include <locale.h>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string line;
//	cout << "Write some line" << endl;
//	getline(cin, line);
//	int size = line.size();
//	cout << size << endl;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (i == 0)
//			cout << "+";
//		cout << "-";
//		if (i == size - 1)
//			cout << "+" << endl;
//
//	}
//	cout << "|" << line << "|" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		if (i == 0)
//			cout << "+";
//		cout << "-";
//		if (i == size - 1)
//			cout << "+" << endl;
//
//	}
//
//	system("pause");
//	return 0;
//
//}
//
//3 - е задание
//
//#include <iostream>
//#include <locale.h>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N;
//	cin >> M;
//	int count = M;
//	for (int i = 0; i < N*M; i++)
//	{
//		if (i == count)
//		{
//			cout << endl;
//			count = count + M;
//		}
//		if (i % 2 == 0)
//			cout << "#";
//		else {
//			cout << ".";
//		}
//
//	}
//
//	cout << endl;
//	system("pause");
//	return 0;
//
//}
//
//4 - е
//
//#include <iostream>
//#include <locale.h>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	int count = 0;
//
//	for (int i = 0; i < 2 * N - 1; i++)
//	{
//		for (int j = 0; j < 2 * N - 1; j++)
//		{
//			if (j < (2 * N - 1 - count) / 2 || j >(2 * N - 1 + count) / 2)
//			{
//				cout << " ";
//			}
//			else
//			{
//				cout << "#";
//			}
//		}
//		cout << endl;
//
//		/*if (((2 * N - 1) + count) <= (2 * N - 1)/2 )*/
//		if (i < N - 1)
//			count = count + 2;
//
//		else {
//			count = count - 2;
//		}
//
//
//	}
//
//	cout << endl;
//	system("pause");
//	return 0;
//
//}
//
//
//5 - е
//
//#include <iostream>
//#include <locale.h>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string N;
//	cin >> N;
//	string a, b;
//	int status;
//	int size = N.size();
//	if (size == 1)
//	{
//		status = 1;
//	}
//	else
//	{
//		for (int i = 0; i < N.size(); i++)
//		{
//			a = N[i];
//			b = N[size - 1];
//			if (a == b) {
//				size -= 1;
//				status = 1;
//			}
//			else {
//				status = 0;
//				break;
//			}
//		}
//	}
//	if (status == 1)
//		cout << "da";
//	else
//	{
//		cout << "net";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//
//}