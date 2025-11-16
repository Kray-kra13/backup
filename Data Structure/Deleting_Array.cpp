#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {12, 5, 7, 20, 3};

    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << "\n";

    //Delete by value (remove 7)
    arr.erase(remove(arr.begin(), arr.end(), 7), arr.end());

    cout << "After Deleting value 7: ";
    for(int x : arr) cout << x << " ";
    cout << "\n";

    //Delete by position (index 1)
    if (arr.size() > 1)
    arr.erase(arr.begin() + 1);

    cout << "After Deleting position 1: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
}
