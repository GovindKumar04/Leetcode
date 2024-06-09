#include <iostream>
#include <vector>

using namespace std;

vector<int> moveZeros(vector<int> arr)
{
    int size = arr.size();
    int i = 0;

    for (int j = 0; j < size; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i++], arr[j]);
        }
    }
    
    return arr;
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};
    vector<int> newArr = moveZeros(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<newArr[i]<<" ";
    }
}
