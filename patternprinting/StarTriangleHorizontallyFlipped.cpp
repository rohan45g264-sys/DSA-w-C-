#include<iostream>
using namespace std;
int main(){
    cout<<"enter the value of n: ";
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){        // for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++){   // for(int j=1;j<=n+1-i;j++)
            cout<<"* ";
        }
        cout<<endl;
    }
}