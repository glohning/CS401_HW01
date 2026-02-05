from Product import Product

class Paddle(Product):
    isFlared = False
    
    def __init__(self, sport, isFlared):
        super().__init__()
        self.sport = sport
        self._isFlared = isFlared 

        self.price = self.genRandomPrice(25, 40) 

        self.quantityAvailable = 25

        if(isFlared):
            self.productName =  "Flared Table Tennis Paddle" 
            self.description =  "This is a table tennis paddle with a flared handle. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
            self.searchTerms =  "indoor", "tennis", "paddle", "flare"
        else:
            self.productName =  "Straight Table Tennis Paddle" 
            self.description =  "This is a table tennis paddle with a straight handle. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
            self.searchTerms =  "indoor", "tennis", "paddle", "straight" 

    @property
    def isFlared(self):
        return self._isFlared
    