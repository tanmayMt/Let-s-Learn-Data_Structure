class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_end(self, data):
        new_node = Node(data)
        if self.head == None:
            self.head = new_node
        else:
            cur = self.head
            while cur.next != None:
                cur = cur.next
            cur.next = new_node
    def insert_at_beg(self,data):
        new_node=Node(data)
        temp=self.head
        self.head=new_node
        self.head.next=temp
        '''
        newNode=Node(data)
        newNode.next=self.head
        self.head=newNode
        '''
        
    def display(self):
        if self.head is None:
            print("Linked list is empty")
        else:
            cur = self.head
            while cur != None:
                print(cur.data, end=" ")
                cur = cur.next
            print()

    def del_from_end(self):
        if self.head == None:
            print("Linked list is empty")
            # return  
        elif self.head.next == None: # if one node is there
            del(self.head)
            self.head = None 
            # return
        else:
            prev = None
            cur = self.head
            while cur.next != None:
                prev = cur
                cur = cur.next
            del(cur)
            prev.next = None
               
    def del_from_beg(self):
        if self.head == None:
            print("Linked list is Empty!")
        else:
            cur=self.head
            self.head=self.head.next
            del(cur)

    def del_from_pos(self,pos):
        if self.head == None :
            print("Linked list is empty")
        if self.head:
            if (pos == 1):
                cur=self.head
                self.head=self.head.next
                del(cur)
            else:
                prev=None
                cur=self.head
                for i in range(1,pos):
                    prev=cur
                    cur=cur.next
                prev.next=cur.next
                del(cur)
    def reverse(self):
        if self.head==None:
            print("Empty Linked List")
        else:
            prv=None
            cur=self.head
            next=cur.next
            while cur != None:
                next=cur.next
                cur.next=prv
                prv=cur
                cur=next
            self.head=prv
                


linked_list = LinkedList()
linked_list.insert_at_end(10)
linked_list.insert_at_end(20)
linked_list.insert_at_end(30)
linked_list.display()

linked_list.insert_at_beg(300)
linked_list.display()

# linked_list.insert_at_end(40)
# linked_list.display()

# linked_list.del_from_end()
# linked_list.del_from_beg()
# linked_list.display()

linked_list.del_from_pos(1)
linked_list.display()

# linked_list.reverse()
# linked_list.display()