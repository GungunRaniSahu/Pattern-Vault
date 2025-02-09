function printPalindromePattern(n) 
{
    for (let i = 1; i <= n; i++) 
    {
        let row = "";
        for (let j = 1; j <= i; j++) row += j;
        for (let j = i - 1; j >= 1; j--) row += j;
        console.log(row);
    }
}

let n = parseInt(prompt());
printPalindromePattern(n);
