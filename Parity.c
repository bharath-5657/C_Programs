//computing the parity of  word
//The parity of word is 1 if number of 1's in world is odd, otherwise 0;

#include <stdio.h>
int Parity(unsigned long long x) {
  int count=0;
  while(x)
  {
      count += (x&1);
      x>>=1;
  }
  if(count%2==0){
      return 0;
  }
  else {
      return 1;
  }
}
/*Other solution
int Parity(unsigned long long x) {
  int count=0;
  while(x)
  {
      count ^= (x&1);
      x>>=1;
  }
  return count;
  }*/
int main()
{
  unsigned long long num=0;
  printf("Enter number:");
  scanf("%lld",&num);
  printf("Parity of number is = %d",Parity(num));
  return 0;
}
