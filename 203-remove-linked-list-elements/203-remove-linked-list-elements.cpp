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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* cur;
        ListNode* prev;
        
        if(head==NULL)
            return head;
        
        else if(head->next==NULL){
            if(head->val!=val)
                return head;
            
            else{
               head=NULL;
                return head;
            }
 
        }
        
        
        else{
            if(head->val==val){
                cur=head->next;
                head->next=NULL;
                head=cur;
            }
            
            cur=head;
            prev=NULL;
            
            while(cur!=NULL){
                if(cur->val==val && prev==NULL){
                    cur=head->next;
                    head->next=NULL;
                    head=cur;
                }
                
                else if(cur->val==val && prev!=NULL){
                    prev->next=cur->next;
                    cur=cur->next;
                }
                else{
                    prev=cur;
                    cur=cur->next;
                }
                
            }
            return head;
        }
        
        
    }
};