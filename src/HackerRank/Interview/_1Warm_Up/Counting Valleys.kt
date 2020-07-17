package HackerRank.Interview._1Warm_Up

//https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup&h_r=next-challenge&h_v=zen

fun main(args:Array<String>){
    var n = readLine()!!.toInt()
    val s = readLine()!!
    var flg=0
    var seaflag = 0
    var vllyCount = 0
    s.forEach {
        if(it=='U') flg++
        else flg--

        if(flg==0) seaflag=0

        if(flg<0 && seaflag==0) {
            vllyCount++
            seaflag++

        }
    }
    print(vllyCount)
}