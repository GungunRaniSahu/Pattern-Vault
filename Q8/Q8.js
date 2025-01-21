const rows = parseInt(prompt("Enter the number of rows: "));
for (let i = rows; i >= 1; i--) 
{
    let row = " ".repeat(rows - i) + "*".repeat(2 * i - 1);
    console.log(row);
}
