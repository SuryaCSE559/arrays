#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,a[num],temp=0,id;
	cin>>num;
	for(int i=0;i<num;i++)
	   cin>>a[i];
	map<int,int>dict;
	for(int i=0;i<num;i++)
	   dict[a[i]]++;
	for(auto it:dict)
		if(it.second>temp)
		{
			temp=it.second;
			id=it.first;
		}
	cout<<"customer with ID: "<<id<<" will get discount since thier count is "<<temp;
}
