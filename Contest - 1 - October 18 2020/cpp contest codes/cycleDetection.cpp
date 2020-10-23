// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *t = head;   // here t will point to head node
    SinglyLinkedListNode *r = head;
if(head == NULL || head->next==NULL) // Condition 1, if head is null of address of head is null means either their is only one node or no node
{
    return false;
}
while( r!=NULL&&r->next!=NULL) // Condition 2, if address of head is not null then traverse linked list and is t is equal to r then return true and stop program
{
    t = t->next; // Tortoise node i.e. node which will remain at previous nodes
    r = r->next->next; // Hare node i.e. node which will move one node ahead of tortoise node
    if(t==r)  // Condition 3
    {
        return true;
        break;
    }

}
return false;
}
