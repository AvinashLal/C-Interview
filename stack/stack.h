#include <vector>
#include <string>

/*
//Description from std stack 

Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out), 
	where elements are inserted and extracted only from one end of the container.
Stacks are implemented as container adaptors, which are classes that use an encapsulated object of a specific 
	container class as its underlying container, providing a specific set of member functions to access its elements. 
Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.
The underlying container may be any of the standard container class templates or some other specifically designed 
	container class. The container shall support the following operations:

	empty
	size
	back
	push_back
	pop_back

*/

//implemented as a singly linked list  with templated parameters with support for the above functions
//pulling from single list implementation above 

class stack {
public:

	stack();
	void empty();
	void size();
	void back();
	void push_back();
	void pop_back();

private:


};