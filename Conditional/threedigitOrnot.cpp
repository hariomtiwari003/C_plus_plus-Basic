#include<iostream>
using namespace std;
int main () {
    float x ;
    cout<< " Enter the number :";
    cin>> x;
    if( x > 99 && x < 999){
        cout<<" three digit number" ;
    }

    else{
        cout<<" Number is not three digit " ;
    }
}