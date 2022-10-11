//
// Created by Anderson Porto on 10/10/22.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <limits>
#include <iostream>
#include <exception>
#include <list>

class Span {
 public:
  Span(unsigned int N);

  Span(const Span &span);

  ~Span();

  Span &operator=(const Span &span);

  void addNumber(int number);

  int shortestSpan();

  int longestSpan();

  void addRange(std::list<int>::iterator begin, std::list<int>::iterator end);

  void print();

  class SpanFullException : public std::exception {
   public:
    const char *what() const throw() {
      return "Span is full";
    }
  };

  class SpanEmptyException : public std::exception {
   public:
    const char *what() const throw() {
      return "Span is empty";
    }
  };

 private:
  Span();

  unsigned int N;

  std::list<int> numbers;
};

#endif //EX01_SPAN_HPP
