//
// Created by Anderson Porto on 10/6/22.
//

#ifndef EX03_PRESIDENTIALPARDONFORM_HPP
#define EX03_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

 public:
  PresidentialPardonForm(const std::string &target);

  PresidentialPardonForm(const PresidentialPardonForm &form);

  PresidentialPardonForm &operator=(const PresidentialPardonForm &form);

  ~PresidentialPardonForm();

  virtual void execute(const Bureaucrat &executor) const;

 private:
  const std::string target;

  PresidentialPardonForm();

};

#endif //EX03_PRESIDENTIALPARDONFORM_HPP
