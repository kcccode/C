#include <stdlib.h>
#include <stdio.h>

typedef struct ele{
  int value;
  struct ele *next;
} list_ele;

typedef struct {
  list_ele *head;
  list_ele *end;
} queue;

int main(int argc, char argv) {
  
  list_ele A, B;
  list_ele *ptr = &A;

  A.value = 2;
  A.next = &B;
  B.value = 4;
  B.next = NULL;

  printf("*ptr: %p\n", ptr);
  printf("A.value: %d\n", A.value);
  printf("A.next: %p\n", A.next);
  printf("B.value: %d\n", B.value);
  printf("B.next: %p\n", B.next);
  
  return 0;
}
