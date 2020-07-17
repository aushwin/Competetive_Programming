package HackerRank.Interview._1Warm_Up

fun main(args:Array<String>){
    var n = readLine()!!.toInt()
    var arr = readLine()!!.trimEnd().split(" ").map(String::toInt).toIntArray()
    arr.sort()
    var pair = 0
    var i=0
    while(i<n-1){
        if(arr[i]==arr[i+1]){
            pair++
            i++
        }
        i++
    }
    print(pair)
}