from Product import Product

class Table(Product):
    material = 0

    def __init__(self, sport, material):
        super().__init__()
        self.sport = sport
        self._material = material

        self.quantityAvailable = 3
        
        match(material):
            case 1:
                self.price = self.genRandomPrice(100, 300) 
                self.productName = "Fiberboard Table for Table Tennis" 
                self.description = "This is a fiberboard table designed for INDOOR table tennis. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
                self.searchTerms = "indoor", "table", "tennis", "fiberboard" 
            case 2:
                self.price = self.genRandomPrice(200, 400) 
                self.productName = "Plywood Table for Table Tennis" 
                self.description = "This is a plywood table designed for INDOOR table tennis. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
                self.searchTerms = "indoor", "table", "tennis", "plywood" 
            case 3:
                self.price = self.genRandomPrice(500, 600) 
                self.productName = "Aluminum Table for Table Tennis" 
                self.description = "This is an aluminum table designed for OUTDOOR table tennis. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
                self.searchTerms = "outdoor", "table", "tennis", "aluminum" 
            case 4:
                self.price = self.genRandomPrice(500, 1000) 
                self.productName = "Weatherproof Laminate Table for Table Tennis" 
                self.description = "This is a weatherproof laminate table designed for OUTDOOR table tennis. \nIt's currently priced at $" + str(self.price) + ".00" + "\nThere are currently " + str(self.quantityAvailable) + " available in stock." 
                self.searchTerms = "outdoor", "table", "tennis", "laminate" 

        

    @property
    def material(self):
        return self._material