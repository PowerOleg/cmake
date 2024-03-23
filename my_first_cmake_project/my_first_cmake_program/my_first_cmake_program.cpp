// my_first_cmake_program.cpp: определяет точку входа для приложения.
//
#include "my_first_cmake_program.h"

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << "!";
	system("Pause");
	return 0;
}
