import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class IntSLLNode {
	public int info;
	public IntSLLNode next;

	public IntSLLNode(int i) {
		this(i, null);
	}

	public IntSLLNode(int i, IntSLLNode n) {
		info = i;
		next = n;
	}
}

class IntSLList {
	protected IntSLLNode head, tail;

	public IntSLList() {
		head = tail = null;
	}

	public boolean isEmpty() {
		return head == null;
	}

	public void addToHead(int el) {
		head = new IntSLLNode(el, head);
		if (tail == null)
			tail = head;
	}

	public void addToTail(int el) {
		if (!isEmpty()) {
			tail.next = new IntSLLNode(el);
			tail = tail.next;
		} else
			head = tail = new IntSLLNode(el);
	}

	public boolean isInList(int el) {
		IntSLLNode temp;
		for (temp = head; temp != null && temp.info != el; temp = temp.next)
			;
		return temp != null;
	}

	public void printAll() {
		for (IntSLLNode temp = head; temp != null; temp = temp.next)
			System.out.print(temp.info + " ");
		System.out.println();
	}

	public int deleteFromHead() {
		int el = head.info;
		if (head == tail)
			head = tail = null;
		else
			head = head.next;
		return el;
	}

	public int deleteFromTail() {
		int el = tail.info;
		if (head == tail)
			head = tail = null;
		else {
			IntSLLNode temp;
			for (temp = head; temp.next != tail; temp = temp.next)
				;
			tail = temp;
			tail.next = null;
		}
		return el;
	}

	public boolean delete(int el) {
		if (head == tail && el == head.info) {
			head = tail = null;
			return true;
		} else if (el == head.info) {
			head = head.next;
			return true;
		} else {
			IntSLLNode pred, temp;
			for (pred = head, temp = head.next; temp != null && temp.info != el; pred = pred.next, temp = temp.next)
				;
			if (temp != null) {
				pred.next = temp.next;
				if (temp == tail)
					tail = pred;
				return true;
			}
		}
		return false;
	}
}

public class SinglyLinkedList {
	public static void main(String args[]) throws IOException {
		IntSLList list = new IntSLList();

		int choice;
		int el;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		do {
			System.out.println("Enter your choice:");
			System.out
					.println("1.ADD \t2.DELETE \t3.PRINT ALL \t4.SEARCH \t5.EXIT");
			choice = Integer.parseInt(br.readLine());
			switch (choice) {
			case 1:
				System.out.println("\t\tEnter your choice:");
				System.out.println("\t\t1.ADD TO HEAD \t2.ADD TO TAIL");
				System.out.print("\t\t");
				choice = Integer.parseInt(br.readLine());
				switch (choice) {
				case 1:
					System.out.println("\t\tEnter an element");
					System.out.print("\t\t");
					el = Integer.parseInt(br.readLine());
					list.addToHead(el);
					break;
				case 2:
					System.out.println("\t\tEnter an element");
					System.out.print("\t\t");
					el = Integer.parseInt(br.readLine());
					list.addToTail(el);
					break;
				default:
					System.out
							.println("\t\tInvalid argument,return to main menu");
					break;
				}
				break;
			case 2:
				if (list.isEmpty())
					System.out.println("\t\tList is empty");
				else {
					System.out.println("\t\tEnter your choice:");
					System.out
							.println("\t\t1.DELETE FROM HEAD \t2.DELETE FROM TAIL \t3.DELETE A PARTICULAR ELEMENT");
					System.out.print("\t\t");
					choice = Integer.parseInt(br.readLine());
					switch (choice) {
					case 1:
						el = list.deleteFromHead();
						System.out.println("\t\tElement deleted is:" + el);
						break;
					case 2:
						el = list.deleteFromTail();
						System.out.println("\t\tElement deleted is:" + el);
						break;
					case 3:
						System.out.println("\t\tEnter an element");
						System.out.print("\t\t");
						el = Integer.parseInt(br.readLine());
						if (list.delete(el))
							System.out.println("\t\tElement is deleted");
						else
							System.out.println("\t\tNot found");
						break;
					default:
						System.out
								.println("\t\tInvalid argument,return to main menu");
						break;
					}
				}
				break;
			case 3:
				if (list.isEmpty())
					System.out.println("\t\tList is empty");
				else {
					System.out.println("\t\tElements in the list are:");
					System.out.print("\t\t");
					list.printAll();
				}
				break;
			case 4:
				if (list.isEmpty())
					System.out.println("\t\tList is empty");
				else {
					System.out.println("\t\tEnter your choice:");
					System.out.print("\t\t");
					el = Integer.parseInt(br.readLine());
					if (list.isInList(el))
						System.out.println("\t\tElement is present");
					else
						System.out.println("\t\tElement is not present");
				}
				break;
			case 5:
				break;
			}
		} while (choice != 5);
	}
