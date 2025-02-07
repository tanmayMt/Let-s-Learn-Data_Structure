class Node:
    left = None
    val = 0
    right = None

    def __init__(self, val):
        self.val = val

class BST:
    root = None

    # Function to insert a key in the BST
    def insert(self, key):
        node = Node(key)
        if (self.root == None):
            self.root = node
            return self.root
        prev = None
        temp = self.root
        while (temp != None):
            if (temp.val > key):
                prev = temp
                temp = temp.left
            elif(temp.val < key):
                prev = temp
                temp = temp.right
        if (prev.val > key):
            prev.left = node
        else:
            prev.right = node

    # Function to print the inorder traversal of BST
    def inorder(self):
        temp = self.root
        stack = []
        while (temp != None or not (len(stack) == 0)):
            if (temp != None):
                stack.append(temp)
                temp = temp.left
            else:
                temp = stack.pop()
                print(str(temp.val) + " ", end ="")
                temp = temp.right

tree = BST()

tree.insert(30)
tree.insert(50)
tree.insert(15)
tree.insert(20)
tree.insert(10)
tree.insert(40)
tree.insert(60)
tree.inorder()