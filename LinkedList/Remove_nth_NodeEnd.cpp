
#include<bits/stdc++.h>
using namespace std;


// Brute Force :

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int cnt = 0;
        struct ListNode *temp = head;
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        temp = head;

        if (cnt == n)
        {
            ListNode *newhead = head->next;
            delete (head);
            return newhead;
        }

        int res = cnt - n;
        for (int i = 1; i < res; i++)
        {
            temp = temp->next;
        }
        struct ListNode *del;
        del = temp->next;
        temp->next = temp->next->next;
        delete (del);
        return head;
    }
};


// Optimal Solution : 

