
/*Function to reorder the entries of array so that
even enteries apper first and then odd enteries*/
void EvenOdd(vector<int>* A_ptr) {
   vector<int>& A = *A_ptr;
    int even=0,odd=A.size()-1;
    while(even<odd)
    {
        if(A[even]%2==0)
            ++even;
        else
            std::swap(A[even],A[odd--]);
    }
}