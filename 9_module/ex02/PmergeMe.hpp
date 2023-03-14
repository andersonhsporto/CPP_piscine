//
// Created by anderson on 14/03/23.
//

#ifndef EX02__PMERGEME_HPP_
#define EX02__PMERGEME_HPP_

#include <iostream>
#include <list>
#include <deque>
#include <deque>

class PmergeMe
{
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
  timeval _timeList;
  timeval _timeDeque;

	void _parseList(int c, char *str[]);

	void _parseDeque(int c, char *str[]);

	void _mergeList();

	void _mergeDeque();

	bool _isValidNumbers(const char *str);
};

#endif // EX02__PMERGEME_HPP_
