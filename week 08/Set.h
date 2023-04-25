#pragma once

template <typename T>
class Set
{
public:

	Set(size_t _capacity = 16);
	~Set();
	Set(const Set<T>& other);
	Set<T>& operator=(const Set<T>& other);

	bool add(const T& element);
	bool isEmpty();
	void print(
	bool contains(const T& element);

	

private:
	T* set;
	size_t capacity;
	size_t size;

};

template<typename T>
Set<T>& operator+(Set<T> lhs, Set<T> rhs)
{

}

template<typename T>
Set<T>& operator<(Set<T> lhs, Set<T> rhs)
{

}

template<typename T>
inline Set<T>::Set(size_t _capacity)
{
	set = new T[_capacity];
	capacity = _capacity;
	size = 0;
}

template<typename T>
inline Set<T>::~Set()
{
	delete[] set;
	capacity = 0;
	size = 0;
	set = nullptr;
}

template<typename T>
inline Set<T>::Set(const Set<T>& other)
{
	set = new T[other.capacity];
	for (size_t i = 0; i < size; i++)
	{
		set[i] = other.set[i];
	}
	capacity = other.capacity;
	size = other.size;

}

template<typename T>
inline Set<T>& Set<T>::operator=(const Set<T>& other)
{
	if (this!=*other)
	{
		delete[] set;

		set = new T[other.capacity];
		for (size_t i = 0; i < size; i++)
		{
			set[i] = other.set[i];
		}
		capacity = other.capacity;
		size = other.size;

	}
	return *this;
}

template<typename T>
inline bool Set<T>::add(const T& element)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (set[i] == &element)
		{
			return false;
		}
	}

	if (size < capacity)
	{
		set[size] = &element;
		size++;
	}
	else {
		T* temp = new T[capacity * 2];
		for (size_t i = 0; i < size; ++i)
		{
			temp[i] = set[i];
		}
		temp[size] = &element;
		size++;
		delete[] set;
		set = temp;
	}

	return true;
}

template<typename T>
inline bool Set<T>::isEmpty()
{
	for (size_t i = 0; i < size; ++i)
	{
		if (set[i] != nullptr)
		{
			return false;
		}
	}

	return true;
}