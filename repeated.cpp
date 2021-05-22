#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max_freq=0,id;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	   cin>>a[i];
    }
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
			if(a[i]==a[j])
			    count+=1;
		if(max_freq<count)
		{
			max_freq=count;
			id=a[i];
		}
	}
	cout<<"The person with ID: "<<id<<" will get discount since his count is "<<max_freq;
}
