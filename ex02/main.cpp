/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:49:49 by yena              #+#    #+#             */
/*   Updated: 2023/10/14 17:16:33 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "font.hpp"
#include <list>

int main() {
  std::cout << F_GREEN
            << "----------------------- STACK -----------------------"
            << std::endl;
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
  std::cout << F_GREEN
            << "----------------------- LIST ------------------------"
            << std::endl;
  std::list<int> list;
  list.push_back(5);
  list.push_back(17);
  std::cout << list.back() << std::endl;
  list.pop_back();
  std::cout << list.size() << std::endl;
  list.push_back(3);
  list.push_back(5);
  list.push_back(737);
  list.push_back(0);
  std::list<int>::iterator it2 = list.begin();
  std::list<int>::iterator ite2 = list.end();
  ++it2;
  --it2;
  while (it2 != ite2) {
    std::cout << *it2 << std::endl;
    ++it2;
  }
  std::list<int> s2(list);
  return 0;
}