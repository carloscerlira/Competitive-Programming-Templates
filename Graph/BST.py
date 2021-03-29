class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

    def insert(self, root: TreeNode, x: int):
        if not root: return TreeNode(x)
        def insert(root, x):
            if(root and root.val != x):
                if(root.val < x):
                    root.right = insert(root.right, x)
                else:
                    root.left = insert(root.left, x)
                return root
            else: return TreeNode(x)
            return root
        insert(root, x)
        return root

    def search(u):
        if not u: return None 
        if u.val == val: return u

        if u.val < val: return search(u.right)
        else: return search(u.left)

    def search(self, x):

