/*
Linked List Cycle
Given head, the head of a linked list, determine if the linked list has a cycle in it.
Return true if there is a cycle in the linked list. Otherwise, return false.
*/
/*
Example 1:
----------
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
*/
/*
Example 2:
----------
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
*/
/*
Example 3:
----------
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
            return false;
        ListNode *first = head;
        ListNode *second = head;
        while(second && second->next){
            first = first->next;
            second = second->next->next;
            if(first==second)
                return true;
        }
        return false;
    }
};
