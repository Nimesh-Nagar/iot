function largest(num1, num2, num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    }
    else if (num2 > num3) {
        return num2;
    }
    else {
        return num3;
    }
}
console.log(largest(12, 34, 23));
