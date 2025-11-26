// Approach 1: using Unorderd Map to count frequency of Element...
// Using Dummy Node to store Unique Elements...

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode dummy;
        ListNode *ptr = &dummy;
        unordered_map<int,int> freq;
        ListNode *temp = head;
        while(temp!=NULL){
            freq[temp -> val]++;
            temp = temp -> next;
        }
        temp = head;
        while(temp!=NULL){
            if(freq[temp -> val]==1){
                ptr -> next = temp;
                ptr = ptr -> next;
            }
            temp = temp -> next;
        }
        ptr -> next = NULL;
        return dummy.next;
    }
};