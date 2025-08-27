/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:28:29 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/27 18:10:54 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>

template <typename T>
Array<T>::Array() : arr(new T[0]), nbr_elements(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]), nbr_elements(n) {}

template <typename T>
Array<T>::Array(const Array& copy) : arr(new T[copy.nbr_elements]), nbr_elements(copy.nbr_elements) {
    for (size_t i = 0; i < nbr_elements; ++i)
        arr[i] = copy.arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& copy) {
    if (this != &copy) {
        delete[] arr;
        nbr_elements = copy.nbr_elements;
        arr = new T[nbr_elements];
        for (size_t i = 0; i < nbr_elements; ++i)
            arr[i] = copy.arr[i];
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](size_t i) {
    if (i >= nbr_elements)
        throw std::out_of_range("Index out of bounds");
    return arr[i];
}

template <typename T>
size_t Array<T>::size(){
    return nbr_elements;
}

template <typename T>
Array<T>::~Array() {
    delete[] arr;
}

template <typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &ex)
{
	for (size_t i = 0; i < ex.size(); i++)
	{
   		o << ex[i] << " ";
	}
    return (o);
}

