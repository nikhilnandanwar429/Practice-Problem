
//List is in Sorted Order
Node* uniqueSortedList(Node* head){
    //empty list
    if(head == NULL){
        return NULL;
    }

    //non empty list
    Node* curr = head;

    while(curr != NULL){

        if(curr -> data == curr -> next -> data  && curr -> next != NULL){
            Node* next_next = curr -> next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }

        else{ // NOt equal
            curr = curr -> next;
        }
    }
    return head;

}




//List is Not in Sorted Order
