#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
#include "Product.h"
using namespace std;
#pragma once

class Table : public Product
{
    private:
        //1 = indoor fiberboard
        //2 = indoor plywood
        //3 = outdoor aluminum
        //4 = outdoor weatherproof laminate
        int material;

    public:
        Table()
        {
            material = 0;
        };

        Table(int sport, int material)
        {
            setSport(sport);
            this->material = material;
            
            switch (material)
            {
                //1 = indoor fiberboard
                case 1:
                    setPrice(genRandomPrice(100, 300));
                    setProductName("Fiberboard Table for Table Tennis");
                    setDescription("This is a fiberboard table designed for INDOOR table tennis. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    setSearchTerms("indoor", "table", "tennis", "fiberboard");
                    break;
                //2 = indoor plywood
                case 2:
                    setPrice(genRandomPrice(200, 400));
                    setProductName("Plywood Table for Table Tennis");
                    setDescription("This is a plywood table designed for INDOOR table tennis. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    setSearchTerms("indoor", "table", "tennis", "plywood");
                    break;
                //3 = outdoor aluminum
                case 3:
                    setPrice(genRandomPrice(500, 600));
                    setProductName("Aluminum Table for Table Tennis");
                    setDescription("This is an aluminum table designed for OUTDOOR table tennis. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    setSearchTerms("outdoor", "table", "tennis", "aluminum");
                    break;
                //4 = outdoor laminate
                case 4:
                    setPrice(genRandomPrice(500, 1000));
                    setProductName("Weatherproof Laminate Table for Table Tennis");
                    setDescription("This is a weatherproof laminate table designed for OUTDOOR table tennis. \nIt's currently priced at $" + to_string(getPrice()) + ".00" + "\nThere are currently " + to_string(getQuantityAvailable()) + " available in stock.");
                    setSearchTerms("outdoor", "table", "tennis", "laminate");
                    break;
            };
            
            //max 3 tables of one type available on hand
            setQuantityAvailable(3);
        };

        int getMaterial()
        {
            return material;
        };
};