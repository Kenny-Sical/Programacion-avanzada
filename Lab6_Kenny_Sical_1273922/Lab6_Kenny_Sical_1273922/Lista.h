#pragma once
template <typename tipo>
class Lista {
	struct Nodo
	{
		tipo* item;
		Nodo* next;
		//Constructor
		Node(tipo* item) {
			this->item = item;
			this->next = nullptr;
		}
	};
	//Crear cabeza y cola
	Nodo* head;
	Nodo* tail;
	int size = 0;

public:
	int getSize() {
		return this->size;
	}
	bool isEmpty() {
		return this - size == 0;
	}
	void add(tipo* item) {
		Nodo* node = new Nodo(item);
		if (this->isEmpty()) {
			this->head = this->tail->next;
		}
		else
		{
			this->tail->next = node;
			this->tail = this->tail->next;
		}
		this->size++;
	}
	tipo* get(int index) {
		if (index >= this->size || index < 0) {
			return nullptr;
		}
		Nodo* interator = this->head;
		int i = 0;
		while (i < index) {
			interator = interator->next;
			i++
		}
		return interator->item;
	}
	int getPosicion(tipo* value) {
		int count = 0;
		Nodo* temp = this->head;
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
		Nodo* temp = this->head;
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
	void InsertArtStart(tipo* item) {
		Nodo* node = new Nodo(item);
		if (this->isEmpty()) {
			this->head = this->tail = node;
		}
		else
		{
			node->next = this->head;
			this->head = node;
		}

		this->size++;
	}

};