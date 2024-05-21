let friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];
for (let i = 0; i < friends.length; i++) {
  for (let j = i + 1; j < friends.length; j++) {
    if (friends[i].length < friends[j].length) {
      let temp = friends[i];
      friends[i] = friends[j];
      friends[j] = temp;
    }
  }
}

const longestName = friends[0];

console.log(longestName);
