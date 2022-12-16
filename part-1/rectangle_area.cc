// Richard Hoang
// CPSC 120-04
// 2022-11-18
// 04rhoang@csu.fullerton.edu
// @04rhoang
//
// Lab 10-01
//Partners: 
//
//Find Area of Rectangle
//


#include <iostream>
#include <string>
#include <vector>

#include "rectangle_area_functions.h"

int main(int argc, char const* argv[]) {
  std::vector<std::string> args{argv, argv + argc};
  if (args.size() < 3) {
    std::cout << " Not enough arguments.\n";
    return 1;
  }
  int length = std::stoi(args.at(1));
  int width = std::stoi(args.at(2));
  int area = RectangleArea (length, width);
  std::cout << length << " x " << width << " = " << area << "\n";
  return 0;
}