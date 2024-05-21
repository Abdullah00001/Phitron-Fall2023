const fastMenu = [
  { id: 1, typeName: "Cheeseburger", stock: 30, price: 5.99, rating: 4.5 },
  { id: 2, typeName: "French Fries", stock: 40, price: 2.99, rating: 4.8 },
  { id: 3, typeName: "Chicken Nuggets", stock: 25, price: 4.99, rating: 4.3 },
  { id: 4, typeName: "Hot Dog", stock: 20, price: 3.49, rating: 4.2 },
  { id: 5, typeName: "Pizza Slice", stock: 35, price: 3.99, rating: 4.6 },
  { id: 6, typeName: "Taco", stock: 25, price: 3.99, rating: 4.7 },
  { id: 7, typeName: "Onion Rings", stock: 20, price: 4.49, rating: 4.4 },
  { id: 8, typeName: "Milkshake", stock: 15, price: 4.99, rating: 4.5 },
  { id: 9, typeName: "Chicken Sandwich", stock: 30, price: 6.49, rating: 4.6 },
  { id: 10, typeName: "Salad", stock: 15, price: 5.99, rating: 4.2 },
];

const product = fastMenu.map((item) => item);

console.log(...product);
