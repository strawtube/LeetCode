/*
Merge Two Sorted Lists
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.
*/
/*
Example 1:
----------
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
*/
/*
Example 2:
----------
Input: list1 = [], list2 = []
Output: []
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode fakeHead(0);
        ListNode* curr = &fakeHead;
        while(list1&&list2){
            if(list1->val<list2->val){
                curr->next = list1;
                list1 = list1->next;
            }
            else{
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        curr->next = list1?list1:list2;
        return fakeHead.next;
    }
};
