#include<iostream>
using namespace std;
int main()
{
  int  a[2][2];
  int i,j,sum=0;
  cout<<"enter the elemenst of the 1 matrix :: "<<endl;
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          cin>>a[i][j];
      }
  }
  int b[2][2];
  cout<<"enter the elemenst of the 2 matrix :: "<<endl;
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          cin>>b[i][j];
      }
  }
  int c[2][2];
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          c[i][j] = 0;
          
      }
  }
  
  for(int k=0;k<2;k++)
  {
      for(i=0;i<2;i++)
      {
          for(j=0;j<2;j++)
          {
              c[k][i] += (a[k][j]  * b[j][i]) ;
          }   
      }
  }
  cout<<"The answer is : "<<endl;
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          cout<<c[i][j]<<"\t";
      }
      cout<<"\n";
  }
}
