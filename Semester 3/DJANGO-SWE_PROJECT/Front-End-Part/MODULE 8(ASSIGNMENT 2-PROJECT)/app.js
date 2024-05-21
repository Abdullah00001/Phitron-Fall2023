const searchField = document.getElementById("searchFieldID");
const searchBtn = document.getElementById("searchBtnID");
const usersDirectory = document.getElementById("defaultUsers");
const userGROUP = document.getElementById("inGroup");
const userCnt = document.getElementById("memberscnt");
const toggleGroup = document.getElementById("toggleBtn");
const viewModal = document.getElementById("playerDeatils");
const Home = document.getElementById("homeBtn");
const loadDefault = async (searchValue) => {
  const reqData = await fetch(
    `https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${searchValue}`
  );
  let res = await reqData.json();
  if(res.player===null){
    usersDirectory.innerHTML +=`
    <h1>No Data Found With "${searchValue}"</h1>
    `
  }
  res.player.slice(0, 10).map(
    (user) =>
      (usersDirectory.innerHTML += `
    <div class="userCard">
    <div class="profileImg">
      <img
        src="${
          user.strThumb
            ? user.strThumb
            : "https://st3.depositphotos.com/9998432/13335/v/450/depositphotos_133351928-stock-illustration-default-placeholder-man-and-woman.jpg"
        }"
        alt=""
      />
    </div>
    <div class="cardcontent">
      <h3>
        Name :
        <span style="font-weight: normal">${user.strPlayer.slice(0, 18)}</span>
      </h3>
      <h3>
        Nationalty :
        <span style="font-weight: normal">${user.strNationality}</span>
      </h3>
      <h3>
        Team :
        <span style="font-weight: normal">${user.strTeam}</span>
      </h3>
      <h3>
        Sports : <span style="font-weight: normal">${user.strSport}</span>
      </h3>
    </div>
    <div class="cardbtns" id="cardBtns">
      <button onClick={addGroup(${user.idPlayer},this)}>Add To Group</button>
      <button onClick={viewDetails(${user.idPlayer})}>View Details</button>
    </div>
  </div>
    `)
  );
};
loadDefault("");

Home.addEventListener("click", () => {
  window.location.reload()
});

searchBtn.addEventListener("click", () => {
  usersDirectory.innerHTML = "";
  const searchVal = searchField.value;
  /* const searchPlayer = async (val) => {
    const searchReq = await fetch(
      `https://www.thesportsdb.com/api/v1/json/3/searchplayers.php?p=${val}`
    );
    let res = await searchReq.json();
    console.log(res);
  };
  searchPlayer(searchVal); */
  searchVal
    ? loadDefault(searchVal)
    : `${(alert("Please Insert A Name"), loadDefault(""))}`;
});

/* ===========================
        ADD TO GROUP
==============================*/

let flag = 0;
const addGroup = (userID, button) => {
  const userObj = async (userID) => {
    const userObjrec = await fetch(
      `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${userID}`
    );
    let userObjRes = await userObjrec.json();

    if (flag < 11) {
      flag += 1;
      button.innerText = "PLayer Added";
      button.disabled = true;
      button.style.backgroundColor = "rgba(128, 128, 128, 0.74)";
      const grpCNT = parseInt(userCnt.innerText);
      userCnt.innerText = (grpCNT + 1).toString();
      const selectedplayer = userObjRes.players[0];
      userGROUP.innerHTML += `
    <div class="groupMembers">
    <img
      src="${
        selectedplayer.strThumb
          ? selectedplayer.strThumb
          : "https://st3.depositphotos.com/9998432/13335/v/450/depositphotos_133351928-stock-illustration-default-placeholder-man-and-woman.jpg"
      }"
      alt=""
    />
    <div class="membersName">
      <h3 style="font-weight: normal">${selectedplayer.strPlayer}</h3>
      <h5>${selectedplayer.strTeam}</h5>
      <h5>${selectedplayer.strNationality}</h5>
    </div>
  </div>
    `;
    } else {
      alert("You Cant Add More Than 11");
      /* const Btnparent=document.getElementById("cardBtns")
      Btnparent.innerHTML=""
      Btnparent.innerHTML+=`
      <button disabled class="disabledaddgroup">Group</button>
      <button>View Details</button>
      ` */
    }
  };
  userObj(userID);
};

