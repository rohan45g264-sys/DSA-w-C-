#include<iostream>
using namespace std;
int main(){
    cout<<"enter the value of n: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            //  cout<<(char)(j+64)<<" ";
            cout<<(char)(i+64)<<" ";
        }  
        cout<<endl;
    
    }


}