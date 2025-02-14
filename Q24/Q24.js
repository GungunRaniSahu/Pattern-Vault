function printHollowPyramid(n) 
{
    let pyramid = "";
    for (let i = 1; i <= n; i++) 
    {
        let row = "";
        for (let j = 1; j <= (2 * n - 1); j++) 
        {
            if (j === n - i + 1 || j === n + i - 1 || i === n)
                row += "*";
            else
                row += " ";
        }
        console.log(row);
        pyramid += row + "\n";
    }
}

let n = 5;
printHollowPyramid(n);
