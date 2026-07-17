#include<iostream>
using namespace std;
int main(){
    cout<<"enter the value of n: ";
    int n;
    cin>>n;
    // METHOD 1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //       if((i+j) >= (n+1))  cout<<"* ";
    //       else cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    // METHOD 2


    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ // n+1-i ki jgh n-i kar diya kyoki 1st line me 3 space chahiye
          cout<<"# ";
        }
       

        for(int j=1;j<=i;j++){
            cout<<"* ";

        }
        cout<<endl;



}

}