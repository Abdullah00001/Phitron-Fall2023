const arr = [73, 19, 46, 82, 35, 64, 21, 57, 88, 14, 39, 77, 8, 53, 91];

for (let i = 0; i < arr.length; i++) {
  for (let j = i + 1; j < arr.length; j++) {
    if (arr[i] < arr[j]) {
      const temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
}

for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}