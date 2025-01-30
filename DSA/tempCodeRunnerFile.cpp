#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

// 5,6,7,6,5,9,9

int main(){
   vector<int> a;
   a.push_back(9);
   a.push_back(1);
   a.push_back(1);
   a.push_back(1);
   a.push_back(1);
   a.push_back(1);
   a.push_back(1);
   a.push_back(1);
   a.push_back(7);
   a.shrink_to_fit();
   cout<<"Front: "<<a.front()<<endl;
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
   for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
   }
    cout<<"Back" <<a.back();
    a.pop_back();
    for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
   }
   cout<<"Xor: "<<(5^6^7^6^5);
    return 0;
}