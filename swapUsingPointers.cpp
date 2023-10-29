#include<bits/stdc++.h>
using namespace std;
int  swaping(int &x, int &y){
int temp = 0;
temp = x;
x = y;
y = temp;
 
}
 
int main()
{
int x = 8;
int y = 6;
swaping(x,y);
cout<<x<<y;

 
 
 
    return 0;
}