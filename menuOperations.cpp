#include <iostream>

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
  std::cout << "6. Go to next time frame" << std::endl;
  std::cout << "===================" << std::endl;
  std::cout << "Type in 1 - 6" << std::endl;
}

void printHelp()
{
  std::cout << "Help - Your goal is to make money." << std::endl;
  std::cout << "Analyze the market and make bids. Or don't." << std::endl;
}

void printMarketStats()
{
  std::cout << "The market is horrible." << std::endl;
}

void makeOffer()
{
  std::cout << "Make an offer - enter the amount" << std::endl;
}

void makeBid()
{
  std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet()
{
  std::cout << "Your wallet is empty." << std::endl;
}

void gotoNextTimeFrame()
{
  std::cout << "Going to next time frame..." << std::endl;
}
