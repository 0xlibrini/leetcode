
/**
* Source: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
 */

struct				ListNode
{
	int				val;
	struct ListNode	*next;
};

#include <stdlib.h>

struct ListNode	*removeNthFromEnd(struct ListNode *head, int n)
{
	int i = 1;
	struct ListNode *fast = head;
	struct ListNode *slow = head;
	struct ListNode *ptr = head;
	struct ListNode *ptr1 = head;
	int m = 0;
	while (ptr1)
	{
		ptr1 = ptr1->next;
		m++;
	}
	if (m == 1)
		return (NULL);
	if (m == n)
	{
		head = head->next;
		free(ptr1);
		return (head);
	}
	while (i < n)
	{
		fast = fast->next;
		i++;
	}
	while (fast && fast->next)
	{
		fast = fast->next;
		slow = slow->next;
	}
	while (ptr->next != slow)
		ptr = ptr->next;
	ptr->next = slow->next;
	free(slow);
	return (head);
}