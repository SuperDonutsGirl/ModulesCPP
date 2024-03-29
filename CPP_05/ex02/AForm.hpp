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

class AForm
{
	private:
		const std::string _name;
		bool _state;
		const int _gToSign;
		const int _gToExec;	
	public:
		AForm();
		AForm(const std::string name, const int gToSign, const int gToExec);
		AForm(AForm const &inst);
		AForm &operator=(AForm const &inst);
		virtual ~AForm();

		std::string getName() const;
		int getGToSign() const;
		int getGToExec() const;
		bool getState() const;

		void setState(bool state);

		void beSigned(Bureaucrat &employe);

    	virtual bool execute(Bureaucrat const &executor)const = 0;

		bool isExecutable(Bureaucrat const &executor) const;
		
		class GradeTooHighException : public std::exception{
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char	*what() const throw();
		};
		class StateNotYetSigned : public std::exception{
			public:
				virtual const char	*what() const throw();
		};	
};

std::ostream&	operator<<(std::ostream &os, AForm &inst);

#endif
