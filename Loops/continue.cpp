#include<iostream>
using namespace std;
int main() {
    for(int  i = 1 ; i<=15; i++){
        if(i == 5  || i == 6) continue;
        cout<<i<< " ";
    }
}