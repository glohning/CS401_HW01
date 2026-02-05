import random

class Product():

    def __init__(self):
        self._sport = 0
        self._price = 0
        self._quantityAvailable = 0
        self._productName = ""
        self._description = ""
        self._searchTerms = []
        self._volleyballSale = False

    @property
    def sport(self):
        return self._sport
    
    @sport.setter
    def sport(self, value):
        self._sport = value

    @property
    def price(self):
        return self._price

    @price.setter
    def price(self, value):
        self._price = value

    @property
    def quantityAvailable(self):
        return self._quantityAvailable

    @quantityAvailable.setter
    def quantityAvailable(self, value):
        self._quantityAvailable = value

    @property
    def productName(self):
        return self._productName

    @productName.setter
    def productName(self, value):
        self._productName = value

    @property
    def description(self):
        return self._description

    @description.setter
    def description(self, value):
        self._description = value

    @property
    def searchTerms(self):
        return self._searchTerms

    @searchTerms.setter
    def searchTerms(self, value):
        self._searchTerms = value

    @property
    def volleyballSale(self):
        return self._volleyballSale

    @volleyballSale.setter
    def volleyballSale(self, value):
        self._volleyballSale = value

    def genRandomPrice(self, min, max):
        return random.randint(min, max)
    
    def printItem(self):
        if(self.volleyballSale):
            print(self.productName + " ---- $" + str(self.price))
            print("WINTER SALE!\nThis product is currently 15% off!" + "\n")
        else:
            print(self.productName + " ---- $" + str(self.price) + "\n")