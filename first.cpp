#include<iostream>
using namespace std;
int main()
{
  int i;
  cout<<"Enter a non-zero value: "; 
  cin>>i;
  if(i != 0)
{
    cout<<"valid input.\n";
}
else
{
    cout<<"Error!";
    exit(0);
}
cout<<"The Input was : "<<i;
}