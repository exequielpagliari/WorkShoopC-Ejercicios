#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
	bool bIsRunning = true;
	std::string input = "";
	int minNumber;
	int maxNumber;
	int guessNumber;


	while(bIsRunning)
	{

		std::cout << "Enter the number of guesses: ";
		getline(std::cin,input);
		guessNumber = std::stoi(input);

	        std::cout << "Enter the minimun number: ";
	        getline(std::cin,input);
	        minNumber = std::stoi(input);

	        std::cout << "Enter the maximum number: ";
	        getline(std::cin,input);
	        maxNumber = std::stoi(input);

		srand((unsigned) time(0));
		int number = minNumber + rand () % (maxNumber +1 - minNumber);


		while(true)
		{
			int numberInput;
			std::cout << "Enter your guess: ";
			getline(std::cin, input);
			numberInput = std::stoi(input);

			if(guessNumber < 0)
			{
				break;
			}

			guessNumber -= 1;

			if(numberInput == number)
			{
				std::cout << "Well done, you guessed the number.";
				break;
			}
			else if (guessNumber < number)
			{
				std::cout << "Your guess was too high. You have " << guessNumber
				<< " gueses remaining.";
			}
			else
			{
				std::cout << "Your guess was too low. You have " << guessNumber
                                << " gueses remaining.";
			}

		}
		std::cout << "Enter 0 to exit, or any number to play again: ";
		getline(std::cin, input);
		guessNumber = std::stoi(input);
		if(guessNumber == 0)
		{
			bIsRunning = false;
		}

	}
	return 0;
}
