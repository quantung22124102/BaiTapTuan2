#include<iostream>
#include<cmath>
using namespcae std;
int main()
{
 int n,x;
 cout<<"nhap n: ";
 cin>>n;
 x=(int)sprt(n);
 if(x*x==n)
 {
  cout<<"n la so chinh phuong";
 }
 else
 {
  cout<<"n kphai so chinh phuong";
 }
 return 0;
}
