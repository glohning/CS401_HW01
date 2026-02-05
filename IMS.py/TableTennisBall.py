from Product import Product

class TableTennisBall(Product):

    def __init__(self, sport, numInContainer):
        super().__init__()
        self.sport = sport
        self._numInContainer = numInContainer

        self.quantityAvailable = 25 

        self.productName =  "Table Tennis Balls " + str(numInContainer) + " pack"

        match(numInContainer):
            case 3:
                self.price = self.genRandomPrice(2, 3)
            case 6:
                self.price = self.genRandomPrice(4, 6)
            case 9:
                self.price = self.genRandomPrice(7, 9)
            
        self.description = "This is a pack of table tennis balls. \nIt contains " + str(numInContainer) + " balls. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are " + str(self.quantityAvailable) + " packs available in stock."
        self.searchTerms = "indoor", "table", "tennis", "ball"

    @property
    def numInContainer(self):
         return self._numInContainer