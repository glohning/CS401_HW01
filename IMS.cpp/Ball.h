#include <iostream>
#include <random>
#include<cstdlib>
#include<ctime>
#include "Product.h"
using namespace std;
#pragma once

class Ball : public Product
{
    private:
        //sport = 1 is volleyball
        //sport = 2 is table tennis
        //sport = 4 is soccer

        int diameter;
        //true = synth leather
        //false = vinyl
        bool isSynthLeather;
        //table tennis balls only sold in quantities of 3, 6, or 12
        int numInContainer;
        

    public:
        Ball()
        {
            diameter = 0;
            isSynthLeather = false;
            numInContainer = 0;
        };

        //soccer and volleyball categories
        Ball(int sport, int diameter, bool isSynthLeather)
        {
            setSport(sport);
            this->diameter = diameter;
            this->isSynthLeather = isSynthLeather;

            //gen price and description based on material quality and sport
            switch(sport)
            {
                //volleyball
                case 1:
                    if(isSynthLeather)
                    {
                        setPrice(genRandomPrice(45, 75));
                        setProductName("Volleyball Ball");
                        setDescription("This is a synthetic leather volleyball. \nIt has a diameter of " + to_string(diameter) + "in. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are " + to_string(getQuantityAvailable()) + " available in stock.");
                        setSearchTerms("indoor", "ball", "leather", "volley");

                    }
                    else
                    {
                        setPrice(genRandomPrice(10, 20));
                        setProductName("Volleyball Ball");
                        setDescription("This is a vinyl volleyball. \nIt has a diameter of " + to_string(diameter) + "in. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are " + to_string(getQuantityAvailable()) + " available in stock.");
                        setSearchTerms("indoor", "ball", "volley", "vinyl");
                    }

                    //decide if volleyball product is on sale
                    if(genRandomPrice(0, 1) == 1)
                        setVolleyballSale(true);
                    break;
                //soccer
                case 4:
                    if(isSynthLeather)
                    {
                        setPrice(genRandomPrice(45, 75));
                        setProductName("Soccerball");
                        setDescription("This is a synthetic leather soccerball. \nIt has a diameter of " + to_string(diameter) + "in. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are " + to_string(getQuantityAvailable()) + " available in stock.");
                        setSearchTerms("outdoor", "soccer", "ball", "leather");
                    }
                    else
                    {
                        setPrice(genRandomPrice(10, 20));
                        setProductName("Soccerball");
                        setDescription("This is a vinyl soccerball. \nIt has a diameter of " + to_string(diameter) + "in. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are " + to_string(getQuantityAvailable()) + " available in stock.");
                        setSearchTerms("outdoor", "soccer", "ball", "vinyl");
                    }
                    break;
            };
                
            //gen quantity available up to 25
            setQuantityAvailable(25); 
        };

        //table tennis category
        Ball(int sport, int numInContainer)
        {
            setSport(sport);
            this->numInContainer = numInContainer;

            //gen quantity available up to 25
            setQuantityAvailable(25);

            setProductName("Table Tennis Balls " + to_string(numInContainer) + " pack");

            //gen price based on number sold together
            //set description
            switch (numInContainer)
            {
                case 3:
                    setPrice(genRandomPrice(2, 3));
                    break;
                case 6:
                    setPrice(genRandomPrice(4, 6));
                    break;
                case 9:
                    setPrice(genRandomPrice(7, 9));
                    break;
            };
            
            setDescription("This is a pack of table tennis balls. \nIt contains " + to_string(numInContainer) + " balls. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are " + to_string(getQuantityAvailable()) + " packs available in stock.");
            setSearchTerms("indoor", "table", "tennis", "ball");
        };

        int getDiameter()
        {
            return diameter;
        };

        bool getIsSynthLeather()
        {
            return isSynthLeather;
        };

        int getNumInContainer()
        {
            return numInContainer;
        };
};