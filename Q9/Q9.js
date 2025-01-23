const n = parseInt(prompt("Enter the number of rows for the pyramid:"));

for (let i = 0; i < n; i++) 
{
    let row = "";

    row += " ".repeat(n - i - 1);

    for (let j = 0; j <= i; j++) 
    {
        row += String.fromCharCode(65 + j) + " ";
    }

    console.log(row);
}
