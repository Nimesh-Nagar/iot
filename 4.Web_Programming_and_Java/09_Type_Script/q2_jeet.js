function arraySquare(arr) {
    for (var i = 0; i < arr.length; i++) {
        arr[i] = arr[i] * arr[i];
    }
    return arr;
}
var original_array = [4, 3, 6, 7, 8, 9, 10];
var squareArray = arraySquare(original_array);
console.log(squareArray);
