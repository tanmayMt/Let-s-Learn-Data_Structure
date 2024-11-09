# Binary Search Tree
class Node:
    def __init__(self,n):
        self.left=None
        self.data=n
        self.right=None


# insert element
def insert(root,n):
    if root == None:
        root=Node(n)
        return root
    else:
        if root.data == n: # we can't insert duplicate value
            print(f"{n} is already there in the tree")     
            return root
        elif n < root.data:
            root.left=insert(root.left,n)
        else: #n > root.data
            root.right=insert(root.right,n)
    return root

def inorder(root): #L-D-R
    if root.left:
        inorder(root.left)
    print(root.data,end=" ")
    if root.right:
        inorder(root.right)


b=Node(50) #Why this is not working when passing None instand of first element for insert 
b=insert(b,30)
b=insert(b,60)
inorder(b)



