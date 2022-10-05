//
// Created by Anderson Porto on 10/5/22.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

 public:
  ShrubberyCreationForm(const std::string &target);

  ShrubberyCreationForm(const ShrubberyCreationForm &form);

  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);

  ~ShrubberyCreationForm();

  virtual void execute(const Bureaucrat &executor) const;

 private:
  const std::string target;

  ShrubberyCreationForm();
};

#endif //EX02_SHRUBBERYCREATIONFORM_HPP
