#include <iostream>

using namespace std;

int arr_sum(int ar[], int size, int sum = 0) {
	// Функция вычисления суммы элементов массива (рекурсивно)
	
	if (size == 0)
		return sum + ar[0];
	else {
		sum += ar[size];
		return arr_sum(ar, size - 1, sum);
	}
}


double quickselect_median(double a[], int n) {
	// Вспомогательная функция нахождения медианы списка (рекурсивно)
	
	if (n % 2 == 1) {
		return quickselect(a, n / 2 + 1, n);
	}
	else {
		return 0.5 * (quickselect(a, n / 2, n) + quickselect(a, n / 2 + 1, n));
	}
}


double quickselect(double a[], int k, int n) {
	// Функция нахождения медианы списка (рекурсивно)

	if (n == 1)
		// Если в списке один элемент, вернуть его
		return a[0];
	
	// Выбираем случайное число из списка
	double pivot = a[rand() % n];


	double* lows = new double[n];
	double* hights = new double[n];
	int low = 0, high = 0;
	for (int i = 0; i < n; i++) {
	    if (a[i] < pivot) {
	        lows[low] = a[i];
	        low++;
	    }
	    else {
	        hights[high] = a[i];
	        high++;
	    }
	}
	if (k <= low) {
	    return quickselect(lows, k, low);
	}
	else {
	    return quickselect(hights, k - low, high);
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

	if (ar[size] == 0)
		return false;
	else if (size == 0)
		return true;
	else
		return arr_without_zero(ar, size - 1);
}