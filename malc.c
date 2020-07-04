#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *ptr;
  int sum = 0;
  scanf("%d", &n);
  ptr = (int *)malloc(n * sizeof(int));
  if (ptr == NULL) {
    printf("unable to allocate memory");
    return 1;
  }
  printf("Enter elements of array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", ptr+i);
    sum += *(ptr+i);
  }
  printf("Sum=%d", sum);
  free(ptr);
  return 0;
}
