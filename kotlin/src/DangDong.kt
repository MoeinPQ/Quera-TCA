import java.util.*

fun main(){

    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt();
    val result = mutableListOf<Int>()
    for (i in 0 until t){
        val n = scanner.nextDouble()
        val s = scanner.nextInt()
        val a = scanner.nextInt()
        if(a >= s){
            result.add(-1)
            continue
        }
        val SMinezA = s-a
        val divideResult : Double = SMinezA/n
        val divideRInt : Int = divideResult.toInt()
        if(divideRInt.toDouble() == divideResult)
            result.add(divideRInt)
        else result.add(-1)
    }
    result.forEach { println(it) }

}

// solved