import java.util.Scanner;
class Node
{
    int info;
    Node link;

    Node(int info)
    {
        this.info=info;
        this.link=null;
    }
}
class LinkedList 
{
    Node head;
    LinkedList()
    {
        this.head=null;
    }
    void insert_at_begining(int info)
    {
        Node temp = new Node(info);
        temp.link=this.head;
        this.head=temp;
    }
    void insert_at_end(int info)
    {
        Node temp = new Node(info);
        Node ptr = this.head;
        while(ptr.link != null)
            ptr=ptr.link;
        ptr.link=temp;
    }
    void del_from_beg()
    {
        if (this.head==null)
        {
            System.out.println("Linked is Empty!!");
            return;
        }
        else
        {
            Node temp = this.head;
            this.head=this.head.link;
            temp.link=null;
        }
    }
    void del_from_end()
    {
        if (this.head==null)
        {
            System.out.println("Linked is Empty!!");
            return;
        }
        else
        {
            Node temp = this.head;
            this.head=this.head.link;
            temp.link=null;
        }
    }
    void display()
    {
        if (this.head==null)
        {
            System.out.println("Linked is Empty!!");
            return;
        }
        else
        {
            Node ptr;
            ptr=this.head;
            while(ptr != null)
            {
                System.out.print(ptr.info+"\t");
                ptr=ptr.link;
            }
        }
    }
}

class LinkedList1
{
    public static void main(String[] args)
    {
        int choice,info;
        Scanner sc = new Scanner(System.in);
        LinkedList head = new LinkedList();
        while(true)
        {
            System.out.println();
            System.out.print("Enter your choice: ");
            
            choice=sc.nextInt();
            switch (choice)
            {
                case 2:
                    head.display();
                    break;
                case 3:
                    System.out.print("Enter value which you want to insert: ");
                    info=sc.nextInt();
                    head.insert_at_begining(info);
                    break;
                case 4:
                    System.out.print("Enter value which you want to insert: ");
                    info=sc.nextInt();
                    head.insert_at_end(info);
                    break;
                case 5:
                    // System.out.print("Enter value which you want to insert: ");
                    // info=sc.nextInt();
                    // head.insert_at_end(info);
                    continue;
                case 6:
                    info=head.del_from_beg();
                    System.out.println("Deleted node with data: "+info);
                    break;
                case 7:
                    info=head.del_from_end();
                    System.out.println("Deleted node with data: "+info);
                    break;
                case 8:
                            
                case 0:
                    System.exit(1);
                default:
                    break;
            }
        }
    }
}