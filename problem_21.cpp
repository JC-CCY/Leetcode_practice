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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode();
        ListNode* cur;
        if(list1 == nullptr && list2 == nullptr) return list1;
        else if(list1 == nullptr && list2 != nullptr) return list2;
        else if(list2 == nullptr && list1 != nullptr) return list1;
        if(list1->val < list2->val){
            result->val = list1->val;
            list1 = list1->next;
        }
        else{
            result->val = list2->val;
            list2 = list2->next;
        }
        cur = result;
        while(list1 != nullptr || list2 != nullptr){
            ListNode* temp = new ListNode();
            if(list1 != nullptr && list2 != nullptr){
                if(list1->val < list2->val){
                    temp->val = list1->val;
                    list1 = list1->next;
                    cur->next = temp;
                    cur = cur->next;
                }
                else{
                    temp->val = list2->val;
                    list2 = list2->next;
                    cur->next = temp;
                    cur = cur->next;
                }
            }
            else if(list2 != nullptr){
                temp->val = list2->val;
                list2 = list2->next;
                cur->next = temp;
                cur = cur->next;
            }
            else if(list1 != nullptr){
                temp->val = list1->val;
                list1 = list1->next;
                cur->next = temp;
                cur = cur->next;
            }
        }
        return result;
    }
};
