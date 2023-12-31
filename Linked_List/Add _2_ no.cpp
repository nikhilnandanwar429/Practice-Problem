

Node* reverse(Node* head){

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(Node* head , Node* tail , int val){

    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail -> next = temp;
        tail = temp;
    }
}

Node* add(Node* first , Node* second){
    int carry = 0;

    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL || second != NULL || carry != 0){

        int val1=0
        if(first != NULL)
        val1 = first -> data;

        int val2=0;
        if(second != NULL)
        val2 = second -> data;

        int sum = carry + val1 + val2;

        int digit = sum % 10;

        //create node ans add in answer linked list
        insertAtTail(ansHead , ansTail , digit);

        carry = sum/10;

        if(first != NULL)
        first = first -> next;

        if(second != NULL)
        second = second -> next;
    }

    // while(first != NULL){
    //     int sum = carry + first -> data;
    //     int digit = sum%10;
    //     //create node and add answer linked list
    //     insertAtTail(ansHead , ansTail , digit);
    //     carry = sum/10;
    //     first = first -> next;
    // }

    // while(second != NULL){
    //     int sum = carry + second -> data;
    //     int digit = sum%10;
    //     //create node and add answer linked list
    //     insertAtTail(ansHead , ansTail , digit);
    //     carry = sum/10;
    //     second = second -> next;
    // } 
    // while(carry != 0){
    //     int sum = carry;
    //     int digit = sum%10;
    //     //create node and add answer linked list
    //     insertAtTail(ansHead , ansTail , digit);
    //     carry = sum/10;
    // }
    return ansHead;
}

Node* addTwoLists(Node* first , Node* second){

    //step 1  reverse input list
    first = reverse(first);
    second = second(second);

    //step 2 - add 2 list
    Node* ans = add(first , second);

    //step 3 - reverse ans
    ans = reverse(ans);

    return ans;
}