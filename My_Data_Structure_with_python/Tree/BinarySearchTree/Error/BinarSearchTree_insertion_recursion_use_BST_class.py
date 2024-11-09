# Binary Search Tree
class Node:
    def __init__(self,n):
        self.left=None
        self.data=n
        self.right=None

class BST:
    root=None
# insert element
    def insert(self,n):
        node=Node(n)
        root = node
        if self == None:
            return root
        else:

            if root.data == n: # we can't insert duplicate value
                print(f"{n} is already there in the tree")     
                return root
            if n < root.data:
                root.left.insert(n)
            else: #n > root.data
                root.right.insert(n)
        return root

    def inorder(self): #L-D-R
        root=self
        if root.left:
            root.left.inorder()
        print(root.data,end=" ")
        if root.right:
            root.right.inorder()


b=BST() #Why this is not working when passing None instand of first element for insert 
# b=insert(None,None)
b.insert(30)
b.insert(60)
# b.inorder()



