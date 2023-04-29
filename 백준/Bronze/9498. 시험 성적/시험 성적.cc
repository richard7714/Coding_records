#include <iostream>

int main()
{
    int score;

    std::cin>>score;

    char grade = score>89 ? 'A' : score>79 ? 'B' : score >69 ? 'C' : score > 59 ? 'D' : 'F';

    std::cout <<grade;


}