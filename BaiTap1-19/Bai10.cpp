#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double y,z;
	int x;
	cout<<"nhap vao nhiet do F: ";
	cin>>x;
	y=(x-32)*5/9;
	z=y+273.15;
	printf("%d%0.2lf%0.2lf",x,y,z);
	return 0;
}
