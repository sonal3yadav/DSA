https://leetcode.com/problems/linked-list-cycle/


class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode * p =head ;
       ListNode * q =head;
       
        while(p!=NULL && q != NULL && q->next != NULL)
        {
            p = p->next;
            q =q->next->next; 
            
            if(p==q)
                return true;
            
        }
        return false;
    }
};
