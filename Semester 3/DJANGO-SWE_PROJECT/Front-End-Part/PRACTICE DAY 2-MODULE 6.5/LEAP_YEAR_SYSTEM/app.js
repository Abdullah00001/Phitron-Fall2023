const year = prompt("Type Year For Check 'Is Leap Year Or Not'");

if (year % 400 === 0 || (year % 4 === 0 && year % 100 !== 0)) {
  console.log(`${year} Is Leap year`);
} else {
  console.log(`${year} Is Not A Leap year`);
}
