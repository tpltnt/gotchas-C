#include <stdio.h>
#include <stdint.h>

int main(void){
  uint64_t foo = 303;
  uint64_t bar = 0303;
  printf("foo: %llu\n",foo);
  printf("bar: %llu\n",bar);
  return 0;
}
