#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cap,pos=0,ele,arr[cap];
	cout<<"Enter the array size:";
	cin>>cap;
	cout<<"No.of elments in the array :";
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	cout<<"Enter the value:";
	cin>>ele;
	for(int i=1;i<=n;i++)
		if(arr[i]==ele)
			pos=i;
	if(pos==0)
	{
	    cout<<"element not found";
	}
	else
	{
	    for(int i=pos;i<=cap;i++)
		    arr[i]=arr[i+1];
	    n--;
	    for(int i=1;i<=n;i++)
		    cout<<arr[i]<<" ";
	}
}
