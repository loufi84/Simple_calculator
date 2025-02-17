#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 * Description: A simple calculator written in C
 * Return: Always 0 (Success)
 */

int main(void)
{
	bool working = true;
	int n1, n2, result, choice, new;

	printf("Welcome to the simple calculator.\n");

	do {

		printf("Please enter the first digit.\n");
		scanf("%d", &n1);
		printf("Please enter the second digit.\n");
		scanf("%d", &n2);
		printf("Veuilez sélectionner une opération.\n");
		printf("1. Addition\n");
		printf("2. Soustraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Modulo\n");
		scanf("%d", &choice);

		if (choice == 1)
		{
			result = n1 + n2;
			printf("%d + %d = %d\n", n1, n2, result);
		}

		else if (choice == 2)
		{
			result = n1 - n2;
			printf("%d - %d = %d\n", n1, n2, result);
		}

		else if (choice == 3)
		{
			result = n1 * n2;
			printf("%d * %d = %d\n", n1, n2, result);
		}

		else if (choice == 4)
		{

			if (n2 == 0)
			{
				printf("Error: Division by zero is not permitted.\n");
			}
			else
			{
				result = n1 / n2;
				printf("%d / %d = %d\n", n1, n2, result);
			}
		}

		else if (choice == 5)
		{
			if (n2 == 0)
			{
				printf("Error: Modulo by zero is not allowed.\n");
			}
			else
			{
				result = n1 % n2;
				printf("%d %% %d = %d\n", n1, n2, result);
			}
		}
		else
		{
			printf("Choix non valide, veuillez ré-essayer?\n");
			continue;
		}

		printf("Voulez vous faire un nouveau calcul ?\n");
		printf("1. Oui\n");
		printf("2. Non\n");
		scanf("%d", &new);

		if (new == 1)
		{
			working = true;
		}
		else if (new == 2)
		{
			working = false;
		}
		else
		{
			printf("Erreur, choix non reconnu\n");
		}

	} while (working);

	printf("Merci d'avoir utilisé la calculette.\n");

	return (0);

}
