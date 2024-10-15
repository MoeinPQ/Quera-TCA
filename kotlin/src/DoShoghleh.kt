fun main(){
    val input = readLine().toString()
    val odd = arrayOf('y' ,'s' , 'p')
    val even = arrayOf('s' ,'d' ,'c')

    when {
        input[0] in odd -> {
            if(input[0] == 's' && input[1] == 'e'){
                print("bahman")
            }
            else if(input[0] == 's') print("perspolis")
            else print("bahman")

        }
        input[0] in even -> print("perspolis")
        else -> print("tatil")
    }

}

// solved