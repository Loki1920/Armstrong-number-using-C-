//Armstrong number
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int n;
  cout<<"number:";
  cin>>n;
  int count;
  cout<<"enter number of integer:";
  cin>>count;
  
  int sum = 0;
  int original =n;
  
  while(n>0){
    int lastdigit = n%10;
    sum = sum+pow(lastdigit,count);
    n = n/10;
    
  }
  cout<<sum<<endl;
  if(sum==original)
    cout<<"Armstrong number";
  else
    cout<<"not a Armstrong number";
  return 0;
}