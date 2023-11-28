#include <stdio.h>


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  // for (int step = 0; step < size - 1; step++) {
  //   int min_idx = step;
  //   for (int i = step + 1; i < size; i++) {

  //     if (array[i] < array[min_idx])
  //       min_idx = i;
  //   }

    
  //   swap(&array[min_idx], &array[step]);
  // }

for(int i = 0; i<size;i++){
  int min= array[i];
  int loc=i;
  
  for(int j =i+1;j<=size;j++){
    if(array[j]<=min){
      min=array[j];
      loc=j;
    }

  }
  swap(&array[i],&array[loc]);
}


}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


int main() {
  int data[] = {5,3,76,98,2,3,66,97};
  int size = sizeof(data) / sizeof(data[0]);
  printArray(data, size);
  selectionSort(data, size);
  printf("Sorted array :\n");
  printArray(data, size);

}
