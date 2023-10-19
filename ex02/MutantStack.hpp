/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:50:50 by yena              #+#    #+#             */
/*   Updated: 2023/10/19 14:49:02 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/14.
//

#ifndef EX02__MUTANTSTACK_HPP_
#define EX02__MUTANTSTACK_HPP_

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
 public:
  MutantStack() {};
  MutantStack(const MutantStack<T> &other) { if (this != &other) *this = other; }
  MutantStack<T> &operator=(const MutantStack<T> &mutantStack) {
    if (this != &mutantStack) {
      this->c = mutantStack.c;
    }
    return *this;
  }
  ~MutantStack() {};

  typedef typename MutantStack<T>::stack::container_type::iterator iterator;
  iterator begin() { return this->c.begin(); };
  iterator end() { return this->c.end(); }

  typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
  const_iterator cbegin() const { return this->c.begin(); }
  const_iterator cend() const { return this->c.end(); }

  typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
  reverse_iterator rbegin() { return this->c.rbegin(); }
  reverse_iterator rend() { return this->c.rend(); }

  typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
  const_reverse_iterator crbegin() const { return this->c.rbegin(); }
  const_reverse_iterator crend() const { return this->c.rend(); }
};

#endif //EX02__MUTANTSTACK_HPP_
