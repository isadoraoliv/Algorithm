

#include <stdio.h> 

int i,j;

void selectionSort(int array[], int n){
  
  int menor, tmp;
  
  //seek the smallest element with respect to "i"
  for(i = 0; i < (n-1); i++){
    menor = i;
      for(j = (i + 1); j < n; j++){
        if(array[menor] > array[j])
          menor = j;
    }
    
    //change the values of the current position with the smaller
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


