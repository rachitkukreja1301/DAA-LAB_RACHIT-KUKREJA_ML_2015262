#include <iostream>
using namespace std;
int main()
{
    int T;  cin>>T;
    for (int times=0; times<T; times++)
    {
        int n; int comparison=0, shift=0;
        cin>>n;
        int A[n];
        for (int i=0; i<n; i++)
            cin>>A[i];


        for (int i=1; i<n; i++)
        {
            int key = A[i];
            int left_index = i-1;
            if (key>A[left_index])
                comparison++;
            while (key < A[left_index] && left_index>=0)
            {
                comparison++;

                A[left_index+1] = A[left_index];
                shift++;
                --left_index;
            }
            A[left_index+1] = key;
        }
        for (int i1=0; i1<n; i1++)
            cout<<A[i1];

        cout<<"\ncomparisons =" << comparison+1<<"\nshifts ="<< shift<<"\n";
    }
    return 0;
}
