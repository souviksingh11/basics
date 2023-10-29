#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int x=5;
// int *p=NULL;
// cout<<*p;
int *p = &x;
int **ptr = &p;
cout<<*p<<endl;
cout<<&x<<endl;
cout<<**ptr<<endl;
cout<<&p<<endl;
 cout<<&ptr;
 
 
    return 0;
}