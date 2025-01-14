let rows = parseInt(prompt("Enter the number of rows:"));
for (let i = 1; i <= rows; i++) 
{
    let letter = 'A';
    for (let j = 1; j <= i; j++) 
    {
        process.stdout.write(letter + " ");
        letter = String.fromCharCode(letter.charCodeAt(0) + 1);
    }
    console.log();
}
