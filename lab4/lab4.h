#include <iostream>

template <typename T>
class DList{
	struct Node{
		T data_;
		Node* next_;
		Node* prev_;
		Node(const T& data=T{},Node* next=nullptr, Node* prev=nullptr){
			data_=data;
			next_=next;
			prev_=prev;
		}
	};
	Node* front_;
	Node* back_;
public:
	DList(){
		front_=nullptr;
		back_=nullptr;
	}
	void push_front(const T& data);
	~DList();

	class const_iterator{
		friend class DList;
	protected:
		const DList *myList = nullptr;
		Node* curr_;
		const_iterator(Node* n, const DList* dlist){
			curr_=n;
			myList = dlist;
		}
	public:
		const_iterator(){
			curr_=nullptr;
		}
		const_iterator& operator++(){
			curr_ = curr_->next_;
			return *this;
		}
		const_iterator operator++(int){
			const_iterator old = *this;
			curr_ = curr_->next_;
			return old;
		}
		const_iterator& operator--(){
			if (curr_)
			{
				curr_ = curr_->prev_;
			} else {
				curr_ = myList->back_;
			}
			return *this;
		}
		const_iterator operator--(int){
			const_iterator old = *this;
			if (curr_)
			{
				curr_ = curr_->prev_;
			} else {
				curr_ = myList->back_;
			}
			return old;
		}
		bool operator==(const_iterator rhs){
			bool compares = false;
			if (curr_ == rhs.curr_)
			{
				compares = true;
			}
			return compares;
		}
		bool operator!=(const_iterator rhs){
			bool compares = false;
			if(curr_ != rhs.curr_){
				compares = true;
			}
			return compares;
			//return !(*this == rhs);
		}
		const T& operator*()const{
			return curr_->data_;
		}
	};
	class iterator:public const_iterator{
	friend class DList;
	iterator(Node* curr, DList* dlist) : const_iterator(curr, dlist){}
	public:
		iterator() : const_iterator(){}
		iterator& operator++(){
			this->curr_ = this->curr_->next_;
			return *this;
		}
		iterator operator++(int){
			iterator old = *this;
			this->curr_ = this->curr_->next_;
			return old;
		}
		iterator& operator--(){
			if (this->curr_)
			{
				this->curr_ = this->curr_->prev_;
			} else {
				this->curr_ = this->myList->back_;
			}
			return *this;
		}
		iterator operator--(int){
			iterator old = *this;
			if (this->curr_)
			{
				this->curr_ = this->curr_->prev_;
			} else {
				this->curr_ = this->myList->back_;
			}
			return old;
		}
		T& operator*(){
			return this->curr_->data_;
		}
		const T& operator*()const{
			return this->curr_->data_;
		}

	};

	const_iterator cbegin() const{
		if (front_)
		{
			return const_iterator(front_, this);
		}
		return const_iterator();
	}
	iterator begin(){
		if (front_){
			return iterator(front_, this);
		}
		return iterator();
	}
	const_iterator cend() const{
		return const_iterator(nullptr, this);
	}
	iterator end(){
		return iterator(nullptr, this);
	}
};


template <typename T>
void DList<T>::push_front(const T& data)
{
	Node *new_node = new Node(data, front_, nullptr);
	if (front_ != nullptr)
	{
		front_->prev_ = new_node;
	}
	else
	{
		back_ = new_node;
	}
	front_ = new_node;
}

template <typename T>
DList<T>::~DList(){
	Node *current = front_;
	Node *next;

	while (current != nullptr)
	{
		next = current->next_;
		delete current;
		current = next;
	}
}


template <typename T>
class Sentinel{
	struct Node{
		T data_;
		Node* next_;
		Node* prev_;
		Node(const T& data=T{},Node* next=nullptr, Node* prev=nullptr){
			data_=data;
			next_=next;
			prev_=prev;
		}
	};
	Node* front_;
	Node* back_;
public:
	Sentinel(){
		front_=new Node();
		back_=new Node();
		front_->next_=back_;
		back_->prev_=front_;
	}
	void push_front(const T& data);
	~Sentinel();

	class const_iterator{
		friend class Sentinel;
	protected:
		Node *curr_;
		const_iterator(Node *n)
		{
			curr_ = n;
		}
	public:
		const_iterator(){
			curr_ = nullptr;
		}
		const_iterator& operator++(){
			if(curr_ && curr_->next_){
				curr_ = curr_->next_;
			}
			return *this;
		}
		const_iterator operator++(int){
			const_iterator old = *this;
			if(curr_ && curr_->next_){
				curr_ = curr_->next_;
			}
			return old;
		}
		const_iterator& operator--(){
			if (curr_ && curr_->prev_)
			{
				curr_ = curr_->prev_;
			}
			return *this;
		}
		const_iterator operator--(int){
			const_iterator old = *this;
			if (curr_ && curr_->prev_)
			{
				curr_ = curr_->prev_;
			}
			return old;
		}
		bool operator==(const_iterator rhs){
			bool compares = false;
			if (curr_ == rhs.curr_)
			{
				compares = true;
			}
			return compares;
		}
		bool operator!=(const_iterator rhs){
			return !(*this == rhs);
		}
		const T& operator*()const{
			return curr_->data_;
		}
	};
	class iterator:public const_iterator{
	public:
		iterator(Node *n = nullptr)
		{
			this->curr_ = n;
		}
		iterator& operator++(){
			if(this->curr_ && this->curr_->next_){
				this->curr_ = this->curr_->next_;
			}
			return *this;
		}
		iterator operator++(int){
			iterator old = *this;
			if(this->curr_ && this->curr_->next_){
				this->curr_ = this->curr_->next_;
			}
			return old;
		}
		iterator& operator--(){
			if (this->curr_ && this->curr_->prev_)
			{
				this->curr_ = this->curr_->prev_;
			}
			return *this;
		}
		iterator operator--(int){
			iterator old = *this;
			if (this->curr_ && this->curr_->prev_)
			{
				this->curr_ = this->curr_->prev_;
			}
			return old;
		}
		T& operator*(){
			return this->curr_->data_;
		}
		const T& operator*()const{
			return this->curr_->data_;
		}
	};
	const_iterator cbegin() const{
		return const_iterator(front_->next_);
	}
	iterator begin(){
		return iterator(front_->next_);
	}
	const_iterator cend() const{
		if (back_)
		{
			return const_iterator(back_);
		}
		return const_iterator();
	}

	iterator end(){
		if (back_)
		{
			return iterator(back_);
		}
		return iterator();
	}
};


template <typename T>
void Sentinel<T>::push_front(const T& data){
	Node *new_node = new Node(data, front_->next_, front_);
	front_->next_->prev_ = new_node;
	front_->next_ = new_node;
}


template <typename T>
Sentinel<T>::~Sentinel(){
	Node *current = front_;
	Node *next;

	while (current != nullptr)
	{
		next = current->next_;
		delete current;
		current = next;
	}
}
