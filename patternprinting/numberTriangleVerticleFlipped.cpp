#include<iostream>
using namespace std;
int main(){
    cout<<"enter n: ";
    int n;
    cin>>n;
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ // n+1-i ki jgh n-i kar diya kyoki 1st line me 3 space chahiye
          cout<<"  ";
        }
       

        for(int j=1;j<=i;j++){
            cout<<j<<" ";

        }
        cout<<endl;



}

}
