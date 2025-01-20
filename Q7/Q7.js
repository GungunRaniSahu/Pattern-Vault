const rows = parseInt(prompt("Enter the number of rows: "));
for (let i = 1; i <= rows; i++) 
{
    let row = " ".repeat(rows - i);
    for (let k = 1; k <= i; k++) 
    {
        row += k + " ";
    }
    console.log(row.trimEnd());
}
