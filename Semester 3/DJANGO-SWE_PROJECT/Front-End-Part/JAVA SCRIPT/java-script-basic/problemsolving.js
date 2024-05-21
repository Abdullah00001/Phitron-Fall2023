const array = [
  5, 12, 8, 20, 15, 6, 11, 3, 18, 9, 7, 14, 22, 19, 4, 17, 10, 1, 23, 16, 2, 13,
  21, 24,
];

/* array with filter method */

/* const findOdd = (array) => {
  const oddNumbers = array.filter((item) => {
    return item % 2 !== 0;
  });
  return oddNumbers;
}; */

/* shortend */
const findOdd = (array) => array.filter((item) => item % 2 !== 0);

console.log(...findOdd(array));

/* array with foreach method */

const findEven = (array) => {
  const evenarray = [];
  array.forEach((item) => {
    item % 2 === 0 && evenarray.push(item);
  });
  return evenarray;
};

console.log(...findEven(array));
