#include <iostream>

int main()
{
    while (true)
    {
        // 1 print  help
        std::cout << "1: Print help" << std::endl;

        // 2 print FX stats
        std::cout << "2: Print exchange stats" << std::endl;

        // 3 make an offer
        std::cout << "3: Make an offer" << std::endl;

        // 4 make a bid
        std::cout << "4: Make a bid" << std::endl;

        // 5 print wallet
        std::cout << "5: Print wallet" << std::endl;

        // 6 next  time step r continue 
        std::cout << "1: Continue" << std::endl;

        std::cout << "=========" << std::endl;
        std::cout << "Type in 1-6" << std::endl;

        int userOption;
        std::cin >> userOption;
        std::cout << "You chose:  " << userOption << std::endl;

        if(userOption == 0) // bad input
        {
            std::cout << "Invalid choice. Choose 1-6. " << std::endl;
        }

        if(userOption == 1) 
        {
            std::cout << "Your aim is to analyze the market and make money." << std::endl;
        }

        if(userOption == 2) 
        {
            std::cout << "Market looking good." << std::endl;
        }

        if(userOption == 3)
        {
            std::cout << "Make an offer - enter amount" << std::endl;
        }

        if(userOption == 4)
        {
            std::cout << "Make a bid - enter amount" << std::endl;
        }

        if(userOption == 5)
        {
            std::cout << "Your wallet is empty." << std::endl;
        }

        if(userOption == 6)
        {
            std::cout << "Going to the next time frame. " << std::endl;
        }
    }
    
    return 0;
}


