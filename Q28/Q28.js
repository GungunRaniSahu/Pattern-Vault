for (let i = 0; i < 5; i++) {
    let row = "";
    for (let j = 0; j < 5; j++) {
        row += (j === 0 || j === 4 || i === 0 || i === 4) ? (i + 1) : "0";
    }
    console.log(row);
}
