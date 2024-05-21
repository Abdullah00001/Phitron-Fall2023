const numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

const distinctNumbers = [];

for (let i = 0; i < numbers.length; i++) {
  let flag = true;
  for (let j = 0; j < distinctNumbers.length; j++) {
    if (numbers[i] === distinctNumbers[j]) {
      flag = false;
      break;
    }
  }
  if (flag) distinctNumbers.push(numbers[i]);
}

for (let i = 0; i < distinctNumbers.length; i++) {
  console.log(distinctNumbers[i]);
}
