
#include <bits/stdc++.h>
using namespace std;

// Brute Force

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
    ListNode *sortList(ListNode *head)
    {
        vector<int> arr;
        struct ListNode *temp = head;
        while (temp != NULL)
        {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        sort(arr.begin(), arr.end());
        int i = 0;
        temp = head;
        while (temp != NULL)
        {
            temp->val = arr[i];
            temp = temp->next;
            i++;
        }
        return head;
    }
};


// Optimal :

