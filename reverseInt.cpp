#include<sstream>

int ReverseInt(int userInt)
{
    std::string intString = std::to_string(userInt);
    std::string reversedString = "";

    for(int i = intString.size() - 1; i >= 0; --i)
    {
        reversedString += intString[i];
    }

    std::stringstream stringInt(reversedString);

    int newInt = 0;
    stringInt >> newInt;

    return newInt;
}

int main()
{

    //random placeholder int
    ReverseInt(34);

    return 0;
}