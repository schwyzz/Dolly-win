#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
	printf("  Hello Dolly!\n Максим привет как дела и как там вообще чо.\n");
	_getch();
	printf(" \n Для выхода нажми кнопку\n");
	_getch();

}