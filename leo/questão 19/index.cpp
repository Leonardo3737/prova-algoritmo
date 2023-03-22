#include<stdio.h>
#include<conio.h>

int main() {
	float value;
	printf("digite um valor \n");
	scanf("%f", &value);
	if(value>10){
		printf("EH MAIOR QUE 10!");
	}else {
		printf("NAO EH MAIOR QUE 10!");
	}
	getch();
}
