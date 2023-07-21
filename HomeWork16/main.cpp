#include <iostream>
#include <ctime>
#include <cstdlib>




int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	// Задача 1. Посчитать среднее арифметическое элементов массива и определить количество
	// элементов которые меньше среднего арифметического

	std::cout << "Задача 1.\n";

	const int size1 = 10;
	int arr1[size1]{};

	std::cout << "Исходный массив:\n";
	srand(time(NULL));
	int sum = 0;

	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 90 + 10; // [10..99]
		std::cout << arr1[i] << ", ";
		sum += arr1[i];
	}
	std::cout << "\b\b.\n";

	double mean = (double)sum / size1;
	std::cout << "Среднее арифметическое: " << mean << '\n';
	
	int counter = 0;
	

	for (int i = 0; i < size1; i++) {
		if (arr1[i] <= mean)
			counter++;
	}

	std::cout << "Количество элементов меньших ср. ариф.: " << counter << "\n\n";

	// Задача 2. Сложение двух матриц размером 5 на 5


	std::cout << "Задача 2.\nИсходные матрицы:\n";
	const int rows = 5, cols = 5;
	int mx1[rows][cols]{};
	int mx2[rows][cols]{};

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			mx1[i][j] = rand() % 10;
			mx2[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << mx1[i][j] << "  ";
			
		}
		std::cout << "\t\t";
		for (int j = 0; j < cols; j++) {
			std::cout << mx2[i][j] << "  ";

		}

		std::cout << std::endl;
	}

	int sum_mx = 0;
	std::cout << "Матрица суммы:\n";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum_mx = mx1[i][j] + mx2[i][j];
			std::cout << sum_mx << "\t";
		}
		std::cout << std::endl;
	}

	std::cout << "\n\n";

	// Задача 3. Помещение 6ти значного числа в массив из 6ти элементо

	std::cout << "Задача 3.\nВведите 6ти значное число -> ";
	std::cin >> n;
	
	const int size3 = 6;
	int arr3[size3]{};

	int pow = 1;

	if (100000 <= n && n <= 999999) {
		for (int i = 0; i < size3; i++) {
			arr3[i] = n / pow % 10;
			pow *= 10;
		}
		std::cout << "Полученный массив:\n";
		for (int i = 0; i < size3; i++)
			std::cout << arr3[i] << " ";
		std::cout << "\n\n";
	}
	else
		std::cout << "Ошибка ввода числа!!!\n\n";
		



	return 0;
}