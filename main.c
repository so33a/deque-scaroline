#include <stdio.h>
#include "fila.h"
#include "fila.c"
int main () {
  FILA alunos = novaFila();
  inserir(alunos, 9);
  inserir(alunos, 8);
  inserir(alunos, 3);
  inserir(alunos, 10);

  imprimirFila(alunos);

  while(!filaVazia(alunos))
    printf ("removido: %d \n", remover(alunos));


	inserir(alunos, 10);
	inserir(alunos, 32);
	inseriresq(alunos, 5);
	
	imprimirFila(alunos);
	
	removerdireita(alunos); 
	imprimirFila(alunos);
	
	destroiFila(alunos);
  
  return 0;
}
