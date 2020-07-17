package HackerRank.Interview._1Warm_Up

fun main(args:Array<String>){
    var s = readLine()!!
    var n = readLine()!!.toLong()
    var hmap = HashMap<Char,Int>()
    hmap['a']=0
    s.forEach {
          if(it=='a') hmap['a'] = hmap['a']!!.plus(1)
    }
    print("freq of a : ${hmap['a']} \n")
    if(n%s.length != 0L && hmap['a']!=0) {
        print(n/s.length * hmap['a']!! + 1)
    }else
        print(n/s.length * hmap['a']!!)
}