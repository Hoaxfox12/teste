/* Bibliotecas utilizadas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Prot�tipos de fun��es */
int main ();
void quadrado (int * num);

/* Constru��o das fun��es */
void quadrado (int * num)
{
   *num = *num**num; /* "conte�do do endere�o" */
}

/* Corpo do programa */
int main ()
{
 int valor;
 char opc;
 /* Vari�veis locais ao main */	
 setlocale (LC_ALL, "");
 do
 {
 	printf ( "\n Teste com fun��es" );
 	printf ( "\n Digite um n�mero inteiro: "); 
 	fflush(stdin); scanf ("%i", &valor);
 	printf ("\nEndere�o de mem�ria da vari�vel valor = %p", &valor);
 	printf ("\nConte�do da vari�vel valor = %i", valor );
  	printf ("\n%d ao quadrado � ", valor);
	quadrado(&valor);
	printf ("%d ", valor);
 	printf ("\n\nOutro teste? [N=n�o]: ");
 	opc =  	getche();
 }
 while ( opc != 'N' && opc != 'n');
 return (0);
}
