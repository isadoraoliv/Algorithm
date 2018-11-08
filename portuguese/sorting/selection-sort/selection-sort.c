void selectionSort(int array[], int n){

  for(i = 0; i < (n-1); i++){
    int menor = i;
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
