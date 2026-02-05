#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Product.h"
using namespace std;
#pragma once

class Paddle : public Product
{
    private:

        //true = flared handle
        //false = straight handle
        bool isFlared;

    public:
        Paddle()
        {
            isFlared = false;
        };
    
        Paddle(int sport, bool isFlared)
        {
            this->isFlared = isFlared;
            setSport(sport);

            setPrice(genRandomPrice(25, 40));

            setQuantityAvailable(25);

            if(isFlared)
            {
                setProductName("Flared Table Tennis Paddle");
                setDescription("This is a table tennis paddle with a flared handle. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                setSearchTerms("indoor", "tennis", "paddle", "flare");
            }
            else
            {
                setProductName("Straight Table Tennis Paddle");
                setDescription("This is a table tennis paddle with a straight handle. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                setSearchTerms("indoor", "tennis", "paddle", "straight");
            }
        };

        bool getIsFlared()
        {
            return isFlared;
        };
};