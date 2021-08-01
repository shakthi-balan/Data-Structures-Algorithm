// Write a Program to Move the last element to Front in a Linked List.

void movefirst(Node **head_ref){
    
    if(*head_ref == NULL || (*head_ref)->next == NULL)
        return;
    
    Node *secLast = NULL;
    Node *last = *head_ref;

    while (last->next != NULL)
    {
        secLast = last;
        last = last->next;

    }

    secLast->next = NULL;

    last->next = *head_ref;

    *head_ref = last;
}