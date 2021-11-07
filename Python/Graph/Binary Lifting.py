class TreeAncestor:
    step = 16
    def __init__(self, n: int, A):
        A = dict(enumerate(A))
        jump = [A]
        for s in range(self.step):
            B = {}
            for i in A:
                if A[i] in A:
                    B[i] = A[A[i]]
            jump.append(B)
            A = B
        self.jump = jump

    def get_ancestor(self, node: int, k: int) -> int:
        step = self.step
        for i in range(step):
            if k & (1 << i):
                node = self.jump[i].get(node, -1)
        return node

