#include <stdio.h>
#include <Windows.h>

int main(void) {

  	SetConsoleCP(1251);
  	SetConsoleOutputCP(1251);
unsigned int c; /* идентификатор группы */
unsigned int f; /* код системы */
unsigned int b; /* признак привилегированного пользователя */
unsigned int UnitStateWord; /* слово состояния */

  /* ввод составных частей */ 
printf("Введите идентификатор группы (0 - 127) >");
scanf("%d",&c);
printf("Введите код системы (0 / 15) >");
scanf("%d",&f);
printf("Введите признак привилегированного пользователя (0 / 1) >");
scanf("%d",&b);

  /* формирование упакованного кода */
UnitStateWord=(c&0x7F)<<8;
UnitStateWord|=(f&0xF)<<4;
UnitStateWord|=(b&1)<<3;

  /* вывод результата */
printf("\nСлово состояния устройства = %04x\n",UnitStateWord);
  getchar();
  getchar();
  return 0;
}
