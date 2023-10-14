/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:28:24 by yena              #+#    #+#             */
/*   Updated: 2023/10/14 16:44:11 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/14.
//

#ifndef EX01__SPAN_HPP_
#define EX01__SPAN_HPP_

#include <iostream>
#include "font.hpp"

class Span {
 private:
  unsigned int _n;
  std::vector<int> _v;

 public:
  Span();
  Span(unsigned int n);
  Span(const Span &span);
  ~Span();
  Span &operator=(const Span &span);
  void addNumber(unsigned int n);
  void addRandomNumbers(unsigned int n, unsigned int max_value);
  int shortestSpan();
  int longestSpan();
  std::vector<int> getV() const;
};

std::ostream &operator<<(std::ostream &os, const Span &span);

#endif //EX01__SPAN_HPP_
