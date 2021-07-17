#include<bits/stdc++.h>
using namespace std;

void allbinstr(string s,int a,int b)
{
	if(a>b)
	{
	    cout<<s<<endl;
	}
	else
	{
		allbinstr(s+"0",a+1,b);
		allbinstr(s+"1",a+1,b);
	}
}

int main()
{
	int n; cin>>n;
	string s;
	
	allbinstr(s,0,n-1);
	}	
