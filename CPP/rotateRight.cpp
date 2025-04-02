/*
Rotate List
Given the head of a linked list, rotate the list to the right by k places.
*/
/*
Example 1:
----------
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
*/
/*
Example 2:
----------
Input: head = [0,1,2], k = 4
Output: [2,0,1]
*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)
            return head;
        ListNode* temp = head;
        int count = 1;
        while(temp->next){
            temp=temp->next;
            count++;
        }
        temp->next=head;
        k=k%count;
        int stepSize=count-k;

        ListNode* tail=head;
        for(int i=0; i<stepSize-1; i++){
            tail=tail->next;
        }
        head=tail->next;
        tail->next=NULL;
        return head;
    }
};
