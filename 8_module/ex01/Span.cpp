//
// Created by Anderson Porto on 10/10/22.
//

#include <numeric>
#include "Span.hpp"

Span::Span() {
  this->N = 0;
  this->numbers = std::list<int>();
}

Span::Span(unsigned int n) {
  this->N = n;
  this->numbers = std::list<int>();
}

Span::Span(const Span &span) {
  *this = span;

}

Span::~Span() {

}

Span &Span::operator=(const Span &span) {
  if (this != &span) {
    this->N = span.N;
    this->numbers = span.numbers;
  }
  return *this;
}

void Span::addNumber(int number) {
  if (this->numbers.size() == this->N)
    throw SpanFullException();
  this->numbers.push_back(number);
}

int Span::shortestSpan() {
  if (this->numbers.size() < 2) {
    throw SpanEmptyException();
  }
  std::list<int> sorted = this->numbers;
  sorted.sort();

  int min = std::numeric_limits<int>::max();

  for (std::list<int>::iterator it = sorted.begin(); it != --sorted.end(); it++) {
    int diff = *++it - *--it;

    if (diff < min) {
      min = diff;
    }
  }
  return min;
}

int Span::longestSpan() {
  if (this->numbers.size() < 2)
    throw SpanEmptyException();
  return std::abs(
      *std::max_element(this->numbers.begin(), this->numbers.end()) -
          *std::min_element(this->numbers.begin(), this->numbers.end()));
}

void Span::addRange(std::list<int>::iterator begin, std::list<int>::iterator end) {
  for (std::list<int>::iterator it = begin; it != end; it++) {
    this->addNumber(*it);
  }
}

void Span::print() {
  for (std::list<int>::iterator it = this->numbers.begin(); it != this->numbers.end(); it++) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}