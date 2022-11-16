//
// Created by Anderson Porto on 8/21/22.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#define CONSTRUCTOR         "Default constructor called"
#define COPY_CONSTRUCTOR    "Copy constructor called"
#define GETTER              "getRawBits member function called"
#define ASSIGNMENT          "Copy assignment operator called"
#define DESTRUCTOR          "Destructor called"

class Fixed {
 public:
  Fixed();

  Fixed(const Fixed &fixed);

  Fixed &operator=(const Fixed &fixed);

  ~Fixed();

  int getRawBits(void) const;

  void setRawBits(int const raw);

 private:
  int rawBits;

  static const int fractionalBits;
};

#endif //EX00_FIXED_HPP
