#include"linked_list.h"
int main() {
	list linked_list;
	create_list(linked_list);
	for (size_t i = 0; i < 10; i++)
	{
		//node* new_node = new node();
		add_node(linked_list, create_node(i));
	}
	show_list(linked_list);

	return 0;
}