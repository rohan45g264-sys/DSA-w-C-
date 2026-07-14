#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the numbers of rows: ";
    cin>>m;
     cout<<"enter the numbers of columns: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
           if(i ==1 || i ==m || j ==1 || j==n) cout<<"* ";
           else cout<<"  ";
        }
          cout<<endl;
    }

}