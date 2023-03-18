//swapping the bits

#include<stdio.h>

long long SwapBits(long long x, int i, int j) {
  // TODO - you fill in here.
    if(((x>>i)&1)!=((x>>j)&1)){
        unsigned long bit = (1L<<i)|(1L<<j);
        x^=bit;
    }
    return x;
}

int main()
{
  unsigned long long num=0;
  int p1,p2;
  printf("Enter number:");
  scanf("%lld",&num);
  printf("\nenter position 1 to swap:");
  scanf("%d",&p1);
  printf("\nenter position 2 to swap:");
  scanf("%d",&p2);
  printf("Swapped number is = %lld",SwapBits(num,p1,p2));
  return 0;
}