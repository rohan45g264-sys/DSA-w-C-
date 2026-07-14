#include<iostream>
using namespace std;
int main(){
     cout<<"enter the value of n: ";            // n must be odd
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i == (1+n)/2  ||  j == (1+n)/2) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }


}