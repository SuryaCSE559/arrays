#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int flag=0; 
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"It is in sorted order";
	}
	else
	{
		cout<<"It is not in sorted order";
	}
}
