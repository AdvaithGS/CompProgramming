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
    int gcd(int a, int b) {
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // If both numbers are equal
    if (a == b)
        return a;

    // If a is greater
    if (a > b)
      return gcd(a - b, b);


	// If b is greater
    return gcd(a, b - a);
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* bat = head;
        int a = head->val;
        int b = 0;
        while(bat->next != nullptr){
            b =  bat->next->val;
            ListNode* tail = new ListNode(gcd(a,b),bat->next);
            // tail->val = gcd(a,b);
            // tail->next = bat->next;
            bat->next = tail;
            bat = tail->next;
            a = b;
        }
        return head;
    }
};