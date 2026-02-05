#include <iostream>
#include <stdlib.h>
#include<bits/stdc++.h>
#include <string>
#include "Net.h"
#include "Ball.h"
#include "Paddle.h"
#include "Table.h"
#include "Tent.h"
#include "SleepingBag.h"
#include "Product.h"
using namespace std;

bool isOnline = true;
string userInput;
string browseUserInput;
string searchUserInput;
Product *allProducts[28];

void initializeDatabase()
{
    //volleyball training
    allProducts[0] =  new Net(1, 25, 56, true);
    //volleyball not training
    allProducts[1] =  new Net(1, 89, 169, false);
    //soccer
    allProducts[2] =  new Net(4, 150, 156);

    //paddles straight handle
    allProducts[3] =  new Paddle(2, true);
    //paddles flared handle
    allProducts[4] =  new Paddle(2, false);

    //volleyballs synth leather
    allProducts[5] =  new Ball(1, 8, true);
    //volleyballs vinyl
    allProducts[6] =  new Ball(1, 8, false);
    //soccerballs synth leather
    allProducts[7] =  new Ball(4, 9, true);
    //soccerballs vinyl
    allProducts[8] =  new Ball(4, 9, false);
    //table tennis balls 3 packs
    allProducts[9] =  new Ball(2, 3);
    //table tennis balls 6 packs
    allProducts[10] =  new Ball(2, 6);
    //table tennis balls 12 packs
    allProducts[11] =  new Ball(2, 9);

    //table tennis tables indoor fiberboard
    allProducts[12] =  new Table(2, 1);
    //table tennis tables indoor plywood
    allProducts[13] =  new Table (2, 2);
    //table tennis tables outdoor aluminum
    allProducts[14] =  new Table(2, 3);
    //table tennis tables outdoor weatherproof laminate
    allProducts[15] =  new Table(2, 4);

    //Tents Nylon 1 - 2 people
    allProducts[16] =  new Tent(3, true, 1);
    //Tents Nylon 2 - 4 people
    allProducts[17] =  new Tent(3, false, 1);
    //Tents Canvas 1 - 2 people
    allProducts[18] =  new Tent(3, true, 2);
    //Tents Canvas 2 - 4 people
    allProducts[19] =  new Tent(3, false, 2);
    //Tents Vinyl 1 - 2 people
    allProducts[20] =  new Tent(3, true, 3);
    //Tents Vinyl 2 - 4 people
    allProducts[21] =  new Tent(3, false, 3);

    //sleeping bags short polyester
    allProducts[22] =  new SleepingBag(3, 1, true);
    //sleeping bags short natural down
    allProducts[23] =  new SleepingBag(3, 1, false);
    //sleeping bags regular polyester
    allProducts[24] =  new SleepingBag(3, 2, true);
    //sleeping bags regular natural down
    allProducts[25] =  new SleepingBag(3, 2, false);
    //sleeping bags long polyester
    allProducts[26] =  new SleepingBag(3, 3, true);
    //sleeping bags long natural down
    allProducts[27] =  new SleepingBag(3, 3, false);
};

//loop to get additional information on specific product for user
void offerAdditionalInfo()
{
    cout << endl << "If you would like to see more product information of a specific item please enter its row number now. " << endl;
    cout << "Otherwise, you can enter 'back' to return to the main menu." << endl;

    bool isTrue = true;
    while(isTrue)
    {    

        try
        {
            cin >> browseUserInput;

            if(browseUserInput == "back")
            {
                isTrue = false;
            }
            else
            {
                int itemNum = stoi(browseUserInput);

                if((itemNum > 0) & (itemNum != 0) & (itemNum < 29))
                {
                    allProducts[itemNum - 1]->printDescription();
                    cout << "If you would like to look at another item, enter it's number now. \nOtherwise, enter 'back' to return to the main menu." << endl;
                }
                else
                    cout << "Input not recognized. Please try again." << endl;
            }
                        
        }
        catch (...)
        {
            cout << "Input not recognized. Please try again." << endl;
        }
    };
}

int main()
{
    initializeDatabase();

    cout << endl << "Welcome to Indoor and Outdoor Sports Commerce!" << endl;
    
    while(isOnline)
    {
        cout << endl << "MAIN MENU" << endl << "Please enter one of the following words to tell us how you would like to shop: " << endl << endl;
        cout << "'search' will allow you to search our database." << endl;
        cout << "'browse' will allow you to browse our database." << endl;
        cout << "Alternatively, you can enter 'exit' to end your experience with us." << endl;
        cin >> userInput;
        if ((userInput == "search"))
            {
                cout << "Enter an singular search term." << endl;
                cin >> searchUserInput;

                //to lowercase
                transform(searchUserInput.begin(), searchUserInput.end(), searchUserInput.begin(), ::tolower);

                //returned at least one item check
                bool foundNothing = true;
                //products
                for(int i = 0; i < 28; i++)
                {
                    //search terms for each product
                    for(int j = 0; j < 4; j++)
                    {   
                        //compare input to search term, if a match print
                        if(searchUserInput.find(allProducts[i]->getSearchTerm(j)) != string::npos)
                        {
                            cout << endl << "Product name: ";
                            allProducts[i]->printItem();
                            cout << "Product number: " << i + 1 << endl;
                            foundNothing = false;
                        }
                    }
                }

                if (foundNothing)
                    cout << endl << "No such items (or related items) found. Double check your terminology or browse our full product list." << endl;
                else 
                    offerAdditionalInfo();
            }
        else if ((userInput == "browse"))
            {   

                for(int i = 0; i < 28; i++)
                {
                    cout << endl << "Product name: ";
                    allProducts[i]->printItem();
                    cout << "Product number: " << i << endl;
                };

                offerAdditionalInfo();
            }
        else if ((userInput == "exit"))
            {
                cout << "Goodbye!" << endl;
                isOnline = false;
            }
        else
            cout << "Input not recognized, please try again." << endl;
    };

    return -1;
}