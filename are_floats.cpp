/*
** File Name:	are_floats.cpp
** Author:		Victor David Sanchez, Ph.D.
** Description:	Verify float number format of a vector of strings
*/

#include <string>
#include <regex>
#include <vector>

std::vector<bool> are_floats(std::vector<std::string> lines, std::regex e) {
  std::vector<bool> results;
  
  for(int i = 0; i < lines.size(); i++) {
    results.push_back(std::regex_match(lines[i], e));
  }
  
  return results;
}