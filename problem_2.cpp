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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans=new ListNode();
        ListNode *temp=ans;
        int q=0;
        while(l1!=NULL || l2!=NULL || q!=0){
            int sum,r;
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            sum = q + x + y;
            r=sum%10;
            temp->next=new ListNode(r);
            q=sum/10;
            temp=temp->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return ans->next;
    }
};
