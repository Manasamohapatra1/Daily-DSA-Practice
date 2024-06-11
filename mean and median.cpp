class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        if(N%2==0){
            return (A[N/2-1]+A[N/2])/2;
        }
        return A[N/2];
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int res=0;
         for(int i=0;i<N;i++){
            res+=A[i];
        }
        int mean=res/N;
        return mean;
    }
};