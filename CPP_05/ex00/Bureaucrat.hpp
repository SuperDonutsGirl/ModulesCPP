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

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
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

		class GradeTooHighException : public std::exception{
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char	*what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &os, Bureaucrat &inst);

#endif
