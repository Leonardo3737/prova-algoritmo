#include<stdio.h>
#include<conio.h>

int main() {
	float fahrenheit, celsius;
	printf("informe uma terperatura em graus Fahrenheit \n");
	scanf("%f", &fahrenheit);
	celsius = ((fahrenheit-32)/9)*5;
	printf("%.2f graus fahrenheit eh igual a %.2f graus celsius \n", fahrenheit, celsius);
	getch();
}
