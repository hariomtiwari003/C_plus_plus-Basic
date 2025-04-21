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
    if( x + y > z && x + z > y && y + z > x) {
        cout<<" triangle is valid";
    }
    else {
        cout<<"Triangle is not valid";
    }
}
    