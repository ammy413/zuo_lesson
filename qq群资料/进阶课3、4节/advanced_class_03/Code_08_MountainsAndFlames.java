package advanced_class_03;

// 山峰和哨岗问题
public class Code_08_MountainsAndFlames {

	public static class Node {
		public int value;
		public Node next;

		public Node(int value) {
			this.value = value;
		}
	}

	public static int communications(int[] arr) {
		if (arr == null || arr.length == 0 || arr.length == 1) {
			return 0;
		}
		if (arr.length == 2) {
			return 1;
		}
		Node head = new Node(arr[0]);
		Node pre = head;
		for (int i = 1; i < arr.length; i++) {
			Node cur = new Node(arr[i]);
			pre.next = cur;
			pre = cur;
		}
		pre.next = head;
		int res = count(head);
		Node cur = head.next;
		while (cur != head) {
			res += count(cur);
			cur = cur.next;
		}
		return res;
	}

	public static int count(Node node) {
		int max = Integer.MIN_VALUE;
		Node cur = node.next;
		int res = 1;
		while (cur != node) {
			if (cur.next != node && node.next != cur) {
				if (Math.min(node.value, cur.value) >= max) {
					res++;
				}
			}
			max = Math.max(cur.value, max);
			cur = cur.next;
		}
		System.out.println(node.value + "," + res);
		return res;
	}

	// 如果arr中一定没有重复的值
	public static int communications1(int[] arr) {
		if (arr == null || arr.length < 2) {
			return 0;
		}
		return arr.length * 2 - 3;
	}

	// 如果arr中可能有重复的值
	public static int communications2(int[] arr) {

		return 0;
	}

	public static void main(String[] args) {
		// Node head = new Node(1);
		// head.next = new Node(2);
		// head.next.next = new Node(4);
		// head.next.next.next = new Node(5);
		// head.next.next.next.next = new Node(3);
		// head.next.next.next.next.next = head;
		// System.out.println(count(head));

		int[] arr = { 9, 3, 4, 2, 8, 5, 6, 1 };

		System.out.println(communications1(arr));

		// System.out.println(communications(arr));

	}

}
