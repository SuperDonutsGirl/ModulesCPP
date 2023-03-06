/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:25:34 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/28 14:25:36 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<int> _numbers;
        unsigned int N;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &inst);
        ~Span();

        Span &operator=(const Span &inst);

        void    addNumber(int nb);
        void	addNumber(std::vector<int> vector);
        int     shortestSpan();
        int     longestSpan();

        class SpanTooShortException : public std::exception{
			public:
				const char	*what() const throw();
		};
};



#endif
