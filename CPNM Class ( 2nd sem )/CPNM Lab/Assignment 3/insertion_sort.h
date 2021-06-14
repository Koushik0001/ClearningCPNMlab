void insertion_sort(int A[],int nn)
{
int i,j;
for(j=1;j<nn;j++)
    {
        i=j-1;
        while((i>=0) && (A[i]>A[i+1]))
        {
            int t;
            t=A[i];
            A[i]=A[i+1];
            A[i+1]=t;

            i--;
        }
    }
}