const n = parseInt(prompt("Enter the size of the checkerboard:"));

for (let i = 0; i < n; i++) 
{
    let row = "";
    for (let j = 0; j < n; j++) 
    {
        row += (i + j) % 2 === 0 ? "* " : "  ";
    }
    console.log(row); 
}
