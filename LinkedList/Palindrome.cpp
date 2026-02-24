#include<bits/stdc++.h>
using namespace std;



struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};


struct ListNode *reverseLinkedList(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *newHead = reverseLinkedList(head->next);

    struct ListNode *front = head->next;

    front->next = head;

    head->next = NULL;

    return newHead;
}

class Solution {
   public:
    bool isPalindrome(ListNode *head) {
        struct ListNode *fast;
        struct ListNode *slow;
        slow = fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        struct ListNode *newhead = reverseLinkedList(slow->next);
        struct ListNode *first = head;
        struct ListNode *second = newhead;
        while (second != NULL) {
            if (second->val != first->val) {
                return false;
            }
            second = second->next;
            first = first->next;
        }
        reverseLinkedList(newhead);
        return true;
    }
};