#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5,a[n]={5,12,20,30,40},fe,se;
	fe=se=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>fe)
		{
			se=fe;
			fe=a[i];
		}
		else if(a[i]>se&&a[i]!=fe)
		{
			se=a[i];
		}
	}
	cout<<"The second largest element is"<<se;
}
