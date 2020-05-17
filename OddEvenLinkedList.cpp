/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* evenHead = NULL;
        ListNode* oddHead = NULL;
        ListNode* evenTail = NULL;
        ListNode* oddTail = NULL;
        ListNode* curr = head;
        int count = 0;
    
        while(curr)
        {
            count++;
            if(count % 2 == 0)
            {
               if(!evenHead)
               {
                   evenHead = curr;
                   evenTail = curr;
               }
               else{
                    evenTail->next = curr;
                    evenTail = curr;
                }
            }
            if(count % 2 == 1)
            {
               if(!oddHead)
               {
                   oddHead = curr;
                   oddTail = curr;
               }
               else{
                    oddTail->next = curr;
                    oddTail = curr;
                }
            }
            curr = curr->next;
        }
        if(oddTail)
        {
            oddTail->next = evenHead;
        }
        if(evenTail)
        {
            evenTail->next = NULL;
        }
        return oddHead;
    }
};
