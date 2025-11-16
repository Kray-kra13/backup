#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr1 = {3, 2, 15, 20};
    vector<int>arr2 = {30, 40, 50};

    vector<string> strArr1 = {"apple", "banana"};
    vector<string> strArr2 = {"cherry", "mango"};

    //Merge Integers
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    cout << "Merged Integer Array: ";
    for(int x : arr1)cout << x << " ";
    cout << "\n";

    //Merge Strings
    strArr1.insert(strArr1.end(), strArr2.begin(), strArr2.end());
    cout << "Merged String Array: ";
    for(string s : strArr1) cout << s << " ";
    cout << "\n";
}
