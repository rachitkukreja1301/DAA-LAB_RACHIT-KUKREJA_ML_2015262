#include<iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	for (int i=0; i<T; i++)
	{
		int N;
		cin>>N;
		int A[N];
		for (int j=0; j<N; j++)
			cin>>A[i];
		int toSearch;
		cin>>toSearch; 
		int flag=0, numOFcompare=0;
		for (int i1=0; i1<N; i1++)
		{
			numOFcompare++;
			if (A[i1]==toSearch)
			{
				flag=1;
				break;
			}

		}
		if (flag==1)
		{
			cout<<"Present \n"<<numOFcompare; 
		}
		else
		{
			cout<<"Not Present \n"<<numOFcompare; 
		}
	}
	return 0;
}