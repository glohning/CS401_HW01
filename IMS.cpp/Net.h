#include <iostream>
#include <random>
#include<cstdlib>
#include<ctime>
#include "Product.h"
using namespace std;
#pragma once

class Net : public Product
{
    private:    
        int height;
        int width;
        bool isTraining;


    public:
        Net()
        {
            height = 0;
            width = 0;
            isTraining = false;
        };

        //volleyball net
        Net(int sport, int height, int width, bool isTraining)
        {
            setSport(sport);
            this->height = height;
            this->width = width;
            this->isTraining = isTraining;

            //gen quantity available up to 12
            setQuantityAvailable(12);

            //gen random price depending on type of net
            //if volleyball = training price vs professional price
            //else soccer = average price variation for quality nets
            //also set description
            if(isTraining)
            {
                setProductName(to_string(width) +  "x" + to_string(height) + " Training Volleyball Net");
                setPrice(genRandomPrice(100, 250));
                setDescription("This is a TRAINING volleyball net. \nIt has a height of " + to_string(height) + " and a width of " + to_string(width) + ".\nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                setSearchTerms("indoor", "volley", "training", "net");
            }
            else
            {
                setProductName(to_string(width) +  "x" + to_string(height) + " Volleyball Net");
                setPrice(genRandomPrice(350, 600));
                setDescription("This is NOT a training volleyball net. \nIt has a height of " + to_string(height) + " and a width of " + to_string(width) + ".\nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                setSearchTerms("indoor", "volley", "net", "professional");
            }

            //decide if volleyball product is on sale
            if(genRandomPrice(0, 1) == 1)
                    setVolleyballSale(true);
        };

        //soccer
        Net(int sport, int height, int width)
        {
            setSport(sport);
            this->height = height;
            this->width = width;

            //average price variation for quality nets
            setPrice(genRandomPrice(250, 400));

            //gen quantity available up to 25
            setQuantityAvailable(25);

            setProductName(to_string(width) + "x" + to_string(height) + " Soccer Goal/Net");
            setDescription("This is a soccer goal (or net). \nIt has a height of " + to_string(height) + " and a width of " + to_string(width) + ".\nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
            setSearchTerms("outdoor", "soccer", "goal", "net");

        };

        bool getIsTraining()
        {
            return isTraining;
        };

        int getWidth()
        {
            return width;
        };

        int getHeight()
        {
            return height;
        };

};