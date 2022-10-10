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
		const DList *myList_;
		Node* curr_;
		const_iterator(Node* n, const DList *theList){
			curr_=n;
			myList_ = theList;
		}
	public:
		const_iterator(){
			curr_=nullptr;
			myList_ = nullptr;
		}
		const_iterator& operator++(){
			curr_ = curr_->next_;
			return *this;
		}
		const_iterator operator++(int){
			const_iterator old = *this;
			curr_ = curr->next;
			return old;
		}
		const_iterator& operator--(){
			if (curr_)
			{
				curr_ = curr_->prev_;
			}
			else
			{
				if (myList_)
				{
					curr_ = myList->back_;
				}
			}
		}
		const_iterator operator--(int){
			Node *old = *this;
			if (curr_)
			{
				curr_ = curr +->prev_;
			}
			else
			{
				if (myList_)
				{
					curr_ = myList->back_;
				}
			}
			return old;
		}
		bool operator==(const_iterator rhs){
			bool compares = false;
			if (myList_ == rhs.myList_ && curr_ == rhs.curr_)
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
	private:
		iterator(Node* curr, DList *theList){
			this->curr_ = curr;
			this->myList_ = theList;
		}
	public:
		iterator(){
			this->myList_ = nullptr;
			this->curr_ = nullptr;
		}
		iterator& operator++(){
			this->curr_ = this->curr_->next_;
		}
		iterator operator++(int){
			iterator old = *this;
			this->curr_ = this->curr_->next;
			return old;
		}
		iterator& operator--(){
			if (this->curr_)
			{
				this->curr_ = this->curr_->prev_;
			}
			else
			{
				if (myList_)
				{
					this->curr_ = this->myList->back_;
				}
			}
		}
		iterator operator--(int){
			Node *old = *this;
			if (this->curr_)
			{
				this->curr_ = this->curr_->prev_;
			}
			else
			{
				if (this->myList_)
				{
					this->curr_ = this->myList->back_;
				}
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
		return const_iterator(front_, this);
	}
	iterator begin(){
		return iterator(front_, this);
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
		const Sentinel *myList_;
		Node *curr_;
		const_iterator(Node *n, const Sentinel *theList)
		{
			curr_ = n;
			myList_ = theList;
		}
	public:
		const_iterator(){
			curr_ = nullptr;
			myList_ = nullptr;
		}
		const_iterator& operator++(){
			curr_ = curr_->next_;
			return *this;
		}
		const_iterator operator++(int){
			const_iterator old = *this;
			curr_ = curr->next;
			return old;
		}
		const_iterator& operator--(){
			if (curr_)
			{
				curr_ = curr_->prev_;
			}
			else
			{
				if (myList_)
				{
					curr_ = myList->back_;
				}
			}
		}
		const_iterator operator--(int){
			Node *old = *this;
			if (curr_)
			{
				curr_ = curr +->prev_;
			}
			else
			{
				if (myList_)
				{
					curr_ = myList->back_;
				}
			}
			return old;
		}
		bool operator==(const_iterator rhs){
			bool compares = false;
			if (myList_ == rhs.myList_ && curr_ == rhs.curr_)
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
	private:
		iterator(Node *curr, Sentinel *theList)
		{
			this->curr_ = curr;
			this->myList_ = theList;
		}

	public:
		iterator(){
			this->myList_ = nullptr;
			this->curr_ = nullptr;
		}
		iterator& operator++(){
			this->curr_ = this->curr_->next_;
		}
		iterator operator++(int){
			iterator old = *this;
			this->curr_ = this->curr_->next;
			return old;
		}
		iterator& operator--(){
			if (this->curr_)
			{
				this->curr_ = this->curr_->prev_;
			}
			else
			{
				if (myList_)
				{
					this->curr_ = this->myList->back_;
				}
			}
		}
		iterator operator--(int){
			Node *old = *this;
			if (this->curr_)
			{
				this->curr_ = this->curr_->prev_;
			}
			else
			{
				if (this->myList_)
				{
					this->curr_ = this->myList->back_;
				}
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
		return const_iterator(front_, this);
	}
	iterator begin(){
		return iterator(front_, this);
	}
	const_iterator cend() const{
		return const_iterator(nullptr, this);
	}

	iterator end(){
		return iterator(nullptr, this);
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
