#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode* reverseList(struct ListNode* head)
{
    if (head == NULL)
    {
        return NULL;
    }
    struct ListNode* Pri = NULL, * cur = head, * NEXT = head->next;

    while (cur)
    {
        cur->next = Pri;
        Pri = cur;
        cur = NEXT;
        if (NEXT)
            NEXT = NEXT->next;

    }
    return Pri;
}