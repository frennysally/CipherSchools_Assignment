
#include<iostream>
using namespace std;

void halfpyramid (int n)
{
   for(int i=1; i<=n; i++)
   {
   	for(int k=n-i;k>0;k--)
   	    cout<<" ";

      for(int j=1; j<=i; j++)
      {
         cout << "*";
      }
      cout <<endl;
   }
   
 }
 
 int main()
 {
 	int num;
 	cout<<"enter no.of rows :";
 	cin>>num;
 	halfpyramid(num);
 	cout<<endl;
 	return 0;
 }
