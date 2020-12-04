package assin_5;
import java.util.*;
class Node
{
	protected int regd_no;
	protected float marks;
	protected Node next;
	protected Node prev;
}
public class double_link {
	public static Node create(Node start)
	{
		Scanner sc=new Scanner (System.in);
		Node p = new Node ();
		System.out.println("please input regd.no and marks");
	    p.regd_no=sc.nextInt();
	    p.marks=sc.nextFloat();
	    p.next=p.prev= null;
	    start=p;
	    System.out.println("do u want to input more (1 or 0)");
	    int opt = sc.nextInt();
	    while(opt==1)
	    {
	    	Node q= new Node ();
	    	System.out.println("please input regd_no. and marks");
	    	q.regd_no=sc.nextInt();
	    	q.marks=sc.nextFloat();
	    	q.next=q.prev=null;
	    	p.next=q;
	    	q.prev=p;
	    	System.out.println("do u want to input more (1 or 0)");
	    	opt=sc.nextInt();
	    }
	    return start;
	    }
	public static void display(Node start)
	{  Node p;
		
		if(start==null){
			System.out.println("empty linked list");
		}
		else{
		    p=start;
		while(p!=null)
		{
			System.out.println(p.prev+" "+p.regd_no+" "+p.marks+" "+p.next);
			p=p.next;
		}
		   }
	}
	public static Node ins_Beg(Node start,Node end)
	{
		Node p=new Node();
		Scanner sc=new Scanner(System.in);
		System.out.println("please input regd_no. and marks");
		p.regd_no=sc.nextInt();
		p.marks=sc.nextFloat();
		p.next=p.prev=null;
		if(start==null)
		{
			start=end=p;
		}
		else
		{
			p.next=start;
			start.prev=p;
			p.prev=null;
			start=p;
		}
		return start;
	}
	public static Node ins_End(Node start,Node end)
	{
		Node p=new Node();
		Scanner sc=new Scanner(System.in);
		System.out.println("please input regd_no. and marks");
		p.regd_no=sc.nextInt();
		p.marks=sc.nextFloat();
		p.next=p.prev=null;
		if(start==null)
		{
			start=end=p;
		}
		else
		{   
			
		    end.next=p;
		    p.prev=end;
			p.next=null;
			end=p;
		}
		return start;
	}
    public static Node ins_Any(Node start,Node end)
    {   Node p=new Node();
    	Scanner sc=new Scanner (System.in);
    	System.out.println("please input location");
    	int c=count(start);
    	int loc=sc.nextInt();
    	if(start!=null)
    	if(loc>=1&&loc<=c+1)
    	{    	  
    		Node q=start;
    		System.out.println("please input regd.no and marks");
            p.regd_no=sc.nextInt();
            p.marks=sc.nextFloat();
            if(loc==1)
            {
            	p.next=start;
    			start.prev=p;
    			p.prev=null;
    			start=p;
    		}
            else
            {   
            	p.next=q.next;
            	q.next.prev=p;
            	q.next=p;
            	p.prev=p;
            }
    	}
    	else
    	{
    		start=end=p;
    	}
    	return start;
    }
	private static int count(Node start) {
		Node p=start;
		int count=0;
		while(p!=null)
		{
			count++;
			p=p.next;
		}
		return 0;
	}
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		int choice;
		Node start = null;
			while(true)
			{
			System.out.println("Linked_List options");	
			System.out.println("Please choose one");
			System.out.println("0:-Exit");
			System.out.println("1:-Create");
			System.out.println("2:-Display");
			System.out.println("3:-Inser at beginning");
			System.out.println("4:-Inser at end");
			System.out.println("5-Inser at any position");
			choice=sc.nextInt();
			switch(choice)
			{
			case 0:
				System.exit(0);
			case 1:
				start=create(start);
				break;
			case 2:
				display(start);
				break;
			case 3:
				start=ins_Beg(start, null);
				break;
			case 4:
				start=ins_End(start, null);
				break;
			case 5:
				start=ins_Any(start, null);
				break;
			default:
				System.out.println("Wrong choice");
	}
	}
		}
	}

