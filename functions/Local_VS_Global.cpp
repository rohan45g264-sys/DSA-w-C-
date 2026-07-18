#include<iostream>
using namespace std;
int x = 7;   // global variable
void change(){
    x = 23;
}
int main(){
    int x = 80;        // koi void ka f(x) main ki value ko kabhi change nhi kr skta : passbyvalue
    cout<<x<<endl;
    change();
    cout<<x<<endl;
}