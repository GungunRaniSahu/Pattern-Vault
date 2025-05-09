function printBinaryCheckerboard(n) {
    for (let i = 0; i < n; i++) {
        let row = "";
        for (let j = 0; j < n; j++) {
            row += (i + j) % 2 + " ";
        }
        console.log(row.trim());
    }
}

const prompt = require("prompt-sync")();
const size = parseInt(prompt("Enter the size of the checkerboard: "));
printBinaryCheckerboard(size);
