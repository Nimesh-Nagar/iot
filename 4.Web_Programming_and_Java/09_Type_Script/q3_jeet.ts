function strJoin(sep:string, ...arr):string {
    var joined = ""
    for(var i = 0; i < arr.length; i++){
        joined += arr[i]
        if(i != arr.length-1){
            joined += sep
        }
    }
    return joined
}

console.log(strJoin("#", "Vishwajit", "Payal", "Ganesh"))