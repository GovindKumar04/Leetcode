#include <iostream>
#include <vector>

using namespace std;

int getLength(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}
void reverseString(vector<char>& s) {
        int count=0;
        for(int i=0; s[i]!='\0';i++){
            count++;
        }
        int st=0;
        int e=count-1;
        while(st<e){
            swap(s[st++],s[e--]);
        }
        for(int i=0; i<count; i++){
            cout<<s[i]<<" ";
    }
    }
int main(){
    vector<char> ch={'h','e','l','l','o'};
    // for(int i=0; i<7; i++){
    //     cin>>ch[i];
    // }
    // for(int i=0; i<10; i++){
    //     cout<<ch[i]<<" ";
    // }
    
    // ch[2]='\0';
    // cout<<"Length is "<<getLength(ch);
    cout<<"Reverse string is ";
    reverseString(ch);
    for(char i='A'; i<='Z'; i++){
        cout<<i-'A'<<" ";
    }

}