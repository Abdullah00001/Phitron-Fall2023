const searchField = document.getElementById("searchField");
const searchBtn = document.getElementById("searchBtn");
const mealsDirectory = document.getElementById("foodDirectory");
const modal = document.getElementById("modal");
const modalToggle = document.getElementById("modalMain");

searchBtn.addEventListener("click", () => {
  const searchValue = searchField.value;
  if (searchValue === "") {
    alert("Please Insert An Latter(A to Z)");
  } else {
    if (searchValue.length > 1) {
      alert("For Search You Cant Inseret More Than One Latter");
    } else {
      searchMeals(searchValue);
    }
  }
});

const searchMeals = async (searchVal) => {
  try {
    const fetchMeals = await fetch(
      `https://www.themealdb.com/api/json/v1/1/search.php?f=${searchVal}`
    );
    let res = await fetchMeals.json();
    mealsDirectory.innerHTML = "";
    if (res.meals) {
      res.meals.forEach((meal) => {
        mealsDirectory.innerHTML += `
            <div onClick={modalOpen(${meal.idMeal})} id="itemCard${
          meal.idMeal
        }" class="itemCard">
                <div class="innerItem">
                    <div style="width: 50%">
                        <img
                            class="itemImg"
                            src="${meal.strMealThumb}"
                            alt=""
                        />
                    </div>
                    <div style="width: 50%; padding: 5px">
                        <h1>${meal.strMeal.slice(0, 8)}</h1>
                        <p class="tag">${meal.strTags.slice(0, 5)}</p>
                        <p class="details">
                        ${meal.strInstructions.slice(0, 50)}...
                        </p>
                    </div>
                </div>
            </div>`;
      });
    } else {
      mealsDirectory.innerHTML =
        "<p style='text-align:center;font-size:30px;'>Not Found</p>";
    }
  } catch (err) {
    console.log("err:", err);
  }
};

const modalOpen = async (itemID) => {
  const mainModal = document.getElementById("modalMain");
  mainModal.style.display = "block";

  const res = await fetch(
    `https://www.themealdb.com/api/json/v1/1/lookup.php?i=${itemID}`
  );
  let resdata = await res.json();
  console.log(resdata);
  const info = resdata.meals[0];
  /* mainModal.innerHTML="" */
  mainModal.innerHTML += `
    <div class="modal" id="modal">
            <div class="img-icon">
                <div class="close-icon">
                <i onClick={closeToggle()} class="fa-solid fa-circle-xmark"></i>
              </div>
              <img
                src="${info.strMealThumb}"
                alt=""
                />
            </div>
            <h1>${info.strMeal}</h1>
            <p class="tag" style="margin-top: 5px">${info.strTags}</p>
            <p class="details" style="font-size: 16px; line-height: 20px">
            ${info.strInstructions}
            </p>
            <h4>ingradiant</h4>
            <ul>
              <li>${info.strIngredient1}</li>
              <li>${info.strIngredient2}</li>
              <li>${info.strIngredient3}</li>
              <li>${info.strIngredient4}</li>
              <li>${info.strIngredient5}</li>
              <li>${info.strIngredient6}</li>
              <li>${info.strIngredient7}</li>
              <li>${info.strIngredient8}</li>
              <li>${info.strIngredient9}</li>
            </ul>
          </div>
    `;
};

const closeToggle = () => {
  modalToggle.style.display = "none";
};
