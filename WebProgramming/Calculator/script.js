
str="";

function updateString(op)
{
 str=str+op;
 document.getElementById("inp").value=str;
}



function calculate()
{
inp1=document.getElementById("inp");
str1= inp1.value;
res=eval(str1);
inp1.value=res;
str=res;
document.getElementById("inp").innerHTML=inp1.value;
}

function ac()
{
  str="";
  document.getElementById("inp").value=str;
}

function back()
{
  str=str.slice(0,-1);
  document.getElementById("inp").value=str;
}