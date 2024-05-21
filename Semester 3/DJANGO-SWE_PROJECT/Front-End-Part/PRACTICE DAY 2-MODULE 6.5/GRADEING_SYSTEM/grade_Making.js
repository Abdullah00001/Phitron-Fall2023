let mark = prompt("Type your mark");

if (mark >= 90 && mark <= 100) {
  console.log("You Got A+");
} else if (mark >= 86 && mark <= 89) {
  console.log("You Got A-");
} else if (mark >= 82 && mark <= 85) {
  console.log("You Got B+");
} else if (mark >= 78 && mark <= 81) {
  console.log("You Got B");
} else if (mark >= 74 && mark <= 77) {
  console.log("You Got B-");
} else if (mark >= 70 && mark <= 73) {
  console.log("You Got C+");
} else if (mark >= 66 && mark <= 69) {
  console.log("You Got C");
} else if (mark >= 62 && mark <= 65) {
  console.log("You Got C-");
} else if (mark >= 58 && mark <= 61) {
  console.log("You Got D+");
} else if (mark >= 55 && mark <= 57) {
  console.log("You Got D");
} else if (mark < 55) {
  console.log("youre Fail\nDont Lose Your Hope\n");
} else {
  console.log("Invalid Input");
}
