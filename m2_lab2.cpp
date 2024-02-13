#include <stdio.h>// підключення бібліотек
#include <clocale>
#define n 16// визначення розміру масиву
int main()
{
	setlocale(LC_ALL, "ukr");// встановлення української локалізації
	double X[n];// оголошення масиву Х
	printf("Введiть 16 елементiв масиву:\n");
	int i;

	for (int i = 0; i < n; i++) {
		printf("Елемент %d:", i + 1);// заповнення масиву
		scanf_s("%lf", &X[i]);
	}
	printf("\n");// пкстий рядок для кращої візуалізації результату
	double Z[n];// оголошення масиву Z
	for (int i = 0; i < n; i++) {// заповнення масиву Z
		Z[i] = X[i] + X[n - 1- i];
	}
	for (int i = 0; i < n; i++) {
		printf("Елемент %d масиву Z: %.1lf \n",i+1, Z[i]);//вивід масиву Z
	}

	double max = 0;// початкове значення змінної max
	for (int i = 0; i < n; i++) {
		if (Z[i] > max) { // пошук змінної max
			max = Z[i];
			
		}
	}
	printf("\n");
	printf("Найбiльше значення масиву Z %.1lf:", max);// вивід результату  змінної max

}