#include<bits/stdc++.h>
using namespace std;
 
int main()
{
for(int i=1; i<10; i++){


    for(int j=10; j>i; j--){
      if(j%2==0){
        cout<<"#"<<" ";
      }
      else{
        cout<<"*"<<" ";
      }

     
    } 

    

    for (int j = 1; j < i; j++) {
            cout << "  "; // Two spaces for better formatting
        }

        // Print asterisks
        for (int k = 1; k <= 10 - i + 1; k++) {
            cout << "* ";
        }




    cout<<endl;

}
 
 
 
    return 0;
}