from Product import Product

class Ball(Product):
    diameter = 0
    isSynthLeather = False
    numInContainer = 0

    def __init__(self, sport, diameter, isSynthLeather):
        super().__init__()
        self.sport = sport
        self._diameter = diameter
        self._diameter = isSynthLeather

        self.quantityAvailable = 25

        match(sport):
            case 1:
                if(isSynthLeather):
                    self.price = self.genRandomPrice(45, 75)
                    self.productName =  "Volleyball"
                    self.description =  "This is a synthetic leather volleyball. \nIt has a diameter of " + str(diameter) + "in. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are " + str(self.quantityAvailable) + " available in stock."
                    self.searchTerms =  "indoor", "ball", "leather", "volley"

                else:
                    self.price = self.genRandomPrice(10, 20)
                    self.productName =  "Volleyball"
                    self.description =  "This is a vinyl volleyball. \nIt has a diameter of " + str(diameter) + "in. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are " + str(self.quantityAvailable) + " available in stock."
                    self.searchTerms =  "indoor", "ball", "volley", "vinyl"
                    
                    if(self.genRandomPrice(0, 1) == 1):
                        self.volleyballSale = True
            case 4:
                if(isSynthLeather):
                    self.price = self.genRandomPrice(45, 75)
                    self.productName =  "Soccerball"
                    self.description =  "This is a synthetic leather soccerball. \nIt has a diameter of " + str(diameter) + "in. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are " + str(self.quantityAvailable) + " available in stock."
                    self.searchTerms =  "outdoor", "soccer", "ball", "leather"
                else:
                    self.price = self.genRandomPrice(10, 20)
                    self.productName =  "Soccerball"
                    self.description =  "This is a vinyl soccerball. \nIt has a diameter of " + str(diameter) + "in. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are " + str(self.quantityAvailable) + " available in stock."
                    self.searchTerms =  "outdoor", "soccer", "ball", "vinyl"

    @property
    def diameter(self):
        return self._diameter

    @property
    def isSynthLeather(self):
        return self._diameter