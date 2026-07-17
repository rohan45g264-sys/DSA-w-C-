#include<iostream>
using namespace std;
int main(){
    cout<<"enter n: ";
    int n;
    cin>>n;

    int nsp = 0, nst = 2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";           //spaces

        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";
        }
        nsp++;
        nst -= 2;
        cout<<endl;
    
    
    
}


}
