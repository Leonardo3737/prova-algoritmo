#include<stdio.h>
#include<conio.h>

int main() {
	int apples;
	float valueAplles;
	printf("quantas macas foram compradas? \n");
	scanf("%d", &apples);
	valueAplles = apples<12 ? 1.3 : 1.0;
	printf("o valor da compra sera %.2f reais", apples*valueAplles);
	getch();
}
