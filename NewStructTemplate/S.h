#include <iostream>

template <class T>
struct S
{
	private:
	T val;
	public:
	S(T elem);
	T& get();
	void set(T newValue);
	T& operator[](int i);
	const T& operator[](int i) const;
	//void read_val(T& v);
};