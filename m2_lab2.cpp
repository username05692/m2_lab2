#include <stdio.h>// ���������� �������
#include <clocale>
#define n 16// ���������� ������ ������
int main()
{
	setlocale(LC_ALL, "ukr");// ������������ ��������� ����������
	double X[n];// ���������� ������ �
	printf("����i�� 16 �������i� ������:\n");
	int i;

	for (int i = 0; i < n; i++) {
		printf("������� %d:", i + 1);// ���������� ������
		scanf_s("%lf", &X[i]);
	}
	printf("\n");// ������ ����� ��� ����� ���������� ����������
	double Z[n];// ���������� ������ Z
	for (int i = 0; i < n; i++) {// ���������� ������ Z
		Z[i] = X[i] + X[n - 1- i];
	}
	for (int i = 0; i < n; i++) {
		printf("������� %d ������ Z: %.1lf \n",i+1, Z[i]);//���� ������ Z
	}

	double max = 0;// ��������� �������� ����� max
	for (int i = 0; i < n; i++) {
		if (Z[i] > max) { // ����� ����� max
			max = Z[i];
			
		}
	}
	printf("\n");
	printf("����i���� �������� ������ Z %.1lf:", max);// ���� ����������  ����� max

}