#include <iostream>

// menuOperations
void printHelp();
void printMarketStats();
void makeOffer();
void makeBid();
void printWallet();
void gotoNextTimeFrame();
void printMenu();
// inputHandlers
int getUserOption();
void processUserOption(int userOption);

int main()
{
  while (true)
  {
    printMenu();
    int userOption = getUserOption();
    processUserOption(userOption);
  }

  return 0;
}