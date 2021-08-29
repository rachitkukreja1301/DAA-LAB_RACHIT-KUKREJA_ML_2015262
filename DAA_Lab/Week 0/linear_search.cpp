#include<iostream>
using namespace std;

int linearSearch(int arr[],int l,int key){
    for(int i=0;i<l;++i)
        if(arr[i]==key)
            return 1;
    return 0;
}

int main(){
    int l;
    cin>>l;
    int arr[l];
    for(int i=0 ; i<l ; ++i)
        scanf("%d",&arr[i]);
    int k;
    cin>>k;
    if(linearSearch(arr,l,k))
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;
    
    return 0;
    
}
