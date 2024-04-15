

#include <stdio.h>
#include "ListaSequencial.h" // Inclui os protótipos
#include <stdlib.h>


// Definição do tipo de lista
struct lista{
  int qtd;
  struct aluno dados[MAX];
};


Lista* cria_lista(){
  Lista *li;
  li = (Lista*) malloc(sizeof(struct lista)); // alocação de uma área de memória para a lista.  Essa área de memória corresponde à memória necessária para armazenar a estrutura que define a lista, struct lista.
  
  if(li != NULL){
    
    li->qtd = 0; // inicializa o campo qtd com o valor 0. Esse campo indica o quanto do array já está ocupado pelos elementos inseridos na lista, que no caso indica que nenhum elemento foi inserido ainda.

    return li;
  }
}

void libera_lista(Lista* li){
  free(li); // Desalocar/Liberar o espaço da memoria previamente reservado na 'linha do malloc.
}

int tamanho_lista(Lista8 li){
  if(li == NULL){ //  Essa condição seria verdadeira, se tivesse ocorrido um problema na criação da lista e, nesse caso, não teríamos uma lista válida para trabalhar.
    return -1;
  }else{
    return li->qtd; // Retorna o tamnho da lista.
  }
}

int lista_cheia(Lista* li){
  if(li == MAX){
    return -1; // Indicar que é uma lista invalida.
  }
  return (li->qtd == MAX); // Aqui ele retorna 1 se ela estiver cheia, e 0 caso contrario. Compara o tamanho atual com o MAX.
}

int lista_vazia(Lista* li){
  if(li == NULL){
    return -1;
  }
  return (li->qtd == 0); // PERGUNTA, qual a diferença entre colocar 0 e NULL aqui?
}

int insere_lista_inicio(Lista* li, struct aluno al){

  if(li == NULL){
    return 0;
  }
  if(li->qtd == MAX){ // Lista cheia
    return 0;
  }
  
  int i;
  for(i = li->qtd-1; i >= 0; i--){
    li->dados[i+1] = li->dados[i]; // Desloca todos as structs para uma posicao +1 seguinte.
  }

  li->dados[0] = al; // Aloca a struct aluno na posicao 1(0) na lista.
  li->qtd++; // Aumenta o tamanho a lista

  return 1;
}

