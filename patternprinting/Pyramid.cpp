#include<iostream>
using namespace std;
int main(){
    cout<<"enter n: ";
    int n;
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-1;j++){
    //         cout<<"# ";
    //     }

    //    for(int j=1;j<=2*i-1;j++){
    //        cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // method 2 best
    //num of spaces num od stars 

    int nsp = n-1, nst = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";           //spaces

        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";
        }
        nsp--;
        nst += 2;
        cout<<endl;
    
    
    
}


}
