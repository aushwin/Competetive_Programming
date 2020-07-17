package CodeChief

fun main(args:Array<String>){
    var t = readLine()!!.toInt()
    while(t-->0){
        var n = readLine()!!.toInt()
        var cPoint=0L
        var mPoint=0L
        while(n-->0){
            var (chief,morty) = readLine()!!.trim().split(" ").map(String::toLong)
//            print(chief)
            var Csum = 0L
            var Msum=0L
            while (chief>0){
                Csum +=  chief % 10
                chief /= 10
            }
            while (morty>0){
                Msum +=  morty % 10
                morty /= 10
            }
            if(Csum>Msum) cPoint++
            else mPoint++
        }
        when {
            cPoint>mPoint -> print("0 $cPoint\n")
            cPoint<mPoint -> print("1 $mPoint\n")
            else -> print("2 $cPoint\n")
        }

    }

}