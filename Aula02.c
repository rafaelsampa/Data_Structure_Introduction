#include <stdio.h>
#include <stdlib.h>

/****
01. Criar um array dinamico

02. Implementar uma pilha, usando esse array dinamico

03. Criar um TAD Arraylist

04. Criar TAD Stack

Para ter um TAD precisa de:
interface, cliente, implementação
**/

int * values;
int sizeX;
int capacity;
int fill;
int option;
int growFactor;
int * array;

void menu();
int array_size(int * values);
void array_add(int * values, int value);
void array_destroy(int * values, int value);

int main(int argc, char argv[]){

  capacity = 2;
  growFactor = 2;
  sizeX = 0;

  values = (int *) malloc(sizeof(int) * capacity);
  if(values == NULL){
    return 1;
  }
  
  menu();

  do{
    menu();
    scanf("%d", &option);
    if(option == 1){
      
    }else if (option == 2){
      
    }


      
      
  }while(option != 0);

  scanf("%d", &fill);

  

  
  free(values);
  return 0;
}
int array_size(int * values){
  
}
void array_add(int * values, int value){
  
}
void array_destroy(int * values, int value){
  
}


void menu(){
  printf("\nDo you want to add or remove a element ?\n (1). ADD\n(2). REMOVE\n (3). SAIR");
  printf("\nAdicione um inteiro ao ARRAY :");
}
