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
    void solve(ListNode* &head,ListNode* cur,ListNode* prev){
        if(cur==NULL){
            head=prev;
            return;
        }
        ListNode* forward=cur->next;
        cur->next=prev;
        return solve(head,forward,cur);
    }
    
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur= head;
        ListNode* prev=NULL;
        solve(head,cur,prev);
        return head;
    }
};