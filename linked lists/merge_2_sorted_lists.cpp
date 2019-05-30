/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 &&!l2)
        {
            return NULL;
        }
        else if(!l1)
        {
            return l2;
        }
        else if(!l2)
        {
            return l1;
        }
        else if(l1->val<=l2->val)
        {
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
        else
        {
            ListNode *temp=l1;
            l1=l2;
            l1->next=mergeTwoLists(temp,l2->next);
            return l1;
        }

    }
};
