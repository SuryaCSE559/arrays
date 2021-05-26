#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5,arr[n]={10,20,30},ele,pos;
	cout<<"Enter element & position: ";
	cin>>ele>>pos;
	int ind=pos-1;
	if(pos<=n)
	{
		for(int i=n-1;i>ind;i--)
			arr[i]=arr[i-1];	
		arr[ind]=ele;
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
	}
	else
	{
		cout<<"No more element can be insert";
    }
}
