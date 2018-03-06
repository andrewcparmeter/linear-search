// First commit

#include <stdio.h>
#include <stdlib.h>

int main() {
  int size = 100;
  int array[size];
  int search = 42;
  int index;

  for(index = 0; index < size; index++) {
    array[index] = index;
  }

  for(index = 0; index < size; index++) {
    if(array[index] == search) {
      printf("found at: %d\n", index);
      return 1;
    }
  }
  printf("not found\n");
  return 0;
}
