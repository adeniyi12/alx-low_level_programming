#0x13. C - More singly linked lists

### 0. Print list
Write a function that prints all the elements of a listint t list.

Prototype: size t print listint(const listint t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf

### 1. List length
Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);

### 2. Add node
Write a function that adds a new node at the beginning of a listint t list.

Prototype: listint t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
