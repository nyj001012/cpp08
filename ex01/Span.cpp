/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:28:24 by yena              #+#    #+#             */
/*   Updated: 2023/10/14 16:48:36 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by 나예진 on 2023/10/14.
//

#include "Span.hpp"

Span::Span() : _n(0) {
  std::srand(std::time(NULL));
}

Span::Span(unsigned int n) : _n(n) {
  std::srand(std::time(NULL));
}

Span::Span(const Span &span) {
  if (this != &span)
    *this = span;
}

Span &Span::operator=(const Span &span) {
  if (this != &span)
    _n = span._n;
  return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int value) {
  try {
    if (_v.size() == _n)
      throw std::length_error("Error: the container is full.");
    if (std::find(_v.begin(), _v.end(), value) != _v.end())
      throw std::runtime_error("Error: the value is already stored.");
    _v.push_back(value);
  } catch (std::exception &e) {
    std::cout << F_RED
              << e.what()
              << FB_DEFAULT << std::endl;
  }
}

void Span::addRandomNumbers(unsigned int n, unsigned int max_value) {
  try {
    if (max_value < n)
      throw std::invalid_argument("Error: max_value is smaller than n.");
    for (unsigned int i = 0; i < n; i++) {
      if (_v.size() == _n)
        throw std::length_error("Error: the container is full.");
      int tmp = std::rand() % max_value;
      while (std::find(_v.begin(), _v.end(), tmp) != _v.end()) {
        tmp = std::rand() % max_value;
      }
      _v.push_back(tmp);
    }
  } catch (std::exception &e) {
    std::cout << F_RED
              << e.what()
              << FB_DEFAULT << std::endl;
  }
}

int Span::shortestSpan() {
  try {
    if (_v.size() <= 1)
      throw std::runtime_error("Error: there is no span to find.");
    std::vector<int> tmp(_v);
    std::sort(tmp.begin(), tmp.end());
    int min = std::abs(tmp[0] - tmp[1]);
    for (unsigned int i = 0; i < tmp.size() - 1; i++) {
      for (unsigned int j = i + 1; j < tmp.size(); j++) {
        if (std::abs(tmp[i] - tmp[j]) < min)
          min = std::abs(tmp[i] - tmp[j]);
      }
    }
    return min;
  } catch (std::exception &e) {
    std::cout << F_RED
              << e.what()
              << FB_DEFAULT << std::endl;
  }
  return -1;
}

int Span::longestSpan() {
  try {
    if (_v.size() <= 1)
      throw std::runtime_error("Error: there is no span to find.");
    std::vector<int> tmp(_v);
    std::sort(tmp.begin(), tmp.end(), std::greater<int>());
    int max = -1;
    for (unsigned int i = 0; i < tmp.size() - 1; i++) {
      for (unsigned int j = i + 1; j < tmp.size(); j++) {
        if (std::abs(tmp[i] - tmp[j]) > max)
          max = std::abs(tmp[i] - tmp[j]);
      }
    }
    return max;
  } catch (std::exception &e) {
    std::cout << F_RED
              << e.what()
              << FB_DEFAULT << std::endl;
  }
  return -1;
}

std::vector<int> Span::getV() const {
  return this->_v;
}

std::ostream &operator<<(std::ostream &os, const Span &span) {
  std::vector<int> tmp = span.getV();
  os << "{ ";
  for (unsigned int i = 0; i < tmp.size(); i++) {
    os << tmp[i];
    if (i != tmp.size() - 1)
      os << ", ";
  }
  os << " }";
  return os;
}
