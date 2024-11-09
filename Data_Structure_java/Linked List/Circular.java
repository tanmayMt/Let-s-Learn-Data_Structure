import java.util.Scanner;
class Node 
{
    int data;
    Node next;

    Node(int data) 
    {
        this.data = data;
        this.next = null;
    }
}


class Circular 
{
    Node head;
    Node tail;

    Circular() 
    {
        head = null;
        tail = null;
    }

    boolean isEmpty() 
    {
        return head == null;
    }

    void insert_at_end(int data) 
    {
        Node newNode = new Node(data);
        if(head == null) 
        {
            head = newNode;
            tail = newNode;
            newNode.next = head; // Make the node point to itself since it's the only node in the list
        } 
        else 
        {
            tail.next = newNode;
            tail = newNode;
            tail.next = head; // Make the last node point to the head to maintain circularity
        }
    }

    // Method to display the elements of the circular linked list
    void display() 
    {
        if (head == null)
        {
            System.out.println("Circular Linked List is empty.");
            return;
        }
        Node current = head;
        do 
        {
            System.out.print(current.data + " ");
            current = current.next;
        }
        while (current != head);
        System.out.println();
    }

    public static void main(String[] args) {
        Circular cll = new Circular();

        cll.insert_at_end(17);
        cll.insert_at_end(23);
        cll.insert_at_end(32);

        // Displaying the circular linked list
        cll.display();
    }
}

