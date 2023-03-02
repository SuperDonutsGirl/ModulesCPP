/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:52:42 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/15 11:52:43 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool state;
		const int gToSign;
		const int gToExec;
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
		Form();
		Form(const std::string name, const int gToSign, const int gToExec);
		Form(Form const &inst);
		Form &operator=(Form const &inst);
		~Form();

		std::string getName() const;
		int getGToSign() const;
		int getGToExec() const;
		bool getState();

		void setState(bool state);

		void beSigned(Bureaucrat &employe);
};

std::ostream&	operator<<(std::ostream &os, Form &inst);

#endif
