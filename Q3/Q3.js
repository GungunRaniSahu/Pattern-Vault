let n = parseInt(prompt("Enter the number of rows for the diamond (half):"));

for (let i = 1; i <= n; i++) 
{
    let spaces = " ".repeat(n - i);

    let stars = "*".repeat(2 * i - 1);
    console.log(spaces + stars);
}

for (let i = n - 1; i >= 1; i--) 
{
    let spaces = " ".repeat(n - i);

    let stars = "*".repeat(2 * i - 1);
    console.log(spaces + stars);
}
