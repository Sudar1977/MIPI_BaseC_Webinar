#include <stdio.h>

// Плохо
unsigned int a, h;
char ln[25], f[25];

// Хорошо
#define NAME_LENGTH 100
unsigned int age, height;
char lastName[NAME_LENGTH],
	firstName[NAME_LENGTH];
