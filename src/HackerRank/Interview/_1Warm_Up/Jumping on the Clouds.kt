package HackerRank.Interview._1Warm_Up
//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup&h_r=next-challenge&h_v=zen

fun main(args:Array<String>){
    val n = readLine()!!.toInt()
    val arr = readLine()!!.trimEnd().split(" ").map(String::toInt).toIntArray()
    var count=0
    var i=0
    while(i<n){
        if(arr[i]==0){
            if( i+2 < n&&arr[i+2]!=1 ) {
                count++
                i+=2
            }else {
                count++
                i++
            }
        }
        else i++
    }
    print(count)
}
