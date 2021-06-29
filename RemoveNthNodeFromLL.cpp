//DIFFICULTY :- Medium
//LINK :- https://leetcode.com/problems/remove-nth-node-from-end-of-list/
/*
Problem Statement :-
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:

Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:

Input: head = [1], n = 1
Output: []

Example 3:

Input: head = [1,2], n = 1
Output: [1]

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head , *fast = head;
        int i = 0 ; 
        if(head == NULL)    return NULL;
        else if(head->next == NULL && n==1)    return NULL;
        else if(head->next->next == NULL and n==1)  { head->next = NULL ; return head;}
        else if(head->next->next == NULL and n==1)  { return head->next;}
        else{
        while(i<n)
        {
            fast = fast->next;
            i++;
        }
         if(fast == NULL){
            return head->next;
        }
        while(fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
        
        }
    }
