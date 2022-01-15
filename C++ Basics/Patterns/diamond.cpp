#include<iostream>
using namespace std;

//Print the pattern:
/*
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     * 
  
*/
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int space=n-i;space;space--){
            cout<<"   ";
        }
        for(int j=1;j<=2*i -1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int i=n;i;i--){
        for(int space=n-i;space;space--){
            cout<<"   ";
        }
        for(int j=1;j<=2*i -1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}