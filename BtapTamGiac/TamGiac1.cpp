#include<iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"nhap N: ";
cin>>N;
for(int i=0;i<N;i++)
 {
 	for(int j=0;j<N;j++)
    {
    	if(j<i)
    	{
    		cout<<" ";
	}
	if(j>=i)
	{
		cout<<"*";
	}
     }
	cout<<"\n";
  }
return 0;
}
