#include <iostream>
using namespace std;
int binarySearch(int A[], int N, int x, int firstSEARCH)
{
    int low=0, high=N-1, result=-1;
 	while (low <= high)
    {
        int mid = (low + high)/2;
        if (x == A[mid])
        {
            result = mid;
			if (firstSEARCH)
                high = mid - 1;
           	else 
                low = mid + 1;
        }
 		else if (x < A[mid])
			high = mid - 1;
        else 
            low = mid + 1;
    }
    return result;
}
int main()
{
	int T;  	    cin>>T;
	for (int i=0; i<T; i++)
	{
		int n;  	cin>>n;
		int A[n];
		for (int i1=0; i1<n; i1++)
			cin>>A[i];
		int toSearch;   cin>>toSearch;
		int first = binarySearch(A, n, toSearch, 1);
		int last = binarySearch(A, n, toSearch, 0);
 		int count = last - first + 1;
 		if (first != -1) 
        	cout<<toSearch<<"-"<<count;//printf("%d - %d\n", toSearch, count);
    	else 
        	cout<<"Key not present\n";//printf("Key not present\n");
    }
    return 0;
}