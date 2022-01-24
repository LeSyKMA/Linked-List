#include"linked_list.h"
node* create_node(int data) {
	node* new_node = new node;
	new_node->data = data;
	return new_node;
}
void create_list(list& linked_list) {
	linked_list.head_node = NULL;
	linked_list.tail_node = NULL;
}
void add_node(list&linked_list,node*node) {
	if (linked_list.head_node == NULL) {
		linked_list.head_node = node;
	}
	node->next_ptr = linked_list.head_node;
	linked_list.head_node = node;
}
void show_list(list linked_list) {
	for (node *node = linked_list.head_node;node!=linked_list.tail_node; ++node)
	{
		std::cout << node->data << "----";
	}
}