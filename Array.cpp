
#include <iostream>
#include <random>
namespace ext
{
	/** Ôóíêöèÿ âîçâðàùàåò ñëó÷àéíîå çíà÷åíèå òèïà int èç óêàçàííîãî èíòåðâàëà.

	*

	* @param min íèæíÿÿ ãðàíèöà èíòåðâàëà (âêëþ÷èòåëüíî)

	* @param max âåðõíÿÿ ãðàíèöà èíòåðâàëà (âêëþ÷èòåëüíî)

	* @param isDebugMode åñëè true òî êàæäûé ðàç áóäåò ãåíåðèðîâàòüñÿ îäèíàêîâàÿ ïîñëåäîâàëüíîñòü äëÿ óäîáñòâà ïðè îòëàäêè

	* @return ñëó÷àéíîå çíà÷åíèå òèïà int èç óêàçàííîãî èíòåðâàëà

	*/

	int GetRandomValue(int min, int max, bool isDebugMode = false)
	{
		static auto randomEngine = [isDebugMode]() { return isDebugMode ? std::mt19937{} : std::mt19937(std::random_device{}()); }();

		auto distribution = std::uniform_int_distribution<int>(min, max);

		return distribution(randomEngine);
	}
}
using namespace std;
int main()
{
	////1.1
	//int array[10];
	//const float array1[20];
	//char array3[2];
	////1.2
	//int data[6] = { 2, 4, 8, 16, 32, 64 };
	//int kolvo = sizeof(data) / sizeof(int);
	//cout << kolvo << endl;
	//cout << typeid(data).name() << endl;
	//cout << data[0] << endl;
	//cout << data[3] << endl;
	//for (int i = 0; i < 6; i++)
	//{
	//	if (data[i] == 8)
	//		cout << i << endl;
	//	if (data[i] == 32)
	//	cout << i << endl;
	//}
	//data[1] = 1;
	//data[6] *= 3;
	//for (int i = 0; i < 6; i++)
	//{
	//	cout << data[i] << " ";
	//}
	//cout << endl;
	////1.3
	//int a[] = {1,2,3,4,5};
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << a[i];
	//}
	//cout << endl;
	////1.4
	//const int n = 5;
	//int b[n];
	//int *arraydin = new int[n];
	////1.5
	//int data1[5] = { 1, 2 };
	//int kolvod = sizeof(data) / sizeof(int);
	//cout << kolvod << endl;
	//cout << data1[1] << endl;
	//cout << data1[2] << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << data1[i];
	//}
	//cout << endl;
	////1.6
	//const char alpha[3] = { 'a', 'b', 'c' };
	//int kolvoalph = sizeof(data) / sizeof(int);
	//cout << kolvoalph << endl;
	//cout << alpha[0] << endl;
	//for (int i = 0; i < 3; i++)
	//{
	//	if (alpha[i] == 'c')
	//		cout << i;
	//}
	//cout << endl;
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << alpha[i];
	//}
	//cout << endl;
	//
	//
	////2.1,2.2
	//int massive[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	//for (int i = 0; i < 20; i++)
	//{
	//	cout << massive[i] << "  ";
	//}
	//cout << endl;
	////2.3
	//for (int i = 0; i < 20; i++)
	//{
	//	massive[i] *= 2;
	//}
	////2.4,2.5
	//for (int i = 0; i < 20; i++)
	//{
	//	cout << massive[i]<<"  ";
	//}
	//cout << endl;
	//cout << endl;
	//int temp = 1;
	//massive[0] = 0;
	//massive[1] = 1;
	//for (int i = 0; i < 20; i++)
	//{
	//	
	//	if (i != 0 && i != 1)
	//	{
	//		
	//		temp *= 2;
	//		massive[i] = temp;
	//	}
	//		if (i == 5 || i == 10 || i == 15 || i == 20)
	//			cout << endl;
	//		cout << massive[i] << "  ";
	//	
	//}
	//cout << "\n\n";
	//for (int i = 0; i < 20; i++)
	//{

	//	
	//		if (i % 2 != 0)
	//			massive[i] = 0;
	//		
	//	
	//	if (i == 5 || i == 10 || i == 15 || i == 20)
	//		cout << endl;
	//	cout << massive[i] << "  ";
	//}
	//cout << "\n\n";
	////3.1,3.2
	//int data7[10];
	//for (int i = 0; i < 10; ++i)
	//{
	//	data7[i] = ext::GetRandomValue(-10, 10, true);
	//	cout << data7[i]<<endl;
	//}
	//int max=data7[0],index;
	//for (int i = 0; i < 10; ++i)
	//{
	//	if (max < data7[i])
	//	{
	//		max = data7[i];
	//		index = i;
	//	}
	//}
	//cout << max<<" "<< index;
	////3.3
	//int mas[100];
	//for (int i = 0; i < 100; ++i)
	//{
	//	mas[i] = ext::GetRandomValue(-100, 100, true);
	//	cout << mas[i] << endl;
	//}
	//int sum = 0;
	//int otr = 0;
	//int pol = 0;
	//int noll = 0;
	//for (int i = 0; i < 100; ++i)
	//{
	//	sum += mas[i];
	//	if (mas[i] < 0)
	//		otr += 1;
	//	if (mas[i] == 0)
	//		noll += 1;
	//	if (mas[i] > 0)
	//		pol += 1;
	//}
	//cout << sum << " " << otr << " " << noll << " " << pol << endl;
	////3.4
	//int data8[100], ab , bb;
	//for (int i = 0; i < 100; ++i)
	//{
	//	data8[i] = ext::GetRandomValue(1, 100, true);
	//	ab = data8[i] / 10;
	//	bb = data8[i] % 10;
	//	if (ab == 2 || bb == 2)
	//		cout << data8[i]<< " ";
	//	
	//}
	//cout << endl << endl;
	////3.5
	//for (int i = 0; i < 100; ++i)
	//{
	//	data8[i] = ext::GetRandomValue(1, 100, true);
	//	ab = data8[i] / 10;
	//	bb = data8[i] % 10;
	//	
	//	if (ab % 2 == 0 && bb % 2 == 0)
	//		cout << data8[i] <<" ";
	//}
	//cout << "\n\nEx 3.3\n" << endl;
	////3.6
	//int data9[100];
	//for (int i = 0; i < 100; i++)
	//{
	//	data9[i] = mas[i] + data8[i];
	//	cout << data9[i]<<" ";
	//	if (i!=0&& i % 10 == 0)
	//		cout << endl;
	//}
	//cout << endl;
	//int search1;
	//cin >> search1;
	//int poisk[100];
	//int position=0;
	//
	//for (int i = 0; i < 100; i++)
	//{
	//	poisk[i]= ext::GetRandomValue(1, 100, true);
	//	if (poisk[i] == search1)
	//		position = i;
	//}
	//if (position != 0)
	//	cout << position << endl;
	//else cout << -1<<endl;
//	cout << "______________________________________________________________________________________" << endl;
//	char a = 'a';
//	cout << (char)(a + 1) << endl;
//	//4
//	char sym[10];
//	int kolvo = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sym[i] = ext::GetRandomValue('a', 'z', true);
//		cout << sym[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		kolvo = 0;
//		for (int j = 0; j < 10; j++)
//		{
//			if (sym[i] == sym[j])
//				kolvo += 1;
//
//		}
//
//		cout << kolvo;
//	}
//
//	cout << endl;
//	system("pause");
//	return 0;
//}
