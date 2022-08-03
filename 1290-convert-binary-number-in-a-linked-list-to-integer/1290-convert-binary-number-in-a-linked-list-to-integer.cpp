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
 /*int btd(int x){
     int temp=0;
     int ans=0;
     int i=0;
     while(x>0){
         temp=x%10;
         ans=ans+temp*pow(2,i);
         i++;
         x/=10;
     }
     return ans;
 }*/
public:
       int getDecimalValue(ListNode* head) {
        int res = 0;
        while (head) {
            res = res * 2 + head->val;
            head = head->next;
        }
        return res;
    }
};