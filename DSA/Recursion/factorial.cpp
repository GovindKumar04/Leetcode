#include <iostream>

using namespace std;

int factorial(int n){
   return (n==1) ?  1 : n*factorial(n-1);
}

 int main(){
    cout<<factorial(3);
    return 0;
 }