# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        
        values = []

        current = list1
        while current:
            values.append(current.val)
            current = current.next
        current = list2
        while current:
            values.append(current.val)
            current = current.next
        values.sort()

        if not values:
            return None
        head = ListNode(values[0])
        current = head
        for val in values[1:]:
            new_node = ListNode(val)
            current.next = new_node
            current = new_node
        return head


list1 = ListNode(1)
list1.next = ListNode(3)
list1.next.next = ListNode(5)


list2 = ListNode(2)
list2.next = ListNode(4)
list2.next.next = ListNode(6)

sol = Solution()
merged = sol.mergeTwoLists(list1, list2)

current = merged
while current:
    print(current.val, end=" -> ")
    current = current.next
print("None")
