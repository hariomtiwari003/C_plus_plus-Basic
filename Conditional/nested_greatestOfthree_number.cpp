#include<iostream>
using namespace std;
int main () {
    int x , y ,z;
    cout<<"Enter the number :";
    cin>>x;
    cout<<"Enter the second number :";
    cin>>y;
    cout<<"Enter the  third number :";
    cin>>z;
    if(x > y){
        if(x > z)
        cout<< x <<"Greaest number";
    }
    else if( y > x){
        if(y > z)
        cout<< y <<" Greatest number";
    }
    else{
        cout<<z<<"greatest number";
    }
}
   