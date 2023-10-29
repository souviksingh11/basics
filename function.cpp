#include <bits/stdc++.h>
using namespace std;
// void printLoop(int n){

//     for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout << "*";
//     }
//     cout << endl;
// }
// int sum(int x,int y){
//     int c=x+y;
//     return c;
// }
// void day(){
    
//     cout<<"good morning";
// }


// }

// int minimum(int x , int y){
//     if (x>y) return x;
// else return  y;
// }

int multyply(int x){
    int c=1;
    for(int i=1; i<=x; i++){
        c=c*i;

    }
    return c;
    
    
}












int main()
{
  
    // printLoop(3);
    // printLoop(4);
    // printLoop(5);

    // int a = sum(6,7);
    // cout<<a; 
    
    // cout<<endl;

    // sum (5,7);
// day();
// cout<<endl;
// day();
// cout<<endl;
// day();
// cout<<endl;
// day();


// cout<<minimum(12,5);

// int x=1;
// for(int i=1; i<=5; i++){
//     x=x*i;
    
// }
// cout<<x;
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
 int nvalue = multyply(n);
 int r;
 cout<<"Enter the value of r"<<endl;
 cin>>r;
int rvalue =  multyply(n-r);
int npr = nvalue/rvalue;
cout<<"The permutation value is :"<<" "<<npr;


    return 0;
}