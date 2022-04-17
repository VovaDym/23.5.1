#include <iostream>

#define MONDEY "mondey" 
#define TUESDAY "tuesday" 
#define WEDNESDAY "wednesday"
#define THURSDAY "thursday"
#define FRIDAY "fridey" 
#define SATURDAY "saturday"
#define SUNDAY "sunday"

#define DAY_OF_WEEK(n) n

int main()
{
	int day = 0;

	while (true)
	{
		std::cout << "Enter the number of the day of the week: " << std::endl;
		std::cout << "Enter 0 to terminate the program: " << std::endl;
		do
		{
			std::cin >> day;
			if (day == 0) return 0;
		}	
		while (day <= 0 || day > 7);
		
		switch (day)
		{
		case 1: std::cout << DAY_OF_WEEK(MONDEY) << std::endl; break;
		case 2: std::cout << DAY_OF_WEEK(TUESDAY) << std::endl; break;
		case 3: std::cout << DAY_OF_WEEK(WEDNESDAY) << std::endl; break;
		case 4: std::cout << DAY_OF_WEEK(THURSDAY) << std::endl; break;
		case 5: std::cout << DAY_OF_WEEK(FRIDAY) << std::endl; break;
		case 6: std::cout << DAY_OF_WEEK(SATURDAY) << std::endl; break;
		case 7: std::cout << DAY_OF_WEEK(SUNDAY) << std::endl; break;
		}
	}	
}