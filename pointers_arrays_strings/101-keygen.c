#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - generates random valid passwords
 *
 * Return: 0
 */

char* keygen(int size)
{
	char c;
	int passwordIndex; /* set to negative for default */
	char *password[size];
	int usedIndices[size] = {-1};
	int usedIndex = 0;
	int i;

	srand(time(0));
	/* upper case */
	passwordIndex = rand() % size;
	password[passwordIndex] = (char)((rand() % 26) + 65);
	usedIndices[usedIndex] = passwordIndex;
	usedIndex++;

	/* lower case */
	do {passwordIndex = rand() % size;}
	while(password[passwordIndex] != -1);
	password[passwordIndex] = (char)((rand() % 26) + 97);
	usedIndices[usedIndex] = passwordIndex;
	usedIndex++;

	/* special character */
	do {passwordIndex = rand() % size;}
	while(password[passwordIndex] != -1);
	password[passwordIndex] = (char)((rand() % 26) + 97);
	usedIndices[usedIndex] = passwordIndex;
	usedIndex++;

	/* numbers */
	for(i = 3; i < size; i++)
	{
		do {passwordIndex = rand() % size;}
		while(password[passwordIndex] != -1);
		password[passwordIndex] = (char)((rand() % 5) + 33);
		usedIndices[usedIndex] = passwordIndex;
		usedIndex++;
	}

	return (password);
}

int main(void)
{
	int size = 8; /* assume 8 characters */
	char *password = keygen(size);
	printf("generated password: %s", *password);
	return (0);
}
