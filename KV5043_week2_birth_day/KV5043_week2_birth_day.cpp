#include <iostream>

int main() {
	int day, month, year;
	std::cout << "Enter the day month year you were born: ";
	std::cin >> day >> month >> year;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "You must enter whole numbers with spaces between!" << std::endl;
		std::cout << "Enter the day month year you were born: ";
		std::cin >> day >> month >> year;
	}

	// Adjust month and year if month is January or February
	if (month == 1 || month == 2) {
		month = month + 12;             //could use: month += 12
		year = year - 1;                //could use: year -= 1 or year--
	}

	int d = day;
	int m = month;
	int c = year / 100;
	int r = year % 100;

	// Calculate h using the formula provided
	int h = (13 * (m + 1)) / 5 + r + r / 4 + c / 4 - 2 * c;

	// Calculate the day of the week (0 = Saturday, 1 = Sunday, etc.)
	h = h % 7;

	// Output the result
	switch (h)
	{
	case 0: std::cout << "You were born on a Saturday" << std::endl;
		break;
	case 1: std::cout << "You were born on a Sunday" << std::endl;
		break;
	case 2: std::cout << "You were born on a Monday" << std::endl;
		break;
	case 3: std::cout << "You were born on a Tuesday" << std::endl;
		break;
	case 4: std::cout << "You were born on a Wednesday" << std::endl;
		break;
	case 5: std::cout << "You were born on a Thursday" << std::endl;
		break;
	case 6: std::cout << "You were born on a Friday" << std::endl;
		break;
	default: std::cout << "Error calculating day of the week" << std::endl;
		break;
	}

	return 0;
}
