#include <iostream>

// menuOperations
void printHelp();
void printMarketStats();
void makeOffer();
void makeBid();
void printWallet();
void gotoNextTimeFrame();
void printMenu();

int getUserOption()
{
  int userOption;
  std::cin >> userOption;
  std::cin.clear();
  std::cin.ignore(100, '\n');
  return userOption;
}

void processUserOption(int userOption)
{
  std::cout << "You chose: " << userOption << std::endl;
  switch (userOption)
  {
  case 1:
    printHelp();
    break;
  case 2:
    printMarketStats();
    break;
  case 3:
    makeOffer();
    break;
  case 4:
    makeBid();
    break;
  case 5:
    printWallet();
    break;
  case 6:
    gotoNextTimeFrame();
    break;
  default:
    std::cout << "Bad input. Try again." << std::endl;
    break;
  }
}