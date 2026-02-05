#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Product.h"
using namespace std;
#pragma once

class Tent : public Product
{
    private:
        //true = 1-2 person
        //false = 2-4 person
        bool isCompact;
        /* 
        pricing research
        1  = Nylon
            2 person $30 - $80
            4 person 60 - 115
        2 = Canvas
            2 person 50 - 100
            4 person 250 - 400
        3 = Vinyl
            2 person 40 - 90
            4 person 100 - 200 
        */
        int durability;
        /* 
        ratings research
        1  = Nylon
            rain 2000mm (hydrostatic head rating)
            wind up to 25mph
        2 = Canvas
            rain 1500mm
            wind up to 60mph
        3 = Vinyl
            rain  3000mm
            wind up to 40 mph
        */
        int waterResistance;
        int windResistance;


    public:
        Tent()
        {
            isCompact = false;
            durability = 0;
            waterResistance = 0;
            windResistance = 0;
        };

        Tent(int sport, bool isCompact, int durability)
        {
            setSport(sport);
            this->isCompact = isCompact;
            this->durability = durability;

            switch(durability)
            {
                //Nylon 
                //2 person 30-60
                //4 person 80 - 115
                //rain 2000mm (hydrostatic head rating)
                //wind up to 25mph
                case 1:
                    waterResistance = 2000;
                    windResistance = 25;
                    setSearchTerms("outdoor", "camping", "tent", "nylon");
                    if(isCompact)
                    {
                        setPrice(genRandomPrice(30, 60));
                        setProductName("1-2 Person Nylon Tent");
                        setDescription("This is a nylon tent intended for 1-2 people. \nIt has a hydrostatic head rating of " + to_string(waterResistance) + ".\nIt's able to resist winds up to " + to_string(windResistance)+ "mph. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    else
                    {
                        setPrice(genRandomPrice(80, 115));
                        setProductName("3-4 Person Nylon Tent");
                        setDescription("This is a nylon tent intended for 3-4 people. \nIt has a hydrostatic head rating of " + to_string(waterResistance) + ".\nIt's able to resist winds up to " + to_string(windResistance)+ "mph. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    break;
                //Canvas
                //2 person 50 - 100
                //4 person 250 - 400
                //rain 1500mm
                //wind up to 60mph
                case 2:
                    waterResistance = 1500;
                    windResistance = 60;
                    setSearchTerms("outdoor", "camping", "tent", "canvas");
                    if(isCompact)
                    {
                        setPrice(genRandomPrice(80, 100));
                        setProductName("1-2 Person Canvas Tent");
                        setDescription("This is a canvas tent intended for 1-2 people. \nIt has a hydrostatic head rating of " + to_string(waterResistance) + ".\nIt's able to resist winds up to " + to_string(windResistance)+ "mph. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    else
                    {
                        setPrice(genRandomPrice(250, 400));
                        setProductName("3-4 Person Canvas Tent");
                        setDescription("This is a canvas tent intended for 3-4 people. \nIt has a hydrostatic head rating of " + to_string(waterResistance) + ".\nIt's able to resist winds up to " + to_string(windResistance)+ "mph. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    break;
                //Vinyl
                //2 person 50 - 95
                //4 person 100 - 200
                //rain  3000mm
                //wind up to 40 mph
                case 3:
                    waterResistance = 3000;
                    windResistance = 40;
                    setSearchTerms("outdoor", "camping", "tent", "vinyl");
                    if(isCompact)
                    {
                        setPrice(genRandomPrice(50, 95));
                        setProductName("1-2 Person Vinyl Tent");
                        setDescription("This is a vinyl tent intended for 1-2 people. \nIt has a hydrostatic head rating of " + to_string(waterResistance) + ".\nIt's able to resist winds up to " + to_string(windResistance)+ "mph. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    else
                    {
                        setPrice(genRandomPrice(100, 200));
                        setProductName("3-4 Person Vinyl Tent");
                        setDescription("This is a vinyl tent intended for 3-4 people. \nIt has a hydrostatic head rating of " + to_string(waterResistance) + ".\nIt's able to resist winds up to " + to_string(windResistance)+ "mph. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    }
                    break;
            };
            
            //max 5 of one type available on hand
            setQuantityAvailable(5);
        };

        int getDurability()
        {
            return durability;
        };

        bool getIsCompact()
        {
            return isCompact;
        };

        int getWindResistance()
        {
            return windResistance;
        };

        int getWaterResistance()
        {
            return waterResistance;
        };
};