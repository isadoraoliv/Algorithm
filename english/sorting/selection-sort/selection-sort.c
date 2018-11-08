#include <stdio.h> 

int i,j;

void selectionSort(int array[], int n){
  
  int menor, tmp;
  
  for(i = 0; i < (n-1); i++){
    menor = i;
      for(j = (i + 1); j < n; j++){
        if(array[menor] > array[j])
          menor = j;
          printf("%d\n",menor);
    }
    if(array[i] != array[menor])
      tmp = array[menor];
      array[menor] = array[i];
      array[i] = tmp;
  }
}

void show(int array[],int n){
  
   printf("[ ");
   for (i = 0; i < n; i++) {
     printf("%d ", array[i]);
   }
   printf("] \n");
}

int main( ){
  
    int array[] = {103,112,35,62,40,20};
    int n = sizeof(array)/sizeof(array[0]);
  
    selectionSort(array, n);
    show(array,n);
}
