#include <iostream>

using namespace std;

int arr_sum(int ar[], int size, int sum = 0) {
	// Функция вычисления суммы элементов массива (рекурсивно)
	
	if (size == 1)
		return sum + ar[0];
	else {
		sum += ar[size - 1];
		return arr_sum(ar, size - 1, sum);
	}
}


double quickselect(double a[], int k, int size) {
	// Функция нахождения медианы списка (рекурсивно)

	if (size == 1)
		// Если в списке один элемент, вернуть его
		return a[0];
	
	// Выбираем случайное число из списка
	double pivot = a[rand() % size];


	double* lows = new double[size];
	double* pivs = new double[size];
	double* hights = new double[size];
	int low = 0, high = 0, piv = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] < pivot) {
			lows[low] = a[i];
			low++;
		}
		else if (a[i] == pivot) {
			pivs[piv] = a[i];
			piv++;
		}
		else {
			hights[high] = a[i];
			high++;
		}
	}

	if (low > k) {
		return quickselect(lows, k, low);
	}
	else if (k < low + piv)
		return pivs[0];
	else {
	    return quickselect(hights, k - low - piv, high);
	}
}


double quickselect_median(double a[], int size) {
	// Вспомогательная функция нахождения медианы списка (рекурсивно)

	if (size % 2 == 1) {
		return quickselect(a, size / 2, size);
	}
	else {
		return 0.5 * (quickselect(a, size / 2, size) + quickselect(a, size / 2 - 1, size));
	}
}


int arr_max(int ar[], int size, int maxi = INT_MIN) {
	// Функция поиска максимума в массиве (рекурсивно)

	if (size == 0) {
		if (ar[0] > maxi)
			return ar[0];
		else
			return maxi;
	}
	else {
		if (ar[size] > maxi)
			maxi = ar[size];
		return arr_max(ar, size - 1, maxi);
	}
}


bool arr_without_zero(int ar[], int size) {
	// Функция проверяет массив на наличие нулей (рекурсивно)

	if (ar[size - 1] == 0)
		return false;
	else if (size == 1)
		return true;
	else
		return arr_without_zero(ar, size - 1);
}