toggleGroup.addEventListener("click", () => {
  if (userGROUP.style.visibility === "hidden") {
    userGROUP.style.visibility = "visible";
  } else {
    userGROUP.style.visibility = "hidden";
  }
});

/* const togleBtnClose = document.getElementById("userGroup2");

togleBtnClose.addEventListener("click", () => {
  userGROUP.style.visibility = "hidden";
  togleBtnClose.id = "toggleBtn";
}); */

/* Modal Functionaly */

const viewDetails = (userID) => {
  viewModal.style.display = "block";
  const userObj = async (user_ID) => {
    const reqData = await fetch(
      `https://www.thesportsdb.com/api/v1/json/3/lookupplayer.php?id=${user_ID}`
    );
    let resData = await reqData.json();
    const userInfo = resData.players[0];
    viewModal.innerHTML += `
        <div class="modalInner">
        <div class="img-icon">
          <div class="close-icon">
            <i onClick={closeBtn()} style="color: #543310;" class="fa-solid fa-circle-xmark"></i>
          </div>
        </div>
        <img
          src="${
            userInfo.strThumb
              ? userInfo.strThumb
              : "https://st3.depositphotos.com/9998432/13335/v/450/depositphotos_133351928-stock-illustration-default-placeholder-man-and-woman.jpg"
          }"
          alt=""
        />
        ${
          userInfo.strPlayer &&
          `<h3>
        Name :
        <span style="font-weight: normal"
          >${userInfo.strPlayer}</span
        >
      </h3>`
        }
      ${
        userInfo.strNationality &&
        `<h3>
      Nationalty :
      <span style="font-weight: normal">${userInfo.strNationality}</span>
    </h3>`
      }
      ${
        userInfo.dateBorn &&
        `<h3>
      DateOfBirth :
      <span style="font-weight: normal">${userInfo.dateBorn}</span>
    </h3>`
      }
      ${
        userInfo.strTeam &&
        `<h3>
      Team :
      <span style="font-weight: normal">${userInfo.strTeam}</span>
    </h3>`
      }
      ${
        userInfo.strSport &&
        `<h3>
      Sports :
      <span style="font-weight: normal">${userInfo.strSport}</span>
    </h3>`
      }
        
        ${
          userInfo.strWage &&
          `<h3>
        Income :
        <span style="font-weight: normal">${userInfo.strWage}</span>
      </h3>`
        }
        ${
          userInfo.strGender &&
          `<h3>
        Gender :
        <span style="font-weight: normal">${userInfo.strGender}</span>
      </h3>`
        }
        ${
          userInfo.strPosition &&
          `<h3>
        Playing Position :
        <span style="font-weight: normal">${userInfo.strPosition}</span>
      </h3>`
        }
        
        <div class="socialMedia">
        ${
          userInfo.strFacebook &&
          `<a href="https://${userInfo.strFacebook}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-facebook" ></i></a>`
        }
        ${
          userInfo.strInstagram &&
          `<a href="https://${userInfo.strInstagram}" target="_blank" rel="noopener noreferrer" ><i class="fa-brands fa-instagram"></i></a>`
        }
          
          ${
            userInfo.strTwitter &&
            `<a href="https://${userInfo.strTwitter}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-twitter"></i></a>`
          }
          
          ${
            userInfo.strYoutube &&
            `<a href="https://${userInfo.strYoutube}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-youtube"></i></a>`
          }
          
          ${
            userInfo.strWebsite &&
            `<a href="https://${userInfo.strWebsite}" target="_blank" rel="noopener noreferrer"><i class="fa-brands fa-edge"></i></a>`
          }
          
        </div>
        <p>
        ${userInfo.strDescriptionEN && `${userInfo.strDescriptionEN}`}
        </p>
      </div>
    `;
  };
  userObj(userID);
};

const closeBtn = () => {
  viewModal.style.display = "none";
};
