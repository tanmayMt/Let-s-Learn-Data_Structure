class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.head = None

    def is_empty(self):
        return self.head is None

    def push(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def pop(self):
        if self.is_empty():  # self.head is None:
            raise ValueError("Stack is Empty!")
        popped_node = self.head
        self.head = self.head.next
        popped_node.next = None
        return popped_node.data

    def peek(self):
        if self.is_empty(): # if self.head is None:
           raise ValueError("Stack is Empty!")
        return self.head.data

    def display(self):
        if self.is_empty():
            print("Stack is empty")
        else:
            current = self.head
            while current:
                print(current.data, end=" ")
                current = current.next
            print()

# Example usage:
stack = Stack()
stack.push(1)
stack.push(2)
stack.push(3)
stack.display()  # Output: 3 2 1
print(stack.peek())  # Output: 3
print(stack.pop())  # Output: 3
stack.display()  # Output: 2 1
print(stack.is_empty())