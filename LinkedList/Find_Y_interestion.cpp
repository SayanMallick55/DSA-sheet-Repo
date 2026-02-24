#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    struct ListNode *collision(struct ListNode *temp1, struct ListNode *temp2, int d)
    {
        while (d > 0)
        {
            d--;
            temp2 = temp2->next;
        }
        while (temp1 != temp2)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        struct ListNode *t1 = headA;
        struct ListNode *t2 = headB;
        int c1 = 0;
        int c2 = 0;
        while (t1 != NULL)
        {
            c1++;
            t1 = t1->next;
        }
        while (t2 != NULL)
        {
            c2++;
            t2 = t2->next;
        }
        t1 = headA;
        t2 = headB;
        if (c1 > c2)
        {
            return collision(t2, t1, c1 - c2);
        }
        else
        {
            return collision(t1, t2, c2 - c1);
        }
    }
};
