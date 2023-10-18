/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:00:21 by yena              #+#    #+#             */
/*   Updated: 2023/10/18 18:28:25 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/14.
//

#ifndef EX00__EASYFIND_HPP_
#define EX00__EASYFIND_HPP_

#include <iostream>
#include "font.hpp"

template<typename T>
int easyfind(T &container, int n) {
  typename T::iterator it = std::find(container.begin(), container.end(), n);
  if (it == container.end())
    throw std::exception();
  return *it;
}

#endif //EX00__EASYFIND_HPP_
