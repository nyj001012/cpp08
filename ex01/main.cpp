/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:24:17 by yena              #+#    #+#             */
/*   Updated: 2023/10/14 16:46:57 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "font.hpp"

int main() {
  std::cout << F_GREEN
            << "-------------------- SUBJECT TEST --------------------"
            << FB_DEFAULT << std::endl;
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << "Span: " << sp << std::endl;
  std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
  std::cout << "Longest span: " << sp.longestSpan() << std::endl << std::endl;

  std::cout << F_GREEN
            << "----------------- RANDOM NUMBER TEST -----------------"
            << FB_DEFAULT << std::endl;
  Span sp2 = Span(10000);
  sp2.addRandomNumbers(10000, 10000);
  std::cout << "Span: 1 ~ 9999" << std::endl;
  std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
  std::cout << "Longest span: " << sp2.longestSpan() << std::endl << std::endl;

  std::cout << F_GREEN
            << "------------------- EXCEPTION TEST -------------------"
            << FB_DEFAULT << std::endl;
  Span sp3 = Span(1);
  sp3.addNumber(1);
  std::cout << "Container is full => ";
  sp3.addNumber(2);
  std::cout << "Can't get shortest span => ";
  sp3.shortestSpan();
  std::cout << "Can't get longest span => ";
  sp3.longestSpan();
  Span sp4 = Span(2);
  sp4.addNumber(1);
  std::cout << "Value is already stored => ";
  sp4.addNumber(1);
  return 0;
}
