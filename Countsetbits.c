//c code to count number of set bits
#include <stdio.h>

int CountBits(unsigned int x) {
  int count=0;
  while(x) {
      count += x & 1;
      x >>= 1;
  }
  return count;
}

int main() 
{
  int num=0;
  printf("Enter number to countbits:");
  scanf("%d",&num);
  printf("No of bits set = %d",CountBits(num));
  return 0;
}
