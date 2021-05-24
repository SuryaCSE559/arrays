#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,a[num],id,temp=0;
	cin>>num;
	for(int i=0;i<num;i++)
	   cin>>a[i];
	int *maxi=max_element(a,a+num);
	int frq_a[*maxi+1]={0};
	for(int i=0;i<num;i++)
	   frq_a[a[i]]++;
	for(int i=1;i<=*maxi;i++)
	   if(frq_a[i]>temp)
	   {
	      temp=frq_a[i];
	      id=i;
	   }
	cout<<"customer with ID: "<<id<<" will get discount since thier count is "<<temp;
}
