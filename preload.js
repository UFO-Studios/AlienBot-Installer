window.addEventListener("DOMContentLoaded", () => {
  const random = Math.floor(Math.random() * 10) + 1;
  console.log(random);
  if (random == 1) {
    document.getElementById("show").textContent = "GENERAL KENOBI";
  }

  document.getElementById("appsForm").addEventListener("submit", (e) => {
    e.preventDefault();

    const selectedApp = e.target[0].value;

    document.getElementById(
      "download"
    ).src = `https://github.com/UFO-Studios/AlienBot-${selectedApp}/archive/refs/heads/main.zip`;

    alert(`AlienBot-${selectedApp} has been downloaded!`);
  });
});
