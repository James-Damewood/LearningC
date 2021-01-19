class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> stored;
        
        ListNode* curr = head;
        ListNode* prev;
        
        while (curr != nullptr) {
            if (stored.find(curr->val)==stored.end()){
                stored[curr->val] = 42;
                prev = curr;
                curr = curr->next;
            } else {
                prev->next = curr->next;
                curr = curr->next;
            }
            
            
            
        }
        
        
        return head;
    }
};
