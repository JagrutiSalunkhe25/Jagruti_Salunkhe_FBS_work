var curr = "X";

function xo(element) {
    
    if (element.innerText === "X" || element.innerText === "O") {
        return;
    }
    element.innerText = curr;
    win();
    curr = (curr === "X") ? "O" : "X";
}

function win() {
  const cells = document.getElementsByClassName("tictac");

  
  if (
    cells[0].innerText !== "" &&
    cells[0].innerText === cells[1].innerText &&
    cells[1].innerText === cells[2].innerText
  ) {
    val = cells[0].innerText;
    playerWin()
  }

  
  else if (
    cells[3].innerText !== "" &&
    cells[3].innerText === cells[4].innerText &&
    cells[4].innerText === cells[5].innerText
  ) {
    val = cells[3].innerText;
    playerWin()
  }

 
  else if (
    cells[6].innerText !== "" &&
    cells[6].innerText === cells[7].innerText &&
    cells[7].innerText === cells[8].innerText
  ) {
    val = cells[6].innerText;
    playerWin()
  }

  
  else if (
    cells[0].innerText !== "" &&
    cells[0].innerText === cells[3].innerText &&
    cells[3].innerText === cells[6].innerText
  ) {
    val = cells[0].innerText;
    playerWin()
  }


  else if (
    cells[1].innerText !== "" &&
    cells[1].innerText === cells[4].innerText &&
    cells[4].innerText === cells[7].innerText
  ) {
    val = cells[1].innerText;
    playerWin()
  }

  
  else if (
    cells[2].innerText !== "" &&
    cells[2].innerText === cells[5].innerText &&
    cells[5].innerText === cells[8].innerText
  ) {
    val = cells[2].innerText;
    playerWin()
  }


  else if (
    cells[0].innerText !== "" &&
    cells[0].innerText === cells[4].innerText &&
    cells[4].innerText === cells[8].innerText
  ) {
    val = cells[0].innerText;
    playerWin()
  }

  
  else if (
    cells[2].innerText !== "" &&
    cells[2].innerText === cells[4].innerText &&
    cells[4].innerText === cells[6].innerText
  ) {
    val = cells[2].innerText;
    playerWin()
  }
}

function playerWin()
{
    alert("Player " + val + " wins!");
    resetBoard();
}

function resetBoard() {
    const cells = document.getElementsByClassName("tictac");
    for (let i = 0; i < cells.length; i++) {
        cells[i].innerText = "";
    }
    curr = "X"; 
}
