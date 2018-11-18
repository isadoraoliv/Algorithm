

#include <stdio.h> 

int i,j;

void selectionSort(int array[], int n){
  
  int menor, tmp;
  
  //percorrer o vetor e buscar o menor elemento em relação a "i"
  for(i = 0; i < (n-1); i++){
    menor = i;
      for(j = (i + 1); j < n; j++){
        if(array[menor] > array[j])
          menor = j;
    }
    
    //encontrado o menor elemento, alterar os valores da posição atual com o menor
    if(array[i] != array[menor])
      tmp = array[menor];
      array[menor] = array[i];
      array[i] = tmp;
  }
}

int main( ){
  
    int array[] = {103,112,35,62,40,20};
    int n = sizeof(array)/sizeof(array[0]);
  
    selectionSort(array, n);
}

