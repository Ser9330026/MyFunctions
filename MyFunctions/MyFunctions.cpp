/*Задача 1
Создайте функцию mean, которая возвращает
среднее арифметическое двух переданных в неё чисел.
Не забудьте продемонстрировать её работу, вызвав
функцию в блоке main.*/

#include <iostream>

float mean(float a, float b) {
	float agv;
	agv = (a + b) / 2;

	return agv;
}

int main() {
	float a;
	float b;

	std::cout << "Введите два числа:" << '\t';
	std::cin >> a >> b;

	std::cout << "Среднее арифметическое этих чисел: " << mean(a, b);

	return 0;

	/*Задача 2
	Создайте функцию mean_arr. Она принимает
	массив и его длину, после чего возвращает среднее
	арифметическое всех его элементов.*/

#include <iostream>

	float mean_arr(int arr[], const int lenghts) {
		float sum = 0;
		for (int i = 0; i < lenghts; i++) {
			sum += arr[i];
		}

		return sum / lenghts;
	}

	int main() {
		const int SIZE = 5;
		int arr[5]{ 2, 5, 8, 3, 1 };

		std::cout << mean_arr(arr, SIZE) << '/t';
	}

}

/*Задача 3
Создайте функцию powers(N, M), которая
принимает два числовых значения. Функция должна
выводить в консоль все степени числа N от степени 0 до
степени M включительно.*/

#include <iostream>
#include <math.h>

float powers(int N, int M) {
	return pow(N, M);
}

int main() {
	int n;
	int m;
	std::cin >> n >> m;
	std::cout << powers(n, m);
}

/*Задача 4.
Создайте функцию positive_arr, которая принимает
массив и его длину, после чего меняет в нём все
отрицательные значения на положительные.Сами
положительные числа никак меняться не должны.*/

#include <iostream>

void positive_arr(int arr[], const int lenghts) {

	for (int i = 0; i < lenghts; i++) {
		if (arr[i] < 0) arr[i] *= -1;
	}

}

int main() {
	const int SIZE = 5;
	int arr[SIZE]{ 1, -5, 6, -8, 10 };

	positive_arr(arr, SIZE);
	for (int i = 0; i < SIZE; i++) {
		std::cout << arr[i] << '/t';
	}
	return 0;
}
