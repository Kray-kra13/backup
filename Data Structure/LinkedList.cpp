#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
}

void solve(){
    Node* head = NULL;
    Node* temp = NULL;
    Node* last = NULL;

    int n;
    cin>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<n; i++){
        temp = new Node();
        temp -> data = v[i];
        temp -> next = NULL;

        if(head == NULL){
            head = temp;
            last = temp;
        }else{
            last -> next = temp;
            last = temp;
        }
    }
    Node* current = hesd;
    cout<<"Linked List: ";
    while(current != NULL){
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << endl;
}
int main(){
    solve();
}