package com.daksh.kotlinbasics

fun main(){
    //Scope and Shadowing
    myfun(5)
}
fun myfun(a:Int){
    var a =a
    a=3
    println("$a")
}




// Person("Daksh","Vyas")
/*Daksh()
var daksh:Daksh=Daksh(ThirdName = "Sanskar")
 var vyas=Daksh(SecondName = "divyanshu")

}
 */
/*
class Person (firstName:String ,secondName:String){
    init {
        println("First Name is $firstName and Last Name is $secondName")



    }
 */

/*val iphone=MobilePhone("ios","Apple","iphone 12")
val galaxyS20=MobilePhone("Android","Samsung","Galaxy S20")
val mateXS=MobilePhone("Android","Huawei","Mate XS")
}

class MobilePhone (osName:String,brand:String,model:String){
    init {
        println("os name is $osName brand is $brand and Model is $model")
    }
}

*/



/*class Daksh(FirstName:String="daksh",SecondName:String="vyas",ThirdName:String="KAndi"){
    init {
        println("$FirstName $SecondName $ThirdName")
    }

}
 */