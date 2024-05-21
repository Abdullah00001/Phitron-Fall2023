class Book:
    def __init__(self,author,publishedYear,publication):
        self.author=author
        self.publishedYear=publishedYear
        self.publication=publication

class Physics(Book):
    def __init__(self,part, author, publishedYear, publication):
        self.part=part
        super().__init__(author, publishedYear, publication)
    
    def viewPhy(self):
        return f'{self.part}'