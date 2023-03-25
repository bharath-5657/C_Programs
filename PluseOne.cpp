/*Program which takes input number of digits encoding
a decimal number D and updates the array to represent the number D+1.
For example, if input is (1,2,9)then output encode is (1,3,0)*/

#include <vector>
#include <stdio.h>
#include <string.h>

using namespace std;

void Pluseone(std::vector<int> A)
{
    ++A.back();
    for(int i=A.size()-1;i>0 && A[i]==10;i--)
    {
        A[i]=0; ++A[i-1];
    }
    if(A[0]==10){
        A[0]=0;
        A.insert(A.begin(),1);
    }
    printf("Encoded value:");
    for(int i=0;i<A.size();i++){
        printf("%d",A[i]);
    }


}
int main(){
    std::vector<int> A;
    long long number;
    printf("Enter the number to encode");
    scanf("%lld",&number);
    while (true)
    {
        A.insert(A.begin(), number%10);
        number /= 10;
        if(number == 0)
            break;
    }
    Pluseone(A);
}