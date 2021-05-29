#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n],temp;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int l=0,r=n-1;
	while(l<(n/2))
	{
		swap(arr[l],arr[r]);
		l++;
		r--;
	}
	cout<<"reversed array is:";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
