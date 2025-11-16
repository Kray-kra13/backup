#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};


int main(){
    Node* head = NULL, *temp = NULL, *last = NULL;

    int n;
    cout<<"Enter number of nodes: ";
    cin >> n;
    cout<<"Enter data:";
    for(int i=0; i<n; i++){
        temp = new Node();
        cin >> temp -> data;
        temp -> next = NULL;
        if(head == NULL){
            head = temp;
            last = temp;
        }else{
            last -> next = temp;
            last = temp;
        }
    }

    cout << "\nLinked list:";
    temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    return 0;
}