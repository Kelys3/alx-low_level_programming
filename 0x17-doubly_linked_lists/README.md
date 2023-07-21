# Doubly Linked List

A doubly linked list is a data structure that consists of a sequence of elements, each containing two pointers, one pointing to the next element and another pointing to the previous element. This data structure allows efficient insertion, deletion, and traversal of elements in both directions.

## Features

- Each node in the doubly linked list contains three parts: the data, a pointer to the next node, and a pointer to the previous node.
- Efficiently insert elements at the beginning, end, or at any position within the list.
- Traverse the list in both forward and backward directions.
- Easily delete elements from the list, either by their value or by their position.
- Find elements in the list by value, and optionally find all occurrences.

## Usage
Below is the data structure used for this project
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;


## API
Protoypes of some functions used in this project are listed below
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

## License

This project is part of the ALX SE programme.

## Acknowledgments

This implementation of the doubly linked list was inspired by ALX SE programme andvarious resources and tutorials available online.

__Happy Coding!__
