/*
Partition List
Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
You should preserve the original relative order of the nodes in each of the two partitions.
*/
/*
Example 1:
----------
Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]
*/
/*
Example 2:
----------
Input: head = [2,1], x = 2
Output: [1,2]
*/

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> less, more;
        ListNode* temp=head;
        if(!head || !head->next)
            return head;
        while(temp){
            if(temp->val<x)
                less.push_back(temp->val);
            else
                more.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        for(int i=0; i<less.size(); i++){
            temp->val=less[i];
            temp=temp->next;
        }
        for(int i=0; i<more.size(); i++){
            temp->val=more[i];
            temp=temp->next;
        }
        return head;
    }
};
