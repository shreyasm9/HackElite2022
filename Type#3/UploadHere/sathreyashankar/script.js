function validate()
{
var username=document.getElementById("username").value;
var password=document.getElementById("password").value;
if(username=="user"&& password=="user")
{
    alert("login succesfully");
    return false;

}
else
{
    alert("login failed");
}


}