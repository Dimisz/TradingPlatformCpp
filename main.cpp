#include <iostream>

int getUserOption()
{
  int userOption;
  std::cin >> userOption;
  std::cin.clear();
  std::cin.ignore(100, '\n');
  return userOption;
}

void printMenu()
{
  // 1. print help
  std::cout << "1: Print help " << std::endl;
  // 2. print exchange stats
  std::cout << "2: Print exchange stats" << std::endl;
  // 3. make an offer
  std::cout << "3: Place an ask" << std::endl;
  // 4. make a bid
  std::cout << "4. Place a bid" << std::endl;
  // 5. print wallet
  std::cout << "5. Print wallet" << std::endl;
  // 6. continue
  std::cout << "6. Continue" << std::endl;
  std::cout << "===================" << std::endl;
  std::cout << "Type in 1 - 6" << std::endl;
}

void checkUserOption(int userOption)
{
  std::cout << "You chose: " << userOption << std::endl;
  switch (userOption)
  {
  case 1:
    std::cout << "1: Printing help..." << std::endl;
    break;
  case 2:
    std::cout << "2: Printing exchange stats" << std::endl;
    break;
  case 3:
    std::cout << "3: Making an offer" << std::endl;
    break;
  case 4:
    std::cout << "4. Making a bid" << std::endl;
    break;
  case 5:
    std::cout << "5. Printing wallet" << std::endl;
    break;
  case 6:
    std::cout << "6. Continuing" << std::endl;
    break;
  default:
    std::cout << "Bad input. Try again." << std::endl;
    break;
  }
}

int main()
{
  while (true)
  {
    printMenu();
    int userOption = getUserOption();
    checkUserOption(userOption);
  }

  return 0;
}