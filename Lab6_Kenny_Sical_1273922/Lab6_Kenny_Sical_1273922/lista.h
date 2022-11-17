#pragma once
template <typename T>
class Lista {

	//Creo una estructura Node
	struct Node
	{
		T* item;
		Node* next;
		Node(T* item) { //Contructor
			this->item = item;
			this->next = nullptr;
		}
	};
	Node* head; //Creo un nodo cabeza y uno cola
	Node* tail;
	int size = 0;

public:
	int getSize() {
		return this->size;
	}
	bool isEmpty() {
		return this->size == 0;
	}
	void add(T* item) {
		Node* node = new Node(item);
		if (this->isEmpty()) {
			this->head = this->tail = node;
		}
		else {
			this->tail->next = node;
			this->tail = this->tail->next;
		}
		this->size++;
	}
	T* get(int index) {
		if (index >= this->size || index < 0) {
			return nullptr;
		}
		Node* iterator = this->head;
		int i = 0;
		while (i < index) {
			iterator = iterator->next;
			i++;
		}
		return iterator->item;
	}
	int getPosicion(T* value) {
		int count = 0;
		Node* temp = this->head;
		while (temp != nullptr) {
			if (temp->item = value) {
				return count;
			}
			count++;
		}
		return -1;
	}
	void clear() {
		this->head = nullptr;
		this->tail = nullptr;
		this->size = 0;
	}
	void RemoveAt(int index) {
		Node* temp = this->head;
		int count = 0;
		while (temp != nullptr) {
			if (index == 0) {
				this->head = temp->next;
				break;
			}
			if (index > 0 && count == (index - 1)) {
				temp->next = temp->next->next;
			}
			count++;
			temp = temp->next;
		}
		this->size--;
	}
	void InsertAtStart(T* item) {
		Node* node = new Node(item);
		if (this->isEmpty()) {
			this->head = this->tail = node;
		}
		else {
			node->next = this->head;
			this->head = node;
		}
		this->size++;
	}
};