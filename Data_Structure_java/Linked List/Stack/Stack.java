import java.util.EmptyStackException;

class Node
{
    int data;
    Node link;
    Node(int data)
    {
        this.data=data;
        this.link=null;
    }
}
class Stack
{
    Node head;
    Stack()
    {
        this.head=null;
    }
    public boolean isEmpty()
    {
        return this.head==null;
    }
    public void push(int data)
    {
        Node newNode=new Node(data);
        newNode.link=this.head;
        this.head=newNode;
    }
    public int pop()
    {
        if (isEmpty())
            throw new EmptyStackException();

        int poped_data=this.head.data;
        this.head=this.head.link;
        return poped_data;
    }
    public void display() {
        if (isEmpty()) {
            System.out.println("Stack is empty.");
            return;
        }

        Node current = this.head;
        System.out.print("Stack (top to bottom): ");
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.link;
        }
        System.out.println();
    }
}
class Stack1
{
    public static void main(String[] args) 
    {
        Stack head=new Stack();
        head.push(10);
        head.push(14);
        head.push(60);
        head.push(100);

        int n=head.pop();
        head.display();

    }
}