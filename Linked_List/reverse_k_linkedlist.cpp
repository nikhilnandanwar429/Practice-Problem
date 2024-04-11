

Node* kReverse(Node* head , int k){
    //base case
    if(head == NULL){
        return NULL;
    }

    //step 1: Reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    NOde* prev = NULL;
    int count = 0;

    while( curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //step 2: Recurssion dekhlege aage ka
    if(next != NULL){
        head -> next = kReverse(next , k);
    }

    //step 3: return head of reversed list
    return prev;
}