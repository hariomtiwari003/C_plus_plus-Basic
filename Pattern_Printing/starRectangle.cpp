#include<iostream>
using namespace std;
int main() {
    int m , n ;
    cout<<"Enter the number :";
    cin>>m;
    cout<<"Enter the number the columns :";
    cin>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}