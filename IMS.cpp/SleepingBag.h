#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Product.h"
using namespace std;
#pragma once

class SleepingBag : public Product
{
    private:
        //1 = short (5'6'')
        //2 = regular (6'0'')
        //3 = long (6'6'')
        int size;

        //true = synthetic polyester
        //false = natural down
        bool isPolyester;

    public:
        SleepingBag()
        {
            size = 0;
            isPolyester = false;
        };

        SleepingBag(int sport, int size, bool isPolyester)
        {
            setSport(sport);
            this->size = size;
            this->isPolyester = isPolyester;
            
            switch (size)
            {
                //1 = short (5'6'')
                case 1:
                    setSearchTerms("outdoor", "camp", "sleep", "short");
                    //if polyester, cheap
                    //else its natural down and expensive
                    if(isPolyester)
                    {
                        setPrice(genRandomPrice(15, 35));
                        setProductName("Short Polyester Sleeping Bag");
                        setDescription("This is a polyster, short length sleeping bag intended for those with a height of up to 5'6''. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    else
                    {
                        setPrice(genRandomPrice(200, 300));
                        setProductName("Short Natural Down Sleeping Bag");
                        setDescription("This is a natural down, short length sleeping bag intended for those with a height of up to 5'6''. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    break;
                //2 = regulr (6'0'')
                case 2:
                    setSearchTerms("outdoor", "camp", "sleep", "regular");
                    if(isPolyester)
                    {
                        setPrice(genRandomPrice(20, 40));
                        setProductName("Regular Polyester Sleeping Bag");
                        setDescription("This is a polyster, regular length sleeping bag intended for those with a height of up to 6'0''. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    else
                    {
                        setPrice(genRandomPrice(250, 350));
                        setProductName("Regular Natural Down Sleeping Bag");
                        setDescription("This is a natural down, regular length sleeping bag intended for those with a height of up to 6'0''. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    break;
                //3 = long (6'6'')
                case 3:
                    setSearchTerms("outdoor", "camp", "sleep", "long");
                    if(isPolyester)
                    {
                        setPrice(genRandomPrice(25, 45));
                        setProductName("Long Polyester Sleeping Bag");
                        setDescription("This is a polyster, long length sleeping bag intended for those with a height of up to 6'6''. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    else
                    {
                        setPrice(genRandomPrice(300, 400));
                        setProductName("Long Natural Down Sleeping Bag");
                        setDescription("This is a natural down, long length sleeping bag intended for those with a height of up to 6'6''. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    break;
            };
            
            //max 10 of one type available on hand
            setQuantityAvailable(10);
        };

        int getSize()
        {
            return size;
        };

        bool getIsPolyester()
        {
            return isPolyester;
        };
};