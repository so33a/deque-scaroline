#ifndef FILA_H
#define FILA_H

typedef struct node * link;
struct node {
  int item;
  link next
  link prev;
};

typedef struct {
  link maisAntigo;
  link maisNovo;
} * FILA;

link novoNo(int item, link next,link prev);
FILA novaFila();
void inserir(FILA f, int e);
void inseriresq(FILA f, int e);
int remover(FILA f);
int removerdireita(FILA f);
void imprimirFila(FILA f);
void destroiFila(FILA f);
int filaVazia(FILA f); 

#endif 
