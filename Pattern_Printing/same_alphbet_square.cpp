#include<iostream>
using namespace std;
int main () {
    int m;
    cout<<"Enter the number :";
    cin>>m;
    for(int i = 65; i<=m; i++){
        for(int i = 1; i<=m; i++){
            cout<<(char)(i);
        }
        cout<<"\n";
    }

}