const category_section = document.getElementById("category");

const find_category = async () => {
  try {
    const fetch_category = await fetch(
      "https://fakestoreapi.com/products/categories"
    );
    let res = await fetch_category.json();
    if (res) {
      res.forEach((category) => {
        category_section.innerHTML += `
                <a class="px-4 py-3 rounded bg-slate-300 font-medium font-sans" href="">${category}</a>
                `;
      });
    } else {
      category_section.innerHTML += `
            <p>no data found</p>
            `;
    }
  } catch (err) {
    console.log("err", err);
  }
};

find_category()

const div=document.createElement('div')
category_section.appendChild(div)