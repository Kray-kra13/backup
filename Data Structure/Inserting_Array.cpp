#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {12, 5, 7, 20, 3};

    cout<< "Before Insertion: ";
    for(int x : arr) cout << x << " ";
    cout << "\n";

    //Insert 15 at position 2
    arr.insert(arr.begin() + 2, 15);

    cout << "After Insertion: ";
    for(int x : arr) cout << x << " ";
    cout << "\n";
}
