# Single Queue using List

class Queue:
    def __init__(self):
        self.queue=[]

    def enqueue(self,item):
        self.queue.append(item)

    def dequeue(self):
        if self.isEmpty():
            print("Queue Under Flow!!")
        self.queue.pop()

    def isEmpty(self):
        return len(self.queue) == 0
    
    def size(self):
        return len(self.queue)
    
    def display_item(self):
        if self.isEmpty():
            print("Queue is Empty!!")
        print(self.queue)
    
    

q=Queue()
q.enqueue(10)
q.enqueue(20)
q.enqueue(30)
q.enqueue(40)
q.enqueue(50)

q.dequeue()
q.dequeue()

q.display_item()
size=q.size()
print("Size of Queue: ",size)