import java.util.Scanner

fun main(){
    val scanner = Scanner(System.`in`)
    val birthDate = scanner.nextInt()
    val chosenNumber = scanner.next().single()
    var result = 0;
    val factor = factorial(birthDate)
    val factorToString = factor.toString()
    for (i in 0 until factorToString.length-2){

        if(chosenNumber == factorToString[i]){
            result++
        }
    }
//    println(factor)
    print(result)
}

fun factorial(p:Int): Long {
    var k : Long = 1L
    for (i in p downTo 1){
        k*=i
    }
    return k
}