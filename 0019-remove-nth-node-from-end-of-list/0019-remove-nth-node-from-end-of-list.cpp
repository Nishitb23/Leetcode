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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int size =0;
        ListNode* temp = head;
        vector<ListNode*> v;
        
        while(temp){
            size++;
            v.push_back(temp);
            temp = temp->next;
        }
        
        if(n==1){
            if(size==1){
                return NULL;
            }else{
                v[size-2]->next= NULL;
                delete v[size-1];
            }
        }else if(n==size){
            delete v[0];
            return v[1];
        }else{
            v[size-n-1]->next = v[size-n+1];
            delete v[size-n];
        }
        
        return head;
        
    }
};