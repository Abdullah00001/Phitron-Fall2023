function monthlySvaings(arr, cost) {
  let totalIncome = 0;

  if (Array.isArray(arr) && typeof cost === "number") {
    for (let i = 0; i < arr.length; i++) {
      if (arr[i] >= 3000) {
        totalIncome += arr[i] * 0.8;
      } else {
        totalIncome += arr[i];
      }
    }
    totalIncome -= cost;
    if (totalIncome >= 0) {
      return totalIncome;
    } else {
      return "earn more";
    }
  } else return "invalid input";
}

const incomes = [1000, 2000, 3000];
let cost = 5400;
console.log(monthlySvaings(incomes, cost));
