function operations(...arr):void {
    let min = arr[0]
    let max = arr[0]
    let total = 0
    for(var i = 0; i < arr.length; i++) {
        if(arr[i] < min) {
            min = arr[i]
        }
        if(arr[i] > max) {
            max = arr[i]
        }
        total += arr[i]
    }
    let average = total / arr.length
    console.log("The minimum value in the array is: " + min)
    console.log("The maximin value in the array is: " + max)
    console.log("The average value of the array is: " + average)
}

operations(6, 5, 3, 2, 4, 6, 7)