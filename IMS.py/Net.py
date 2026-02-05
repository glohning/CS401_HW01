from Product import Product

class Net(Product):
    height = 0
    width = 0
    isTraining = False

    def __init__(self, sport, height, width, isTraining=None):
        super().__init__()
        self.sport = sport
        self._height = height
        self._width = width
        self._isTraining = isTraining

        if isTraining is None:
            self.price = self.genRandomPrice(250, 400)
            self.quantityAvailable = 25
            self.productName = str(width) + "x" + str(height) + " Soccer Goal/Net"
            self.description = "This is a soccer goal (or net). \nIt has a height of " + str(height) + " and a width of " + str(width) + ".\nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock."
            self.searchTerms = "outdoor", "soccer", "goal", "net"
        else:
            self.quantityAvailable = 12

            if(isTraining):
                self.productName = str(width) +  "x" + str(height) + " Training Volleyball Net"
                self.price = self.genRandomPrice(100, 250)
                self.description = "This is a TRAINING volleyball net. \nIt has a height of " + str(height) + " and a width of " + str(width) + ".\nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock."
                self.searchTerms = "indoor", "volley", "training", "net"
            else:
                self.productName = str(width) +  "x" + str(height) + " Volleyball Net"
                self.price = self.genRandomPrice(350, 600)
                self.description = "This is NOT a training volleyball net. \nIt has a height of " + str(height) + " and a width of " + str(width) + ".\nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock."
                self.searchTerms = "indoor", "volley", "net", "professional"

            if(self.genRandomPrice(0, 1) == 1):
                self.volleyballSale = True

    @property
    def isTraining(self):
        return self._isTraining

    @property
    def width(self):
        return self._width

    @property
    def getHeight(self):
        return self._height