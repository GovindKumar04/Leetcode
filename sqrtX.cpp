#include <iostream>
using namespace std;

class Solution {
public:
    long long binarySearch(int x){
        int s=0;
        int e=x;
        long long int m=s+(e-s)/2;
        long long int ans;
       
        while(s<=e){
            long long int sq= m*m;
            if(sq==x){
                return m;
            }
            if (sq<x){
                s=m+1;
                ans=m;
            }else{
                e=m-1;
            }
            m=s+(e-s)/2;
        }
        return ans;
    }
    
    int mySqrt(int x) {
        return binarySearch(x);
    } 
};


int main(){
    Solution sol;
    int x;
    cout<<"Enter a Integer"<<endl;
    cin>>x;
    cout<<sol.mySqrt(x);
}