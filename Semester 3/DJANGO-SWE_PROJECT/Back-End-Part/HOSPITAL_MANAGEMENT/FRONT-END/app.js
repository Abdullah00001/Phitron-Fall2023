const slider_contents = document.getElementById("slider-content");
const doctors_list = document.getElementById("doctors-list");
const designation_ul = document.getElementById("designation-ul");
const spcialization_ul = document.getElementById("spcialization-ul");

const get_slider_content = async () => {
  const sliders = await fetch("https://testing-8az5.onrender.com/services/");
  let response = await sliders.json();
  console.log(response);
  response.forEach((slider) => {
    slider_contents.innerHTML += `
        <li class="slide-visible">
            <div class="card shadow h-100">
                <div class="ratio ratio-16x9">
                    <img src="${slider.image}" class="card-img-top" loading="lazy"
                        alt="...">
                </div>
                <div class="card-body p-3 p-xl-5">
                    <h3 class="card-title h5">${slider.name}</h3>
                    <p class="card-text">${slider.description}</p>
                    <div><a href="#" class="btn btn-primary">Go somewhere</a>
                    </div>
                </div>
            </div>
        </li>
        `;
  });
};

const get_Doctors_List = async (search_value) => {
  document.getElementById("doctors-list").innerHTML = "";
  const fetch_doctors = await fetch(
    `https://smart-care.onrender.com/doctor/list/?search=${search_value}`
  );
  let doctors = await fetch_doctors.json();
  console.log(doctors.results);
  if (doctors.results === null) {
    doctors_list.innerHTML += `
    <h1>No Data Found</h1>
    `;
  }
  doctors.results.forEach((doctor) => {
    doctors_list.innerHTML += `
        <div class="max-w-xs mx-auto p-6 rounded-2xl shadow-lg" style="width: 273px;">
            <div class="flex justify-center mb-4">
                <img src="${doctor.image}" alt="Profile Image"
                    class="rounded-full w-[112.6px] h-[112.6px] object-cover">
            </div>
            <div class="text-center">
                <h2 class="font-bold text-[23px] leading-[38px]">${
                  doctor.user
                }</h2>
                <p class="font-bold text-[15px] leading-[20px] tracking-wider">${
                  doctor.designation[0]
                }</p>
                <div class="flex flex-wrap gap-1 mt-2">${doctor.specialization.map(
                  (item) => {
                    return `<a class="text-fuchsia-400" href="#">${item}</a>`;
                  }
                )}</div>
                <p class="font-normal text-[10px] leading-[19px] mt-2">John is a highly skilled
                    software engineer with over 10 years of experience in web development. He
                    specializes in JavaScript and Python.</p>
            </div>
        </div>
        
        `;
  });
};

const get_DoctorsBy_Designation = async () => {
  const get_Designations = await fetch(
    "https://smart-care.onrender.com/doctor/designation/"
  );
  let designations = await get_Designations.json();
  console.log(designations);
  designations.forEach((designation) => {
    designation_ul.innerHTML += `
    <li><a onclick="get_Doctors_List('${designation.name}')">${designation.name}</a></li>
    `;
  });
};

const get_Doctors_BySpcialization = async () => {
  const get_Specialisation = await fetch(
    "https://smart-care.onrender.com/doctor/specialization/"
  );
  let specialisations = await get_Specialisation.json();
  console.log(specialisations);
  specialisations.forEach((specialisation) => {
    spcialization_ul.innerHTML += `
    <li><a onclick="get_Doctors_List('${specialisation.name}')">${specialisation.name}</a></li>
    `;
  });
};

document.getElementById("search-input").addEventListener("keydown", (event) => {
  if (event.key === "Enter") {
    event.preventDefault();
    const searchValue = event.target.value;
    get_Doctors_List(searchValue);
  }
});

get_slider_content();
get_Doctors_List("");
get_DoctorsBy_Designation();
get_Doctors_BySpcialization();


