#include<iostream>
using namespace sdt;
int main()
{
 int N;
 cout<<"nhap N: "'
 cin>>N;
 for(int i=0;i<N;i++)
 {
  for(int j=0;j<N+i-1;j++)
  {
   if(j<=N-1)
   {
    cout<<" ";
   }
   else
   {
    cout<<"*";
   }
  }
  cout<<endl;
 }
 return 0;
}
