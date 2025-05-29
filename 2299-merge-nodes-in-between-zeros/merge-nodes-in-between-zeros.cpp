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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* bat = head;
        int flag = 0;
        int sum = 0;
        ListNode* start;
        while(bat != nullptr){
            if(bat->val == 0 && flag){
                flag = 0;
                start->val = sum;
                start->next = bat->next;
                sum = 0; 
            }
            if(bat->val == 0 && !flag){
                flag = 1;
                start = bat->next;
            }
            if(flag){
                sum += bat->val;
            }
            bat = bat->next;
        }
        return head->next; 
    }
};