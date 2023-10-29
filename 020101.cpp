#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
	system("chcp 1251 > nul");
	srand(time(0));
	int input_size;
	int find_number = 1;

	while (true)
	{
		cout << "Вкажіть розмір вектора, він може бути від 1 до 366 елементів: ";
		cin >> input_size;
		vector <int> numbers(input_size);

		if (input_size >= 1 && input_size <= 366)
		{
			cout << "Елементи вектора: ";

			for (int a = 0; a < input_size; a++)
			{
				numbers[a] = rand() % 2;
				cout << numbers[a] << " ";
			}

			auto result = find(numbers.begin(), numbers.end(), find_number);

			if (result != numbers.end())
			{
				int position_number = distance(numbers.begin(), result);
				cout << endl << "Перше число 1 знаходиться на позиції: " << position_number + 1;
			}

			else
			{
				cout << endl << "Числа 1 немає у данному векторі.";
			}
			break;
		}

		else
		{
			cout << "Помилка невірний розмір вектора. " << endl;
		}

	}
	return 0;
}