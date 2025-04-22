#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    // for(int i = 19; i<=n;i++){
    //     if(i % 19 == 0)
    //     cout<<i<<"\n";
    // }


    for(int i = 19; i<=n;i += 19){
        cout<<i<<"\n";
    }
    
}
   