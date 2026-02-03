/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL,*cur = head,*nex = NULL;
    while(cur != NULL)
    {
        nex = cur -> next;
        cur -> next = prev;
        prev = cur;
        cur =  nex;
    }
    return prev;
}
