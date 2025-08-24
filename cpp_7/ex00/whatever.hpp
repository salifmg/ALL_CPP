/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:21:35 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/24 19:33:35 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
#include <string>

template <typename T> void swap(T& a, T& b) {
    T tmp = a;
    a = b, b = tmp;
}

template <typename T2> T2 max(T2 a, T2 b) {
    return (a > b) ? a : b;
}

template <typename T3> T3 min(T3 a, T3 b) {
    return (a < b) ? a : b;
}

#endif