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
        if root.data == n:
            print(f"{n} is already there in the tree")     
            return root
        elif n < root.data:
            root.left=insert(root.left,n)
        else: #n > root.data
            root.right=insert(root.right,n)
    return root

#inorder traversal
def inorder(root): #L-D-R
    if root.left:
        inorder(root.left)
    print(root.data,end=" ")
    if root.right:
        inorder(root.right)

#Searching
def search(root,key):
    if root == None:
        return root
    else:
        while root != None:
           if root.data==key:
               return root
           elif key < root.data:
                return search(root.left,key)
           elif key > root.data:
                return search(root.right,key)
           else:
                return None

b=Node(50)
b=insert(b,20)
b=insert(b,70)
inorder(b)

#Searching
key=int(input("Enter the item we want search: "))
s=search(b,key)
# if s == b:
#     print("BST is Empty!!")
if s == None:
    print(f"\n{key} is no there in the BST.")
else:
    print(f"\n{key} is there in the BST (location: {s})")