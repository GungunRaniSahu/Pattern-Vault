const n = parseInt(prompt("Enter the number of rows: "));

for (let i = n; i >= 1; i--) 
{
    let spaces = " ".repeat(n - i);
    
    let numbers = "";
    for (let j = i; j >= 1; j--) 
    {
        numbers += j + " ";
    }

    console.log(spaces + numbers);
}
