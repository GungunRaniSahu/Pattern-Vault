function printHollowRhombus(n) {
    let result = "";
    for (let i = 1; i <= n; i++) {
        result += " ".repeat(n - i);
        for (let j = 1; j <= n; j++) {
            if (i === 1 || i === n || j === 1 || j === n) {
                result += "*";
            } else {
                result += " ";
            }
        }
        result += "\n";
    }
    console.log(result);
}

let n = 5;
printHollowRhombus(n);
