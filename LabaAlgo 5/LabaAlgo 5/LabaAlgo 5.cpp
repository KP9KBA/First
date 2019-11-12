﻿#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int *a;

	printf("Введите номер задания\n");
	scanf_s("%i", &a);
	switch (*a) {
	case 1: {
	/*Ввести число N – порядок квадратной матрицы. Последовательно по строкам
ввести с клавиатуры все элементы матрицы. Вывести матрицу на экран и сообщить, какой
элемент является минимальным и его индексы (координаты), а какой максимальным и его
индексы (координаты).
*/
		int N, i, j, min=999999, max=0;
		int arr[100][100];
		printf("Введите размер квадратной матрицы");
		scanf_s("%d", &N);
		for (i = 0; i < N; i++) {//задаем значения матрицы
			for (j = 0; j < N; j++) {
				scanf_s("%d", &arr[i][j]);
			}
		}
		for (i; i < N; i++) {
			for (j; j < N - 1; j++) {
				if (arr[i][j] > arr[i][j + 1]) {
					min = arr[i][j + 1]; //мин
				}
				if (arr[i][j] < arr[i][j + 1]) {
					max = arr[i][j + 1];//макс
				}
			}
		}
		printf("arr[][]=%d", max);
		printf("arr[][]=%d", min);

	}break;
	case 2: {
	/* Ввести число N – порядок квадратной матрицы. Последовательно по строкам
ввести с клавиатуры все элементы матрицы. Найти в каждой строке матрицы наибольший
элемент, поменять его местами с элементом главной диагонали*. Вывести матрицу на экран в
форме таблицы.
*/
	}break;
	case 3: {
	/* Ввести числа N и M – размер матрицы. Последовательно по строкам ввести с
клавиатуры все элементы матрицы. Вычислить и записать в память суммы и произведения
элементов каждой строки матрицы. Результаты отобразить в виде двух столбцов (первый
столбец – сумма в соответствующей строке, второй – произведение).*/
	}break;
	case 4: {
	/* Ввести числа N и M – размер матрицы. Последовательно по строкам ввести с
клавиатуры все элементы матрицы. Вычислить и запомнить сумму и число положительных
элементов каждого столбца матрицы. Результаты отобразить в виде двух строк.*/
	}break;
	case 5: {
	/* Ввести число N – порядок квадратной матрицы. Последовательно по строкам
ввести с клавиатуры все элементы матрицы. Вычислить:
1. произведение и число элементов матрицы, находящихся под главной диагональю;*/
	}break;
	case 6: {
	/*Ввести число N – порядок квадратной матрицы. Последовательно по строкам
ввести с клавиатуры все элементы матрицы. Вычислить:
2. сумму и число элементов матрицы, находящихся над главной диагональю;*/
	}break;
	case 7: {
	/*Ввести число N – порядок квадратной матрицы. Последовательно по строкам
ввести с клавиатуры все элементы матрицы. Вычислить:3. произведение и число положительных элементов матрицы, находящихся под
главной диагональю;*/
	}break;
	case 8: {
	/*Ввести число N – порядок квадратной матрицы. Последовательно по строкам
ввести с клавиатуры все элементы матрицы. Вычислить:4. сумму и число отрицательных элементов матрицы, находящихся над главной
диагональю.*/
	}break;
	}
	return 0;
}