#include<bits/stdc++.h>

using namespace std;

struct node {
    int data;
    struct node *next;
};

/* Function to push nodes in a linked list. */
void push(struct node **head_ref, int data) {
    struct node *node;
    node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->next = (*head_ref);
    (*head_ref) = node;
}

/* Function to reverse the nodes in a linked list. */
void reverse(struct node **head_ref) {
    struct node *temp = NULL;
    struct node *prev = NULL;
    struct node *current = (*head_ref);
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head_ref) = prev;
}

/* Function to print the nodes in a linked list. */
void printnodes(struct node *head) {
    while(head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

/* Driver function to check the above algorithm. */
int main() {
    struct node *head = NULL;
    int n;

    cout<<  "Enter integers:" <<endl;
    while(1){
    cin >> n;
    if(n == -1) break;
    push(&head, n);


    cout << "List after mirrored" << endl;
    printnodes(head);
    reverse(&head);
    printnodes(head);
    return 0;
}
