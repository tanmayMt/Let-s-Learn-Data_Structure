class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class CircularLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert_at_head(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            new_node.next = self.head
            self.head = new_node
            self.tail.next = self.head

    def insert_at_tail(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node

    def delete_at_head(self):
        if self.head is None:
            return
        else:
            if self.head == self.tail:
                self.head = None
                self.tail = None
            else:
                self.head = self.head.next

    def delete_at_tail(self):
        if self.head is None:
            return
        else:
            if self.head == self.tail:
                self.head = None
                self.tail = None
            else:
                prev_node = self.head
                while prev_node.next != self.tail:
                    prev_node = prev_node.next
                self.tail = prev_node
                prev_node.next = None

    def display(self):
        if self.head is None:
            print("List is empty")
        else:
            curr_node = self.head
            while curr_node is not None:
                print(curr_node.data, end=" ")
                curr_node = curr_node.next