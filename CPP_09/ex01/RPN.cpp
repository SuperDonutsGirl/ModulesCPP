/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:54 by pamartin          #+#    #+#             */
/*   Updated: 2023/11/06 16:21:55 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int space(std::string line, int i)
{
    while (line[i] && line[i] == ' ')
        i++;
    return i;
}

int isDigit(std::string line, int i)
{
    if (line[i] == '0' || line[i] == '1' || line[i] == '2' || line[i] == '3'
    || line[i] == '4' || line[i] == '5' || line[i] == '6' || line[i] == '7'
    || line[i] == '8' || line[i] == '9')
        return true;
    return false;
}

int isToken(std::string line, int i)
{
    int res; 
    switch (line[i]){
    case '+':
        res = ADD;
        break;
    case '-':
        res = SUB;
        break;
    case '/':
        res = DIV;
        break;
    case '*':
        res = MULT;
        break;
    default:
        res = -1;
    }
    return res;
}

int applyToken(int tok, std::stack<int> stack, std::stack<int> tmp)
{
    int res;

    switch (tok){
        case ADD:
            res = stack.top() + tmp.top();
            break;
        case SUB:
            res = stack.top() - tmp.top();
            break;
        case DIV:
            res = stack.top() / tmp.top();
            break;
        case MULT:
            res = stack.top() * tmp.top();
            break;
        }
    return res;
    stack.pop();
    tmp.pop();
    stack.push(res);
}

void go(std::string line)
{
    int i = 0;
    int tok;

    std::stack<int> stack;
    std::stack<int> tmp;

    while (line[i]){
        i = space(line, i);

        if (isDigit(line, i))
            stack.push(static_cast<int>(line[i]) - '0');
        tok = isToken(line, i);
        if (tok >= 0)
        {
            tmp.push(stack.top());
            stack.pop();
            if (!stack.size() || !tmp.size()){
                std::cout << "Error";
                return;
            }
            else{
                int res = applyToken(tok, stack, tmp);
                stack.pop();
                tmp.pop();
                stack.push(res);
            }
        }
        i++;
    }
    if (stack.size() == 1 && !tmp.size())
        std::cout << stack.top();
    else
        std::cout << "Error";
}