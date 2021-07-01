//DIFFICULTY :- Medium
//LINK :- https://leetcode.com/problems/swap-nodes-in-pairs/
/*
Problem Statement :-
Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

 

Example 1:

Input: head = [1,2,3,4]
Output: [2,1,4,3]

Example 2:

Input: head = []
Output: []

Example 3:

Input: head = [1]
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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next == NULL)
            return head;
        ListNode * x = head;
        ListNode * y = head->next;
        head = y;
        while(true)
        {
            ListNode * temp = y->next;
            y->next = x;
            if(temp==NULL or temp->next==NULL)
            {
                x->next=temp;
                break;
            }
            x->next = temp->next;
            x = temp;
            y = x->next;
            
        }
        return head;
    }
};
