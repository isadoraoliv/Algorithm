
#include <stdio.h>

int i,j;

void insertionSort(int array[], int n) {
	
  int tmp;

  for (i = 1; i < n; i++) {
    tmp = array[i];
    j = i - 1;

    while ((j >= 0) && (array[j] > tmp)) {
      array[j + 1] = array[j];
        j--;
    }
    array[j + 1] = tmp;
   }
}
