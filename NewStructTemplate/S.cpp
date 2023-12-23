#include <iostream>
#include "S.h"

template <class T>
S<T>::S(T elem) : val(elem)
{

}

template <class T>
T& S<T>::get()
{
	return val;
}

template <class T>
void S<T>::set(T newValue)
{
	val = newValue;
}
 
template <class T>
T& S<T>::operator[](int i)
{
	return val;
}

template <class T>
const T& S<T>::operator[](int i) const
{
	return val;
}

/*
template <class T>
void read_val(T& v)
{
	std::cin >> v;
}
*/