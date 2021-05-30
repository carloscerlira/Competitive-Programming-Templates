class LLNode:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next

def get_len(head):
    l, curr = 0, head
    while curr:
        curr = curr.next
        l += 1
    return l

def get_kth(head, k):
    i, curr = 0, head
    while i < k:
        curr = curr.next
        i += 1
    return curr

def reverse(head):
    prev, curr = None, head
    while curr:
        next = curr.next
        curr.next = prev
        prev = curr
        curr = next
    return prev