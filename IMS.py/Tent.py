from Product import Product

class Tent(Product):
    isCompact = False
    durability = 0
    waterResistance = 0 
    windResistance = 0

    def __init__(self, sport, isCompact,  durability):
        super().__init__()
        self.sport = sport
        self._isCompact = isCompact 
        self._durability = durability
        self.quantityAvailable = 5  

        match(durability):
            case 1:
                waterResistance = 2000 
                windResistance = 25 
                self.searchTerms = "outdoor", "camping", "tent", "nylon" 
                if(isCompact):
                    self.price = self.genRandomPrice(30, 60) 
                    self.productName = "1-2 Person Nylon Tent" 
                    self.description = "This is a nylon tent intended for 1-2 people. \nIt has a hydrostatic head rating of " + str(waterResistance) + ".\nIt's able to resist winds up to " + str(windResistance)+ "mph. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
                else:
                    self.price = self.genRandomPrice(80, 115) 
                    self.productName = "3-4 Person Nylon Tent" 
                    self.description = "This is a nylon tent intended for 3-4 people. \nIt has a hydrostatic head rating of " + str(waterResistance) + ".\nIt's able to resist winds up to " + str(windResistance)+ "mph. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
            case 2:
                waterResistance = 1500 
                windResistance = 60 
                self.searchTerms = "outdoor", "camping", "tent", "canvas" 
                if(isCompact):
                    self.price = self.genRandomPrice(80, 100) 
                    self.productName = "1-2 Person Canvas Tent" 
                    self.description = "This is a canvas tent intended for 1-2 people. \nIt has a hydrostatic head rating of " + str(waterResistance) + ".\nIt's able to resist winds up to " + str(windResistance)+ "mph. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
                else:
                    self.price = self.genRandomPrice(250, 400) 
                    self.productName = "3-4 Person Canvas Tent" 
                    self.description = "This is a canvas tent intended for 3-4 people. \nIt has a hydrostatic head rating of " + str(waterResistance) + ".\nIt's able to resist winds up to " + str(windResistance)+ "mph. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
            case 3:
                waterResistance = 3000 
                windResistance = 40 
                self.searchTerms = "outdoor", "camping", "tent", "vinyl" 
                if(isCompact):
                    self.price = self.genRandomPrice(50, 95) 
                    self.productName = "1-2 Person Vinyl Tent" 
                    self.decription = "This is a vinyl tent intended for 1-2 people. \nIt has a hydrostatic head rating of " + str(waterResistance) + ".\nIt's able to resist winds up to " + str(windResistance)+ "mph. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
                else:
                    self.price = self.genRandomPrice(100, 200) 
                    self.productName = "3-4 Person Vinyl Tent" 
                    self.decription = "This is a vinyl tent intended for 3-4 people. \nIt has a hydrostatic head rating of " + str(waterResistance) + ".\nIt's able to resist winds up to " + str(windResistance)+ "mph. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
        
        

    @property
    def durability(self):
        return self._durability 

    @property
    def isCompact(self):
        return self._isCompact 