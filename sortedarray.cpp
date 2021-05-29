#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=0,n,arr[n];
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(arr[j]<arr[i])
			{
				flag=1;
				break;
			}
	if(flag=0)
	{
		cout<<"It is in sorted order";
	}
	else
	{
		cout<<"It is not in sorted order";
	}
}
