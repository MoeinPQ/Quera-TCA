fun main(){
    print('c'.toInt())
    val n = readLine()!!.toInt()
    val listOfChars = mutableListOf<String>()
    for (i in 1..2*n){
        listOfChars.add(readLine()!!.toString())
    }

    for (i in 0 until 2*n step 2){
        for(j in 1..listOfChars[i].length){

        }
    }
}