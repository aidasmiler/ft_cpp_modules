/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:39:14 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/22 14:35:58 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>
#include <Date.hpp>

void dateTester() {
	std::string test;
	try
	{
		// Test case 1: Valid date
		test = "2023-11-13";
		Date validDate(test);
		std::cout << "Valid date parsed successfully. ";
		validDate.print();
		std::cout << std::endl;

		// Test case 2: Negative year (should fail)
		test = "-2023-11-13";
		Date negativeYear(test);
		// The program should not reach this line because an exception should be thrown
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		// Test case 3: Invalid month (should fail)
		test = "2023-13-13";
		Date invalidMonth(test);
		// The program should not reach this line because an exception should be thrown
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		// Test case 4: Invalid day (should fail)
		test = "2023-11-32";
		Date invalidDay(test);
		// The program should not reach this line because an exception should be thrown
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		// Test case 5: Invalid format (missing dashes) (should fail)
		test = "20231113";
		Date invalidFormat(test);
		// The program should not reach this line because an exception should be thrown
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		// Test case 6: Invalid format (extra characters) (should fail)
		test = "2023-11-13x";
		Date extraCharacters(test);
		// The program should not reach this line because an exception should be thrown
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		// Test case 7: Invalid format (non-numeric characters) (should fail)
		test = "2023-11-A3";
		Date nonNumeric(test);
		// The program should not reach this line because an exception should be thrown
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		// Test case 8: Valid date with leading zeros
		test = "0023-01-03";
		Date leadingZeros(test);
		std::cout << "Valid date with leading zeros parsed successfully. ";
		leadingZeros.print();
		std::cout << std::endl;

		// Test case 9: Valid date with extra leading zeros
		test = "0000023-001-00003";
		Date extraLeadingZeros(test);
		std::cout << "Valid date with extra leading zeros parsed successfully. ";
		extraLeadingZeros.print();
		std::cout << std::endl;

		// Test case 10: Valid date with different separators
		test = "2023/11/13";
		Date differentSeparators(test);
		std::cout << "Valid date with different separators parsed successfully. ";
		differentSeparators.print();
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		// Test case 11: Invalid date with spaces
		test = "  2023 - 11 - 13  ";
		Date withSpaces(test);
		// The program should not reach this line because an exception should be thrown
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		// Test case 12: Invalid format (missing year)
		test ="-11-13";
		Date invalidFormatMissingYear(test);
		// The program should not reach this line because an exception should be thrown
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

int main(int argc, char**argv)
{
	try
	{
		if (argc != 2)
			throw BitcoinExchange::FileNotFoundException();
		std::string fileName(argv[1]);
		BitcoinExchange be(fileName);
		be.printExchange();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
