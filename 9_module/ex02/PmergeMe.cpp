//
// Created by anderson on 14/03/23.
//

#include "PmergeMe.hpp"


PmergeMe::PmergeMe() {
}

PmergeMe::~PmergeMe() {
}

PmergeMe PmergeMe::operator=(const PmergeMe &rhs) {
  if (this != &rhs) {
    this->_list = rhs._list;
    this->_deque = rhs._deque;
  }
  return *this;
}
PmergeMe::PmergeMe(const PmergeMe &rhs) {
  *this = rhs;
}

void PmergeMe::parse(int c, char *str[]) {
  for (int i = 1; i < c; i++) {
    if (!_isValidNumbers(str[i])) {
      std::cout << str[i] << std::endl;
      std::cout << "ERROR: Invalid number." << std::endl;
      throw std::exception();
    }
  }
  _parseList(c, str);
  _parseDeque(c, str);
  _parseSet(c, str);
}

void PmergeMe::print(int argc, char *argv[]) {
  std::cout << "Before: ";
  for (int i = 1; i < argc; i++) {
    std::cout << argv[i] << " ";
  }

  std::cout << std::endl << "After <std::list> : ";
  for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++) {
    std::cout << *it << " ";
  }

  std::cout << std::endl << "After <std::deque>: ";
  for (std::deque<int>::iterator it = _deque.begin(); it != _deque.end(); it++) {
    std::cout << *it << " ";
  }

  std::cout << std::endl << "After <std::set> : ";
  for (std::set<int>::iterator it = _set.begin(); it != _set.end(); it++) {
    std::cout << *it << " ";
  }

  std::cout << std::endl << "Time to process a range of " << argc - 1 << " elements";
  std::cout << " with std::list : " << _timeList.tv_usec << " us" << std::endl;

  std::cout << std::endl << "Time to process a range of " << argc - 1 << " elements";
  std::cout << " with std::deque: " << _timeDeque.tv_usec << " us" << std::endl;

  std::cout << std::endl << "Time to process a range of " << argc - 1 << " elements";
  std::cout << " with std::set: " << _timeSet.tv_usec << " us" << std::endl;
}

bool PmergeMe::_isValidNumbers(const char *str) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] < '0' || str[i] > '9') {
      return false;
    }
    i++;
  }
  return true;
}

void PmergeMe::_parseList(int c, char *str[]) {
  for (int i = 0; i < c; i++) {
    _list.push_back(atoi(str[i]));
  }
}
void PmergeMe::_parseDeque(int c, char *str[]) {
  for (int i = 0; i < c; i++) {
    _deque.push_back(atoi(str[i]));
  }
}

void PmergeMe::sort() {
  // time
  timeval start;

  gettimeofday(&start, NULL);
  _mergeList();
  gettimeofday(&_timeList, NULL);
  timersub(&_timeList, &start, &_timeList);

  gettimeofday(&start, NULL);
  _mergeDeque();
  gettimeofday(&_timeDeque, NULL);
  timersub(&_timeDeque, &start, &_timeDeque);

  gettimeofday(&start, NULL);
  _mergeSet();
  gettimeofday(&_timeSet, NULL);
  timersub(&_timeSet, &start, &_timeSet);
}

// using bubble sort
void PmergeMe::_mergeList() {
  int tempNBR;

  for (std::list<int>::iterator it1 = _list.begin(); it1 != _list.end();
       it1++) {
    for (std::list<int>::iterator it3 = _list.begin(); it3 != _list.end(); it3++) {
      if (*it1 < *it3) {
        tempNBR = *it1;
        *it1 = *it3;
        *it3 = tempNBR;
      }
    }
  }
}

// using bubble sort
void PmergeMe::_mergeDeque() {
  int tempNBR;

  for (std::deque<int>::iterator it1 = _deque.begin(); it1 != _deque.end();
       it1++) {
    for (std::deque<int>::iterator it3 = _deque.begin(); it3 != _deque.end(); it3++) {
      if (*it1 < *it3) {
        tempNBR = *it1;
        *it1 = *it3;
        *it3 = tempNBR;
      }
    }
  }
}

void PmergeMe::_parseSet(int c, char **str) {
  for (int i = 0; i < c; i++) {
    _set.insert(atoi(str[i]));
  }

}

void PmergeMe::_mergeSet() {
  return;
}
