/* Bibliotecas utilizadas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Protótipos de funções */
int main ();
void  dizimo ( float * num );

/* Construção das funções */
void  dizimo ( float * num )
{
	printf ("\nEndereço de memória do parâmetro num = %p", num);
	printf ("\nConteúdo na memória do parâmetro num = %f", *num);
    *num = *num * 0.1;
}

/* Corpo do programa */
int main ()
{
	/* Variáveis locais ao main */
	float   sal;
	setlocale (LC_ALL, "");
	printf ("\nDigite o salário:  R$ ");  fflush(stdin);  scanf("%f", &sal);
	printf ("\nEndereço de memória da variável sal = %p", &sal);
	printf ("\nConteúdo da memória da variável sal = %n", sal);
	dizimo(&sal);
	printf ("\nDízimo do salário: R$ %.2f" , sal );
	printf ("\nValor do salário : R$ %.2f" , sal );
	fflush(stdin);
	getch();
	return (0);
}

