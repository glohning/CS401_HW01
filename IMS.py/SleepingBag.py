from Product import Product

class SleepingBag(Product):
    size = 0
    isPolyester = False

    def __init__(self, sport, size, isPolyester):
        super().__init__()
        self.sport = sport
        self._size = size
        self._isPolyester = isPolyester
        self.quantityAvailable = 10
        
        match(size):
            case 1:
                self.searchTerms = "outdoor", "camp", "sleep", "short"

                if(isPolyester):
                     self.price = self. genRandomPrice(15, 35)
                     self.productName = "Short Polyester Sleeping Bag"
                     self.description = "This is a polyster, short length sleeping bag intended for those with a height of up to 5'6''. \nIt's currently priced at $" + str(self. price) + ".00" + "\nThere are currently " + str(self. quantityAvailable) + " available in stock."
                else:
                     self.price = self. genRandomPrice(200, 300)
                     self.productName = "Short Natural Down Sleeping Bag"
                     self.description = "This is a natural down, short length sleeping bag intended for those with a height of up to 5'6''. \nIt's currently priced at $" + str(self. price) + ".00" + "\nThere are currently " + str(self. quantityAvailable) + " available in stock." 
            case 2:
                self.searchTerms = "outdoor", "camp", "sleep", "regular" 

                if(isPolyester):
                     self.price = self. genRandomPrice(20, 40) 
                     self.productName = "Regular Polyester Sleeping Bag" 
                     self.description = "This is a polyster, regular length sleeping bag intended for those with a height of up to 6'0''. \nIt's currently priced at $" + str(self. price) + ".00" + "\nThere are currently " + str(self. quantityAvailable) + " available in stock." 
                else:
                     self.price = self. genRandomPrice(250, 350) 
                     self.productName = "Regular Natural Down Sleeping Bag" 
                     self.description = "This is a natural down, regular length sleeping bag intended for those with a height of up to 6'0''. \nIt's currently priced at $" + str(self. price) + ".00" + "\nThere are currently " + str(self. quantityAvailable) + " available in stock." 
            case 3:
                self.searchTerms = "outdoor", "camp", "sleep", "long" 

                if(isPolyester):
                     self.price = self. genRandomPrice(25, 45) 
                     self.productName = "Long Polyester Sleeping Bag" 
                     self.description = "This is a polyster, long length sleeping bag intended for those with a height of up to 6'6''. \nIt's currently priced at $" + str(self. price) + ".00" + "\nThere are currently " + str(self. quantityAvailable) + " available in stock." 
                else:
                     self.price = self. genRandomPrice(300, 400) 
                     self.productName = "Long Natural Down Sleeping Bag" 
                     self.description = "This is a natural down, long length sleeping bag intended for those with a height of up to 6'6''. \nIt's currently priced at $" + str(self. price) + ".00" + "\nThere are currently " + str(self. quantityAvailable) + " available in stock." 
        
        