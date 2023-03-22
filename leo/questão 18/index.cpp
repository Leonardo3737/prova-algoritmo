#include<stdio.h>
#include<conio.h>

int main() {
	float firstNote, secondNote, thirdNote, media;
	printf("escreva tres notas \n");
	scanf("%f%f%f", &firstNote, &secondNote, &thirdNote);
	media = ((firstNote*2)+(secondNote*3)+(thirdNote*5))/10;
	printf("a media eh %.2f", media);
	getch();
}
