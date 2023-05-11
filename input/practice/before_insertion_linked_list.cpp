// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;

	// Constructor of Node
	Node(int val, Node* link = 0)
		: data(val), next(link)
	{
	}
};

// Create a head node
Node* head = new Node(5);

// Function prints the linked list
// starting from the given node
void printList(Node* n)
{
	// Till n is not NULL
	while (n != NULL) {

		// Print the data
		cout << n->data << " ";
		n = n->next;
	}
}

// Function to add a node before the
// given node other than head node
Node* addBefore(Node* given_ptr, int val)
{

	// First check if the given pointer
	// is the address of head
	if (head == given_ptr) {

		// Create a new node
		Node* n = new Node(val);

		// Point to next to current head
		n->next = head;

		// Update the head pointer
		head = n;
		return n;
	}

	// Otherwise traverse the list to
	// find previous node of given node
	else {

		Node *p, *n = head;

		// This loop will return p with
		// previous pointer of given node
		for (n, p; n != given_ptr;
			p = n, n = n->next)
			;

		// Create a new node
		Node* m = new Node(val);

		// Update the m->next
		m->next = p->next;

		// Update previous node's next
		p->next = m;

		return m;
	}
}

// Driver Code
int main()
{
	// Head Node
	head->next = new Node(6);

	// Function Call
	addBefore(head->next, 8);

	// Print the linked List
	printList(head);
}
