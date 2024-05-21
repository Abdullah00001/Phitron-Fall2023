const data = [
  {
    id: 1,
    name: "John Doe",
    age: 30,
    location: "New York",
    balance: 2500.75,
  },
  {
    id: 2,
    name: "Alice Smith",
    age: 28,
    location: "Los Angeles",
    balance: 3500.2,
  },
  {
    id: 3,
    name: "Bob Johnson",
    age: 35,
    location: "Chicago",
    balance: 1800.5,
  },
  {
    id: 4,
    name: "Emma Brown",
    age: 25,
    location: "Houston",
    balance: 4200.8,
  },
  {
    id: 5,
    name: "Michael Wilson",
    age: 40,
    location: "Miami",
    balance: 3100.0,
  },
];

/* const expectedUser = data.find((userobj) => userobj.id == 3);

console.log(expectedUser); */

for (let i = 0; i < data.length; i++) {
  const userobj = data[i];
  if (userobj.id == 3) {
    console.log(userobj);
  }
}
