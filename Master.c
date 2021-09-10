/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variáveis globais */
char opc;

/* Corpo do programa */
int main()
{
  setlocale (LC_ALL, "");
  do
  {
  	/* Apresenta o menu para escolha do usuário */
  	system ("cls");
  	printf ("\n====== menu =========");
  	printf ("\n   1.Gera .DAT       ");
  	printf ("\n   2.Consulta .DAT   ");
  	printf ("\n   0.FINALIZA        ");
  	printf ("\n=====================");
  	printf ("\n   Escolha: "); fflush(stdin); opc=getche();
  	/* Dependendo da escolha, chama o respectivo programa-filho */
  	switch(opc)
    {
    	case '1': system ("GeraDat"); 		break;
    	case '2': system ("ConsultaDat"); 	break;
    	case '0': exit(0);
    	default : 
			printf ("\nOPÇÃO INVÁLIDA!");
			getch();
		break;
	}
  }	
  while ( opc!='N' && opc!='n' ); 
  return (0);
}

