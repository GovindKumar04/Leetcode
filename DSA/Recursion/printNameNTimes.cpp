#include <iostream>

using namespace std;

void printName(int n){
    if(n==0){
        return;
    }
    cout<<"Govind Kumar"<<endl;
    printName(n-1);
}

int main(){
    printName(5);
}