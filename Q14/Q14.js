function pascalTriangle(rows) 
{
    for (let i = 0; i < rows; i++) 
    {
        let coef = 1;
        let output = " ".repeat(rows - i);
        for (let j = 0; j <= i; j++) {
            output += coef + " ";
            coef = coef * (i - j) / (j + 1);
        }
        console.log(output);
    }
}

pascalTriangle(5);
