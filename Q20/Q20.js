let n = parseInt(prompt("Enter the size of the matrix: "));
let matrix = Array.from({ length: n }, () => Array(n).fill(0));

let left = 0, right = n - 1, top = 0, bottom = n - 1;
let num = 1;

while (left <= right && top <= bottom) 
{
    for (let i = left; i <= right; i++) 
    {
        matrix[top][i] = num++;
    }
    top++;

    for (let i = top; i <= bottom; i++) 
    {
        matrix[i][right] = num++;
    }
    right--;

  
    if (top <= bottom) 
    {
        for (let i = right; i >= left; i--) 
        {
            matrix[bottom][i] = num++;
        }
        bottom--;
    }

    if (left <= right) 
    {
        for (let i = bottom; i >= top; i--) 
        {
            matrix[i][left] = num++;
        }
        left++;
    }
}


for (let row of matrix) 
{
    console.log(row.join(" "));
}
