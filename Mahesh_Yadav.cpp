
#include <iostream>  
using namespace std;  
int main()  
{  
  int n,r,reverse=0,temp;    
  cout<<"Enter the Number=";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 reverse=(reverse*10)+r;    
 n=n/10;    
}    
if(temp==reverse)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}  
