#include<iostream>
using namespace std;
int main()
{
  int N;
  cout<<"nhap N: ";
  cin>>N;
  for(int i=N;i>=1;i--)
  {
    for(int j=1;j<N+1;j++)
    {
      if(j<N-i+1)
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
