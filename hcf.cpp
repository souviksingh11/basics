#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n1;
int n2;
int hcf;
cout<<"enter n1 value:";
cin>>n1;
cout<<"enter n2 value:";

cin>>n2;
 if(n2>n1){
    int x=n2;
    n2=n1;
    n1=x;
 }
 for(int i=1; i<=n2; i++){
    if(n1%i==0 && n2%i==0){
        hcf=i;
    }
   
 }
  cout<<"hcf value"<<" "<<"="<<" "<<hcf;
 
 
    return 0;
}