//
// Created by Anderson Porto on 10/6/22.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {

 public:
  RobotomyRequestForm(const std::string &target);

  RobotomyRequestForm(const RobotomyRequestForm &form);

  RobotomyRequestForm &operator=(const RobotomyRequestForm &form);

  ~RobotomyRequestForm();

  virtual void execute(const Bureaucrat &executor) const;

 private:
  const std::string target;

  RobotomyRequestForm();

};

#endif //EX02_ROBOTOMYREQUESTFORM_HPP
