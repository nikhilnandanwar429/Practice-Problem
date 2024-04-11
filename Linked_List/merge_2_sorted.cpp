

void solve(Node* first , Node* second){

    //if only one element is presemt in list
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }

    Node* curr1 = first;
    Node* next1 = first -> next;
    Node* curr2 = second;
    Node* next2 = curr2 -> next;

    while(curr2 != NULL && next1 != NULL){

        if((curr2 -> data >= curr1 -> data ) && (curr2 -> data <= next1 -> data)){

            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;

            curr1 = curr2;
            curr2 = next2;
        }

        else{
            //curr1 next1 move forward
            curr1 = next1;
            next1 = next1 -> next;

            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node* sortTwiLists(Node* first , Node* second){

    if(first == NULL){
        return second;
    }

    if(second == NULL){
        return first;
    }

    if(first -> data <= secind -> data)
    return solve(first , second);
    
    else
    return solve(second , first);
}