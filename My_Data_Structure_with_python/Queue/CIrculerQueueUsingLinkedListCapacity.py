#Circuler Queue Using Linked List with fixed Capacity
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class CircularQueue:
    def __init__(self, capacity):
        self.capacity = capacity
        self.front = None
        self.rear = None
        self.size = 0

    def enqueue(self, data):
        # Check if the queue is full
        if self.size == self.capacity:
            raise Exception("Queue is full")

        # Create a new node
        node = Node(data)

        # If the queue is empty, set the front and rear to the new node
        if self.size == 0:
            self.front = node
            self.rear = node
        else:
            # Otherwise, set the rear's next node to the new node
            self.rear.next = node
            # And set the rear to the new node
            self.rear = node

        # Increment the size of the queue
        self.size += 1

    def dequeue(self):
        # Check if the queue is empty
        if self.size == 0:
            raise Exception("Queue is empty")

        # Get the data from the front node
        data = self.front.data

        # If the queue only has one element, set the front and rear to None
        if self.size == 1:
            self.front = None
            self.rear = None
        else:
            # Otherwise, set the front to the front node's next node
            self.front = self.front.next

        # Decrement the size of the queue
        self.size -= 1

        return data

    def is_empty(self):
        return self.size == 0

    def is_full(self):
        return self.size == self.capacity

    def display(self):
        if self.is_empty():
            print("Queue is Empty!!")
            return
        cur=self.front
        while cur != None:
            print(cur.data," ",end="")
            cur=cur.next

q=CircularQueue(5)
print(q.is_empty())

q.enqueue(23)
q.enqueue(83)
q.display()