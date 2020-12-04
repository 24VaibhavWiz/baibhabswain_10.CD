package assin_4;
import java.util.Scanner;
class node
{
	int info;
	node next;
}

public class program11 {

	@SuppressWarnings("resource")
	public static node create(node start)
	{
		char option;
		node p,q;
		p = new node();
		Scanner sc=new Scanner(System.in);
		System.out.print("enter info");
		p.info = sc.nextInt();
		p.next = null;
		start = p;
		System.out.println("do you want to create morenodes(y/n)");
		option = sc.next().charAt(0);
	        q = p;
		while (option =='y')
		{
			p = new node ();
			System.out.println(" enter info");
			p.info=sc.nextInt();
			p.next = null;
			q.next = p;
			System.out.println("do you want to create morenodes(y/n)");
			option = sc.next().charAt(0);
		}
  		return start;
	}

	public static void display(node start)
	{
		node p;
		if (start == null)
		
			System.out.println("LL is empty");
		else 
		{ 
			p = start;
			while (p != null)
			{ 
				System.out.print(p.info+"-->");
				p = p.next;
			}
		}
	}

	@SuppressWarnings("resource")
	public static node insbeg(node start)
	{
		node p;
		p = new node ();
		Scanner sc = new Scanner(System.in);
		System.out.println("enter info");
		p.info = sc.nextInt();
		p.next = start;
	
		return start = p;
	}

	@SuppressWarnings({ "null", "resource" })
	public static node insend(node start)
	{
		node p,q;
		p = new node();
		q = new node();
		Scanner sc = new Scanner(System.in);
		System.out.println("enter info");
		p.info = sc.nextInt();
		p.next = null;
		q = start;
		while(q != null)
			q = q.next;
		
		q.next = p;
		return start;
	}

	@SuppressWarnings({ "null", "resource" })
	public static node insanypos(node start)
	{
		node p,q;
	
		p = new node();
		q = new node();
		Scanner sc = new Scanner(System.in);
		System.out.println("enter info");
		p.info = sc.nextInt();
		int pos;int count = 0;
		System.out.println("enter position");
		pos = sc.nextInt();
		q = start;
		while(q != null);
		{
			count++;
			q = q.next;
		}
		if(pos >= count++)
		{
			System.out.println("insertion not possible");
		}
		
		else
		{
			if (pos == 1)
			{
				
				p.next = start;
				return start=p;
			}
			
			else if(pos == count++)
			{
				p.next = null;
				while(q != null)
					q = q.next;
					
			}
			
			else
			{
				node p1,p2;
				int i = 0;
				p1 = start;
				while(i<pos)
				{
					p2 = p1;
					p1 = p.next;
					i++;
					p.next = p1;
					p2.next = p;
							
				}
			}
		}
		return start;
	}
				
	public static node deletebeg(node start)
	{
		node p = start;
		if(start == null)
			System.out.println("ll is empty");
						
		else
		{
			start = start.next;
			p.next = null;
			System.out.println("the deleted node is p.info");
		}
		return start;
	}

	public static node delend(node start)
	{
		node p = start;
		if(start==null)
			System.out.println("the deleted node is p.info");
				
		else
		{
			while(p.next.next!=null)
				p = p.next;
			
			System.out.println("the deleted node is p.next.info");
			p.next = null;
		}
		return start;
	}

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int choice;
		node start = null;
		while(true)
		{
			System.out.println("****MENU*****");
			System.out.println("0:Exit");
			System.out.println("1:Creation");
			System.out.println("2:Display");
			System.out.println("3:Insert at beginnig");
			System.out.println("4:Insert at end");
			System.out.println("5:Insert from any position");
			System.out.println("6:Delete at beg");
			System.out.println("7:Delete at end");
			System.out.println("Enter your choice");
			choice=sc.nextInt();
			switch(choice)
			{
				case 0:
				System.exit(0);
				case 1:
				start = create(start);
				break;
				case 2:
				display(start);
				break;
				case 3:
				start = insbeg(start);
				break;
				case 4:
				start = insend(start);
				break;
				case 5:
				start = insanypos(start);
				break;
					case 6:
				start = deletebeg(start);
				break;
				case 7:
				start = delend(start);
				default:
				System.out.println("Wrong choice");
			}
		}
	}
}
