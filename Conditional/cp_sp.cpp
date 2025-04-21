#include<iostream>
using namespace std;
int main (){
    float cp , sp;
    cout<<"Enter thecost price :";
    cin>> cp;
    cout<<"Enter the number of selling price :";
    cin>> sp;
    if( sp> cp){
        cout<<"profit" <<sp -cp;
    }
   
if(cp > sp) {
    cout<<"Loss" << cp- sp;
}
 if(cp == sp){
    cout<<" no profit no loss";

 }
    
}