//DIFFICULTY :- Easy
//LINK :- https://leetcode.com/problems/merge-two-sorted-lists/
/*
Problem Statement :-
Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

 

Example 1:

Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:

Input: l1 = [], l2 = []
Output: []

Example 3:

Input: l1 = [], l2 = [0]
Output: [0]

*/
//CODE :-

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;
        else if(l2==NULL)
            return l1;
        else if(l1==NULL and l2 == NULL)
            return NULL;
        else{
            ListNode *head = new ListNode(0);
            ListNode *curr1 , *curr2 ;
            ListNode *xt = head;
            //xt = head;
            //curr = ptr;
            curr1 = l1 ;
            curr2 = l2;
            while(curr1 != NULL and curr2 != NULL)
            {
                if(curr1->val >= curr2->val){
                    head->next = curr2;
                    curr2 = curr2->next;
                    head = head->next;
                }else
                {
                    head->next = curr1;
                    curr1 = curr1->next;
                    head = head->next;
                }
            }
            while(curr1)
            {
                head->next =  curr1;
                head = head->next;
                curr1 = curr1->next;
            }
            while(curr2)
            {
                head->next =  curr2;
                head = head->next;
                curr2 = curr2->next;
            }
            return xt->next  ;
        }
       
    }
};
