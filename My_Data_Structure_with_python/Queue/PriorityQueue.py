#Priority Queue
class Node:
    def __init__(self, data, priority):
        self.data = data
        self.priority = priority
        self.next = None

class PriorityQueue:
    def __init__(self):
        self.head = None

    def enqueue(self, data, priority):
        new_node = Node(data, priority)
        if self.head is None:
            self.head = new_node
        else:
            cur = self.head
            while cur is not None and cur.priority < priority:
                prev = cur
                cur = cur.next

            if cur is None:
                prev.next = new_node
            else:
                new_node.next = cur
                prev.next = new_node

    def dequeue(self):
        if self.head is None:
            return None
        else:
            data = self.head.data
            self.head = self.head.next
            return data

    def peek(self):
        if self.head is None:
            return None
        else:
            return self.head.data

    def is_empty(self):
        return self.head is None

    def display(self):
        if self.head is None:
            print("Queue is empty")
        else:
            cur = self.head
            while cur is not None:
                print(cur.data, end=" ")
                cur = cur.next

p=PriorityQueue()
p.enqueue(10,1)
p.enqueue(20,3)
p.enqueue(30,2)
p.enqueue(40,7)
p.enqueue(50,4)
p.display()