#include<iostream>
using namespace std;

//Print the pattern:
// 12345
// 1234
// 123
// 12
// 1

int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=n;i;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}