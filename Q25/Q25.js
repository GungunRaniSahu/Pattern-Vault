function printHollowPyramid(rows) {
    for (let i = 1; i <= rows; i++) {
        let str = ' '.repeat(rows - i);
        for (let j = 0; j < 2 * i - 1; j++) {
            if (i === rows || j === 0 || j === 2 * i - 2)
                str += '*';
            else
                str += ' ';
        }
        console.log(str);
    }
}

const rows = parseInt(prompt("Enter the number of rows: "), 10);
printHollowPyramid(rows);
