#pragma once

#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;


class Product
{
    private:
        //1 = volleyball
        //2 = table tennis
        //3 = camping
        //4 = soccer
        int sport;
        int price;
        int quantityAvailable;
        string productName;
        string description;
        string searchTerms[4];
        bool volleyballSale;
        

    public:
        Product()
        {
            sport = 0;
            price = 0;
            quantityAvailable = 0;
            productName = "empty";
            searchTerms[0] = "";
            searchTerms[1] = "";
            searchTerms[2] = "";
            searchTerms[3] = "";
            volleyballSale = false;
        };

        int genRandomPrice(int min, int max)
        {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> distrib(min, max);

            return distrib(gen);
        };

        void setQuantityAvailable(int quantityAvailable)
        {
            this->quantityAvailable = quantityAvailable;
        };

        int getQuantityAvailable()
        {
            return quantityAvailable;
        };

        void setPrice(int price)
        {
            this->price = price;
        };

        int getPrice()
        {
            return price;
        };

        void setSport(int sport)
        {
            this->sport = sport;
        };

        int getSport()
        {
            return sport;
        };

        void setProductName(string productName)
        {
            this->productName = productName;
        };

        string getProductName()
        {
            return productName;
        };

        void setDescription(string description)
        {
            this->description = description;
        };
        
        string getDescription()
        {
            return description;
        };
        
        void setSearchTerms(string s1, string s2, string s3, string s4)
        {
            searchTerms[0] = s1;
            searchTerms[1] = s2;
            searchTerms[2] = s3;
            searchTerms[3] = s4;
        }

        string getSearchTerm(int num)
        {
            return searchTerms[num];
        }

        void setVolleyballSale(bool volleyballSale)
        {
            this->volleyballSale = volleyballSale;
        }

        bool getVolleyballSale()
        {
            return volleyballSale;
        }

        void printDescription()
        {
            cout << endl << getDescription() << endl << endl;
        };

        void printItem()
        {
            cout << getProductName() << " ---- $" << getPrice() << endl;
            
            if(getVolleyballSale() == true)
                cout << "WINTER SALE!" << endl << "This product is currently 15%% off!" << endl;
        };
};