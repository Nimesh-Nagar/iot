function strJoin(sep) {
    var arr = [];
    for (var _i = 1; _i < arguments.length; _i++) {
        arr[_i - 1] = arguments[_i];
    }
    var joined = "";
    for (var i = 0; i < arr.length; i++) {
        joined += arr[i];
        if (i != arr.length - 1) {
            joined += sep;
        }
    }
    return joined;
}
console.log(strJoin("#", "Vishwajit", "Payal", "Ganesh"));
