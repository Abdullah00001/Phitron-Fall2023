const rawData = [
  {
    id: 1,
    itemName: "Blue Shoes",
    itemStock: 20,
    itemPrice: 59.99,
    itemRating: 4.5,
  },
  {
    id: 2,
    itemName: "Red Shirt",
    itemStock: 15,
    itemPrice: 29.99,
    itemRating: 4.2,
  },
  {
    id: 3,
    itemName: "Green Jacket",
    itemStock: 8,
    itemPrice: 79.99,
    itemRating: 4.8,
  },
  {
    id: 4,
    itemName: "Yellow Pants",
    itemStock: 10,
    itemPrice: 49.99,
    itemRating: 4.3,
  },
  {
    id: 5,
    itemName: "Small Gloves",
    itemStock: 25,
    itemPrice: 19.99,
    itemRating: 4.6,
  },
  {
    id: 6,
    itemName: "Large Dress",
    itemStock: 12,
    itemPrice: 99.99,
    itemRating: 4.7,
  },
  {
    id: 7,
    itemName: "Fast Socks",
    itemStock: 30,
    itemPrice: 9.99,
    itemRating: 4.4,
  },
  {
    id: 8,
    itemName: "Slow Hat",
    itemStock: 5,
    itemPrice: 39.99,
    itemRating: 4.1,
  },
  {
    id: 9,
    itemName: "Green Shoes",
    itemStock: 18,
    itemPrice: 69.99,
    itemRating: 4.5,
  },
  {
    id: 10,
    itemName: "Blue Jacket",
    itemStock: 14,
    itemPrice: 89.99,
    itemRating: 4.8,
  },
  {
    id: 11,
    itemName: "Red Pants",
    itemStock: 22,
    itemPrice: 59.99,
    itemRating: 4.3,
  },
  {
    id: 12,
    itemName: "Yellow Shirt",
    itemStock: 17,
    itemPrice: 29.99,
    itemRating: 4.2,
  },
  {
    id: 13,
    itemName: "Large Shoes",
    itemStock: 10,
    itemPrice: 79.99,
    itemRating: 4.6,
  },
  {
    id: 14,
    itemName: "Small Jacket",
    itemStock: 8,
    itemPrice: 49.99,
    itemRating: 4.7,
  },
  {
    id: 15,
    itemName: "Fast Dress",
    itemStock: 13,
    itemPrice: 99.99,
    itemRating: 4.4,
  },
];
console.log(`=================================================`);
console.log(`ID\tProduct Name\tPrice\tRatings\tQuantity`);
console.log(`=================================================`);
rawData.forEach((info) => {
  console.log(
    `${info.id}\t${info.itemName}\t${info.itemPrice}\t${info.itemRating}\t${info.itemStock}`
  );
});
