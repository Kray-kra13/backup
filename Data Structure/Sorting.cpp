#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {12, 5, 7, 20, 3};
    vector<string> strArr = {"apple", "mango", "banana", "cherry"};

    //Bubble sort for Integers
    for(int i = 0; i < arr.size() - 1; i++){
        for(int j=0; j<arr.size() - 1; j++){
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "Sorted Integer: ";
    for(int i=0; i<strArr.size() - 1; i++){
        for(int j=0; j<strArr.size() - 1; j++){
            if (strArr[j]>strArr[j+1])
                swap(strArr[j], strArr[j + 1]);
        }
    }

    cout << "sorted strings: ";
    for(string s : strArr) cout << s << " ";
    cout << "\n";
}
