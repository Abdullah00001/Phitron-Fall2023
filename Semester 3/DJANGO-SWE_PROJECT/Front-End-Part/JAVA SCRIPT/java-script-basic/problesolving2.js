const names = [
  "John",
  "Emma",
  "Michael",
  "Sophia",
  "William",
  "Olivia",
  "James",
  "Ava",
  "Oliver",
  "Isabella",
  "Benjamin",
  "Mia",
  "Elijah",
  "Charlotte",
  "Lucas",
  "Amelia",
  "Alexander",
  "Harper",
  "Henry",
  "Evelyn",
  "Jacob",
  "Abigail",
  "Daniel",
  "Emily",
  "Matthew",
];

/* const findBiigestName = (array) =>
  array.filter((item) => {
    let itemname = "";
    itemname.length;
    if (item.length > itemname.length) {
      itemname = item;
    }
    return itemname;
  });

console.log(findBiigestName(names)); */

const findBiigestName = (array) => {
  let bigName = "";
  array.forEach((item) => {
    if (bigName.length < item.length) bigName = item;
  });
  return bigName;
};

console.log(findBiigestName(names));
