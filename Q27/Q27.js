function printAlternatingPyramid(n) {
    for (let i = 1; i <= n; i++) {
        let line = " ".repeat(n - i);
        let symbol = i % 2 === 1 ? "*" : "#";
        line += (symbol + " ").repeat(i);
        console.log(line);
    }
}

const n = parseInt(prompt("Enter the number of rows: "));
printAlternatingPyramid(n);
