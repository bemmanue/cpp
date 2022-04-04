#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& source);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& source);

	void	action() const;
private:
	const std::string	target;
};

#endif
