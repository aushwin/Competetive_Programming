package CodeChief

//https://www.codechef.com/problems/CLLCM

fun main(args:Array<String>){
    var t = readLine()!!.toInt()
    while(t-->0){
        var x = readLine()!!.toInt()
        var arr = readLine()!!.trimEnd().split(" ").map(String::toInt).toIntArray()
        var mult = 1
        arr.forEach {
            mult *= it
        }
        if(mult%2 ==0){
            print("NO\n")
        }
        else print("YES\n")
    }
}