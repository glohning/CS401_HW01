from Net import Net
from Ball import Ball
from Paddle import Paddle
from Table import Table
from Tent import Tent
from SleepingBag import SleepingBag
from TableTennisBall import TableTennisBall
from Product import Product

def offerAdditionalInfo():
    print("\nIf you would like to see more product information of a specific item please enter its row number now. \nOtherwise, you can enter 'back' to return to the main menu.\n")

    isTrue = True
    while(isTrue):
        browseUserInput = input()

        if(browseUserInput == "back"):
            isTrue = False
        else:
            try:
                itemNum = int(browseUserInput)
                count = 0

                if(0 < itemNum < 29):
                    for i in allProducts:
                        count = count + 1

                        if (count == itemNum):
                            i.printItem()
                            print(i.description + "\n")


                    print("If you would like to look at another item, enter it's number now. \nOtherwise, enter 'back' to return to the main menu.")
                else:
                    print("Input not recognized. Please try again.")
            except ValueError:
                print("Input not recognized. Please try again.")

isOnline = True
allProducts = [
    Net(1, 25, 56, True),
    Net(1, 89, 169, False),
    Net(4, 150, 156),

    Paddle(2, True),
    Paddle(2, False),

    Ball(1, 8, True),
    Ball(1, 8, False),
    Ball(4, 9, True),
    Ball(4, 9, False),
    TableTennisBall(2, 3),
    TableTennisBall(2, 6),
    TableTennisBall(2, 9),

    Table(2, 1),  
    Table(2, 2),
    Table(2, 3),
    Table(2, 4),

    Tent(3, True, 1),
    Tent(3, False, 1),
    Tent(3, True, 2),
    Tent(3, False, 2),
    Tent(3, True, 3),
    Tent(3, False, 3),

    SleepingBag(3, 1, True),
    SleepingBag(3, 1, False),
    SleepingBag(3, 2, True),
    SleepingBag(3, 2, False),
    SleepingBag(3, 3, True),
    SleepingBag(3, 3, False)
]

print("Welcome to Indoor and Outdoor Sports Commerce!")

while(isOnline):
    print("\nMAIN MENU\nPlease enter one of the following words to tell us how you would like to shop: \n")
    print("'search' will allow you to search our database.")
    print("'browse' will allow you to browse our database.")
    print("Alternatively, you can enter 'exit' to end your experience with us.")
    
    userInput = input()

    if (userInput == "search"):
        print("\nEnter a singular search term:")
        searchUserInput = input()
        print()

        searchUserInput = searchUserInput.lower()

        foundNothing = True
        count = 0

        for i in allProducts:
            count = count + 1

            for j in i.searchTerms:
                if (j in searchUserInput):
                    print("Product Number: " + str(count))
                    i.printItem()
                    foundNothing = False

        if (foundNothing):
            print("No such items (or related items) found. Double check your terminology or browse our full product list.")
        else: 
            offerAdditionalInfo()
    
    elif (userInput == "browse"): 
        count = 0
        for i in allProducts:
            count = count + 1
            print("Product Number: " + str(count))
            i.printItem()

        offerAdditionalInfo()

    elif (userInput == "exit"):
        print("\nGoodbye!")
        isOnline = False

    else:
        print("\nInput not recognized, please try again.")