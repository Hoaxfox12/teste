/* Bibliotecas utilizadas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/* Protótipos de funções */
int main ();
void quadrado (int * num);

/* Construção das funções */
void quadrado (int * num)
{
   *num = *num**num; /* "conteúdo do endereço" */
}

/* Corpo do programa */
int main ()
{
 int valor;
 char opc;
 /* Variáveis locais ao main */	
 setlocale (LC_ALL, "");
 do
 {
 	printf ( "\n Teste com funções" );
 	printf ( "\n Digite um número inteiro: "); 
 	fflush(stdin); scanf ("%i", &valor);
 	printf ("\nEndereço de memória da variável valor = %p", &valor);
 	printf ("\nConteúdo da variável valor = %i", valor );
  	printf ("\n%d ao quadrado é ", valor);
	quadrado(&valor);
	printf ("%d ", valor);
 	printf ("\n\nOutro teste? [N=não]: ");
 	opc =  	getche();
 }
 while ( opc != 'N' && opc != 'n');
 return (0);
}
