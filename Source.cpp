#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct Birthday
{
	int day;
	int month;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Введите количество симуляций:" << endl;
	cin >> N;
	if (N < 0 || N>100000)
	{
		cout << "Ошибка ввода" << endl;
		return 1;
	}

	Birthday days[23];
	int k = 0;
	float h = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 23; j++)
		{
			days[j].day = 1 + rand() % 31;
			days[j].month = 1 + rand() % 12;
			cout << days[j].day << "/" << days[j].month << endl;
		}

		cout << endl;
		k = 0;

		for (int f = 0; f < 23; f++)
		{
			for (int j = f + 1; j < 23; j++)
			{
				if (days[f].day == days[j].day && days[f].month == days[j].month)
				{
					k +=1;
				}
			}
		}
		if (k > 0)
		{
			h += 1;
			cout << h;
		}

	}

	cout << endl;
	cout << "Всего симуляций проведено " << N << endl;
	cout << "Хотя бы два дня рождения совпали в " << h << " симуляциях.";
	cout << "Процент успешных " << (h / N) * 100 << "%";
	return 0;
}
