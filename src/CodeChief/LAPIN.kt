package CodeChief
import java.util.HashMap


fun main(args:Array<String>){
    var t = readLine()!!.toInt()
    while(t-->0){
        var flag = 0
        val s = readLine()!!
        val hmap = HashMap<Char,Int>()
        val hmap2 = HashMap<Char,Int>()
        if(s.length%2 ==0) {
            for (i in 0 until s.length / 2) {
                if (hmap[s[i]] == null) hmap[s[i]] = 1
                else hmap[s[i]] = hmap[s[i]]!!.plus(1)
            }
            for(i in s.length / 2 until s.length){
                if(hmap2[s[i]]==null) hmap2[s[i]] =1
                else hmap2[s[i]] = hmap2[s[i]]!!.plus(1)
            }
            for(i in 0 until s.length/2)
                if(hmap[s[i]]!=hmap2[s[i]]) {
                    print("NO")
                    flag++
                    break
                }
           if(flag==0) print("YES")
        }else
        { // garga
            for (i in 0 until s.length / 2) {
                if (hmap[s[i]] == null) hmap[s[i]] = 1
                else hmap[s[i]] = hmap[s[i]]!!.plus(1)
            }
            for(i in (s.length / 2)+1 until s.length){
                if(hmap2[s[i]]==null) hmap2[s[i]] =1
                else hmap2[s[i]] = hmap2[s[i]]!!.plus(1)
            }
            for(i in 0 until s.length/2)
                if(hmap[s[i]]!=hmap2[s[i]]) {
                    print("NO")
                    flag++
                    break
                }
           if(flag==0) print("YES")
        }





    }
    
}