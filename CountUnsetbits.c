#include <stdio.h>

int Count0Bits(unsigned int x) {
  int count=0;
  int length=0;
  while(x) {
      count += x & 1;
      x >>= 1;
      length++;
  }
  return (length-count);
}

int main() 
{
  int num=0;
  printf("Enter number to countbits:");
  scanf("%d",&num);
  printf("No of bits not-set = %d",Count0Bits(num));
  return 0;
}
