#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = { 12, 5, 7, 20, 3};
    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    double avg = accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
    int total = accumulate(arr.begin(), arr.end(), 0);
    double sinVal = sin(arr[0]);

    cout << "Maxium: " << maxVal << "\n";
    cout << "Minium: " << minVal << "\n";
    cout << "Average: " << avg << "\n";
    cout << "Total: " << total << "\n";
    cout << "Sin(first element):" << sinVal << "\n";
}
