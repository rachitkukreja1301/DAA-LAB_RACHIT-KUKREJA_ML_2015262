#include <iostream>

using namespace std;
int main()
{
	int i, low, high, mid, n, key, array[100];
	cout<<"Enter number of elements to enter in the array : ";
	cin>>n;
	cout<<"\nNow enter the elements....\n";
	for(i = 0; i < n; i++)
		cin>>array[i]; 
	cout<<"\nEnter the key element to find....";
	cin>>key;
	low = 0;
	high = n - 1;
	mid = (low+high)/2;
	int numOFcompare=0;
	while (low <= high)
	{
		numOFcompare++;
		if(array[mid] < key)
			low = mid + 1;
		else if (array[mid] == key)
		{
			cout<<"\n\nNumber is present and number of comparisons are "<<numOFcompare;
			break;
		}
		else
			high = mid - 1;
		mid = (low + high)/2;
	}
	if(low > high)
		cout<<"\n\nNumber is not present and number of comparisons are "<<numOFcompare;
	
	return 0;
}