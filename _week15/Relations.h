#pragma once
#include <string>
#include <iostream>

template <typename T>
class RelationElement {
private:
	T subject;
	T object;
	std::string relation;

public:
	RelationElement<T>(T _subject, T _object, std::string _relation) :
		subject(_subject), object(_object), relation(_relation) { }
	
	friend RelationElement<int> operator*(const RelationElement<int>& r1, const RelationElement<int>& r2) {
		if (r1.object == r2.subject)
		{
			RelationElement<int> r = RelationElement<int>(r1.subject, r2.object, r1.relation);
			return r;
		}
		return r1;
	}

	void print() {
		std::cout << subject << " " << object << std::endl;
	}
};