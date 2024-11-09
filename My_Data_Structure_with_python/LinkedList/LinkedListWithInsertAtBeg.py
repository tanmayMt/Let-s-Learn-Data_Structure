class Node:
    def __init__(self,info):
        self.info=info
        self.next=None

class LinkedList:
    def __init__(self):
        self.head=None

    def add_end(self,data):
        newNode=Node(data)
        if self.head == None:
            self.head=newNode
        else:
            cur=self.head
            while(cur.next != None):
                cur=cur.next
            cur.next=newNode
    def add_beg(self,data):
        newNode=Node(data)
        newNode.next=self.head
        self.head=newNode

    def del_end(self):
        if self.head==None:
            print("Linked List is Empty!!")
        else:
            prev=None
            cur=self.head
            while(cur.next!=None):
                prev=cur
                cur=cur.next
            del(cur)
            if prev == None:
                self.head=None
                return
            prev.next=None
            
    def del_beg(self):
        if self.head == None:
            print("Linked list is Empty!!")
        else:
            ptr=self.head
            self.head=self.head.next
            del(ptr)
    def add_at_pos(self,data,pos):
        new_node=Node(data)
        if pos == 1:
            new_node.next=self.head
            self.head=new_node
        else:
            cur=self.head
            while range(2,pos):
                cur=cur.next
            # if cur == None:
            #     cur.next=new_node
            new_node.next=cur.next
            cur.next=new_node
    # def add_at_pos(self,data,pos):
    #     new_node=Node(data)
    #     if pos == 1:
    #         new_node.next=self.head
    #         self.head=new_node
    #     else:
    #         prev=None
    #         cur=self.head
    #         while range(2,pos):
    #             prev=cur
    #             cur=cur.next
    #         if cur == None:
    #             cur.next=new_node
    #         prev.next=new_node
    #         new_node.next=cur
            
    def display(self):
        cur=self.head
        while(cur!=None):
            print(cur.info,end=" ")
            cur=cur.next
        print()
        
   

l=LinkedList()
l.add_end(10)
l.add_end(20)
l.add_end(30)
l.display()

l.add_beg(300)
l.display()

# l.del_end()
# l.del_end()
# l.display()

# l.del_beg()
# l.del_beg()
# l.display()

l.add_at_pos(990,3)
l.display()
