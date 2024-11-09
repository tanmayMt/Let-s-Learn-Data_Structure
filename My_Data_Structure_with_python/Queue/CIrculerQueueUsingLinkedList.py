class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Queue:
    def __init__(self):
        self.front=None
        self.rear=None
    def enqueue(self,data):
        new_node=Node(data)
        if self.isEmpty():
            self.front=new_node
            self.rear=new_node
            
        else:
            self.rear.next=new_node
            self.rear=new_node

    def dequeue(self):
        if self.isEmpty():
            return None
        data = self.front.data

        if self.front == self.rear:  # If Only one node is there in the Queue.In this case, both self.front and self.rear pointing to single node
            del(self.front)
            self.front = None
            self.rear = None
        else:
            self.front = self.front.next
        return data

    def displayItem(self):
        if self.isEmpty():
            print("Queue is Empty!!")
            return
        cur=self.front
        while cur != None:
            print(cur.data," ",end="")
            cur=cur.next

    def isEmpty(self):
        return self.front is None
    
    def peek(self):
        if self.isEmpty():
            return None
        return self.front.data
    
q=Queue()
print(q.isEmpty())

q.enqueue(23)
q.enqueue(83)
q.displayItem()

q.dequeue()
q.displayItem()
print("\n","q.peek(): ",q.peek())