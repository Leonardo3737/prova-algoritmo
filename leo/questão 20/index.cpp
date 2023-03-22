#include<stdio.h>
#include<conio.h>

int main() {
	float value;
	printf("digite um valor \n");
	scanf("%f", &value);
	if(value<0){
		printf("o valor informardo eh negativo");
	}else {
		printf("o valor informardo eh positivo");
	}
	getch();
}
