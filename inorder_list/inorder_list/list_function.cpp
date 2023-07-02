void insertinorder(elementtype& elem)
{
	node* addednode = new node;
	assert(addednode);
	addednode->elem = elem;
	if (head == 0 || head->elem > addednode->elem)
	{
		addednode->next = head;
		head = addednode;
	}
	else
	{
		node* pred = head;
		while (pred->next != 0 && pred->next->item < addednode->elem)
		{
			pred = pred->next;
		}
		addednode->next = pred->next;
		pred->next = addednode;
	}
}