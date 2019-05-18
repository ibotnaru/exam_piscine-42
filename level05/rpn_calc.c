/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 21:37:41 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/17 21:38:23 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : rpn_calc
**	Expected files   : *.c, *.h
**	Allowed functions: atoi, printf, write, malloc, free
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes a string which contains an equation written in
**	Reverse Polish notation (RPN) as its first argument, evaluates the equation, and
**	prints the result on the standard output followed by a newline.
**	
**	Reverse Polish Notation is a mathematical notation in which every operator
**	follows all of its operands. In RPN, every operator encountered evaluates the
**	previous 2 operands, and the result of this operation then becomes the first of
**	the two operands for the subsequent operator. Operands and operators must be
**	spaced by at least one space.
**	
**	You must implement the following operators : "+", "-", "*", "/", and "%".
**	
**	If the string isn't valid or there isn't exactly one argument, you must print
**	"Error" on the standard output followed by a newline.
**	
**	All the given operands must fit in a "int".
**	
**	Examples of formulas converted in RPN:
**	
**	3 + 4                   >>    3 4 +
**	((1 * 2) * 3) - 4       >>    1 2 * 3 * 4 -  ou  3 1 2 * * 4 -
**	50 * (5 - (10 / 9))     >>    5 10 9 / - 50 *
**	
**	Here's how to evaluate a formula in RPN:
**	
**	1 2 * 3 * 4 -
**	2 3 * 4 -
**	6 4 -
**	2
**	
**	Or:
**	
**	3 1 2 * * 4 -
**	3 2 * 4 -
**	6 4 -
**	2
**	
**	Examples:
**	
**	$> ./rpn_calc "1 2 * 3 * 4 +" | cat -e
**	10$
**	$> ./rpn_calc "1 2 3 4 +" | cat -e
**	Error$
**	$> ./rpn_calc |cat -e
**	Error$
*/