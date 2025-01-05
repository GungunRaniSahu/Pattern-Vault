function pyramidPattern(rows) 
{
    for (let i = 1; i <= rows; i++) 
    {
        console.log(" ".repeat(rows - i) + "*".repeat(2 * i - 1));
    }
}

pyramidPattern(5);
