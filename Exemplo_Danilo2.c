/* Bibliotecas utilizadas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Prot�tipos de fun��es */
int main ();
void  dizimo ( float * num );

/* Constru��o das fun��es */
void  dizimo ( float * num )
{
	printf ("\nEndere�o de mem�ria do par�metro num = %p", num);
	printf ("\nConte�do na mem�ria do par�metro num = %f", *num);
    *num = *num * 0.1;
}

/* Corpo do programa */
int main ()
{
	/* Vari�veis locais ao main */
	float   sal;
	setlocale (LC_ALL, "");
	printf ("\nDigite o sal�rio:  R$ ");  fflush(stdin);  scanf("%f", &sal);
	printf ("\nEndere�o de mem�ria da vari�vel sal = %p", &sal);
	printf ("\nConte�do da mem�ria da vari�vel sal = %n", sal);
	dizimo(&sal);
	printf ("\nD�zimo do sal�rio: R$ %.2f" , sal );
	printf ("\nValor do sal�rio : R$ %.2f" , sal );
	fflush(stdin);
	getch();
	return (0);
}

