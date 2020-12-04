import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class IntDLLNode {
	public int info;
	public IntDLLNode next, prev;

	public IntDLLNode(int i) {
		this(i, null, null);
	}

	public IntDLLNode(int i, IntDLLNode n, IntDLLNode p) {
		info = i;
		next = n;
		prev = p;
	}
}

class IntDLList {
	protected IntDLLNode head, tail;

	public IntDLList() {
		head = tail = null;
	}

	public boolean isEmpty() {
		return head == null;
	}

	public void addToHead(int el) {
		if (!isEmpty()) {
			head = new IntDLLNode(el, head, null);
			head.next.prev = head;
		} else
			head = tail = new IntDLLNode(el);
	}

	public void addToTail(int el) {
		if (!isEmpty()) {
			tail = new IntDLLNode(el, null, tail);
			tail.prev.next = tail;
		} else
			head = tail = new IntDLLNode(el);
	}

	public boolean isInList(int el) {
		IntDLLNode temp;
		for (temp = head; temp != null && temp.info != el; temp = temp.next)
			;
		return temp != null;
	}

	public void printAll() {
		for (IntDLLNode temp = head; temp != null; temp = temp.next)
			System.out.print(temp.info + " ");
		System.out.println();
	}

	public int deleteFromHead() {
		int el = head.info;
		if (head == tail)
			head = tail = null;
		else {
			head = head.next;
			head.prev = null;
		}
		return el;
	}

	public int deleteFromTail() {
		int el = tail.info;
		if (head == tail)
			head = tail = null;
		else {
			tail = tail.prev;
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
			head.prev = null;
			return true;
		} else {
			IntDLLNode pred, temp;
			for (pred = head, temp = head.next; temp != null && temp.info != el; pred = pred.next, temp = temp.next)
				;
			if (temp != null) {
				pred.next = temp.next;
				if (temp.next == null)
					;
				else
					temp.next.prev = pred;
				if (temp == tail)
					tail = pred;
				return true;
			}
		}
		return false;
	}

}

public class DoublyLinkedList {
	public static void main(String args[]) throws IOException {
		IntDLList list = new IntDLList();

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
}
