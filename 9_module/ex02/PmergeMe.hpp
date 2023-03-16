//
// Created by anderson on 14/03/23.
//

#ifndef EX02__PMERGEME_HPP_
#define EX02__PMERGEME_HPP_

#include <iostream>
#include <list>
#include <deque>
#include <set>

class PmergeMe {
 public:
  PmergeMe();

  ~PmergeMe();

  PmergeMe operator=(const PmergeMe &rhs);

  PmergeMe(const PmergeMe &rhs);

  void parse(int c, char *str[]);
  void sort();

  void print(int argc, char *argv[]);

 private:
  std::list<int> _list;
  std::deque<int> _deque;
  std::set<int> _set;
  timeval _timeList;
  timeval _timeDeque;
  timeval _timeSet;

  void _parseList(int c, char *str[]);

  void _parseDeque(int c, char *str[]);

  void _parseSet(int c, char *str[]);

  void _mergeList();

  void _mergeDeque();

  void _mergeSet();

  bool _isValidNumbers(const char *str);
};

#endif // EX02__PMERGEME_HPP_
