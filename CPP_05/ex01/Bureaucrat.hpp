/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:08:25 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 16:08:26 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int	grade;
		static const int gMax = 1;
		static const int gMin = 150;
	private:
		class GradeTooHighException : public std::exception{
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char	*what() const throw();
		};
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &inst);
		Bureaucrat &operator=(Bureaucrat const &inst);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form);
};

std::ostream&	operator<<(std::ostream &os, Bureaucrat &inst);

#endif
