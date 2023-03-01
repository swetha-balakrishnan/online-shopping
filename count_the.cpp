#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string s;
	int i,j=0,n,co=0;
	string str[50];
	getline(cin,s);
	n=s.length();
	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
		  str[j]+=s[i];
		  	
		}
		if(s[i]== ' ')
		{
			j++;
		}
	}
	for(i=0;i<=j;i++)
	{
		if(str[i]=="the")
		{
			co++;
		}
	}
	cout<<co;
	
}
