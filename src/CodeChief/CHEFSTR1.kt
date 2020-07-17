package CodeChief

import java.lang.Long.max
import java.lang.Long.min


fun main(args:Array<String>){
    var t = readLine()!!.toInt()
    while(t-->0){
        val n = readLine()!!.toInt()

        val arr = readLine()!!.split(" ").map { it.toLong() }.toLongArray()
        var sum=0L
        for(i in 0 until n-1) {

            sum += max(arr[i], arr[i + 1]) - min(arr[i], arr[i + 1]) - 1
            if(sum<0) sum = 0L
        }

        print("$sum \n")
    }
}