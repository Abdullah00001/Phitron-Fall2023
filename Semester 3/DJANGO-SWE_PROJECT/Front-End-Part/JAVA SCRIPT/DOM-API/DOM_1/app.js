const likebtn = document.getElementById("likeBtn");
const dislikebtn = document.getElementById("dislikeBtn");
const likecnt = document.getElementById("likeCount");
const dislikescnt = document.getElementById("DisLikeCount");
const cmntICON = document.getElementById("cmntIcon");
const commentBox = document.getElementById("cmntBox");
const cmntINPUT = document.getElementById("cmntinput");
const cmntSUBMIT = document.getElementById("cmntsubmit");
const cmnts = document.getElementById("comments");
const cmntcnt = document.getElementById("cmntCount");

let likes = null;
let dislikes = null;
/* let cmntsList = []; */

likebtn.addEventListener("click", () => {
  likes = parseInt(likecnt.innerText);
  likes += 1;
  likecnt.innerText = likes;
});

dislikebtn.addEventListener("click", () => {
  dislikes = parseInt(dislikescnt.innerText);
  dislikes += 1;
  dislikescnt.innerText = dislikes;
  likes = parseInt(likecnt.innerText);
  if (likes > 0) likes -= 1;
  likecnt.innerText = likes;
});

cmntICON.addEventListener("click", () => {
  commentBox.style.display = "block";
});

cmntSUBMIT.addEventListener("click", () => {
  /* cmntsList.push({ cmnt: cmntINPUT.value }); */
  const cmnt = cmntINPUT.value;
  const li = document.createElement("li");
  li.innerText = cmnt;
  li.style.cssText =
    "border: 1px solid lightblue;padding: 10px;font-size: 30px;list-style:none;border-radius:10px;margin-bottom:5px;";
  let cntcmnt = parseInt(cmntcnt.innerText);
  cntcmnt += 1;
  cmntcnt.innerText = cntcmnt;
  cmnts.appendChild(li);
  cmntINPUT.value = "";
});

/* cmntsList.map((val) => {
  const li = document.createElement("li");
  li.innerText = val.cmnt;
  li.style.cssText =
    "border: 1px solid lightblue;padding: 8px;font-size: 18pxpx;";
  cmnts.appendChild(li);
}); */
