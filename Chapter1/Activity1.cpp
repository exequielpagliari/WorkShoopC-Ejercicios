#include <iostream>
#include <string>

#define GROUP_C_THRESHOLD 25
#define GROUP_B_THRESHOLD 18



void InName(std::string &name)
{

        std::cout << "Please enter your name: ";
        getline(std::cin,name);

}

void InAge(int &age)
{

        std::cout << "And please, enter your age: ";
        std::cin >> age;
        std::cout << std::endl;

}

std::string Compare(int age)
{



        if (age > GROUP_C_THRESHOLD)
        {
                return "Group C";
        }
        else if (age > GROUP_B_THRESHOLD)
        {
                return "Group B";
        }
	else
                return "Group A";



}



int main()
{
        std::string name;
        int age;
	InName(name);
	InAge(age);
	std::cout << "Welcome " << name << ". Your are in " << Compare(age) << std::endl;
        std::cout << "You are " << age << " years old." << std::endl;
        std::cout << '\n';
	return 0;
}
