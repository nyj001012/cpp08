/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:55:35 by yena              #+#    #+#             */
/*   Updated: 2023/10/19 16:17:56 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

#include "easyfind.hpp"

int main() {
  std::cout << F_GREEN << "-------------------- EASY FIND --------------------"
            << std::endl
            << FB_DEFAULT;
  std::srand(std::time(NULL));
  std::vector<int> int_vec(5);
  std::cout << "int_vec: { ";
  for (std::vector<int>::iterator it = int_vec.begin(); it != int_vec.end();
       it++) {
    *it = std::rand() % 10;
    std::cout << *it << " ";
  }
  std::cout << "}" << std::endl;
  std::cout << "easyfind(int_vec, 5): " << std::endl;
  try {
    int found_value = easyfind(int_vec, 5);
    std::cout << F_CYAN << "FOUND: " << found_value << FB_DEFAULT << std::endl;
  } catch (std::exception &e) {
    std::cout << F_RED << "NOT FOUND" << FB_DEFAULT << std::endl;
  }
}
