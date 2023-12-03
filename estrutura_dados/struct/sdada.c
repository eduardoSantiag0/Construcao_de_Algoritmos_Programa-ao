#include <stdio.h>

typedef struct student {
	char name[50];
	int roll;
	float marks;
} Armando; //Como usar o typedef 


void display(Armando *pArmando) // Passando por referência
{
	printf("Name: %s\n", pArmando->name); // O que é '->' 
	printf("Roll: %d\n", pArmando->roll);
	printf("Marks: %.2f\n", pArmando->marks);
}

int main()
{
	struct student st1 = { "Aman", 19, 8.5 }; 

	display(&st1); //Passando a struct inteira como argumento

	return 0;
}
