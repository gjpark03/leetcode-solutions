# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        head_copy = head
        list_size = 0
        while head_copy.next is not None:
            list_size += 1
            head_copy = head_copy.next
        if list_size % 2 == 0:
            list_size /= 2
        else:
            list_size /= 2
            list_size += 1
        for i in range(list_size):
            head = head.next

        return head

        
