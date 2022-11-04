package com.daksh.kotlinbasics
fun main() {
    /*
    //immutable variable
    val my_Name="Frank"
    //TODO:Add new functionality
    /*this is
    a multiline
    comment
     */
    val myByte:Byte=1_2_4//3
    val  myShort:Short=1_2_3_45//5
    val myInt:Int=1_2_3_4_4_5_5_6_67//10
    val myLong:Long=1234567891011121314//19

    print("This is byte "+ myByte +"This is short"+myShort+"This is Int"+myInt+"This is long "+myLong)
    val myFloat=13.45f
    val myDouble=3.145558557566//15
    print("\n"+myDouble)


    for (i in 0..10000) {
        if (i == 9001)
            print("Its Over 9000")

    }

     */

   var  humidityLevel =80
    var humidity="humid"
    while(humidity=="humid")
    {
        humidityLevel-=5
        print("$humidityLevel")
        if(humidityLevel<60){
            println("Its comfy")
            humidity="comfy"
            print("$humidityLevel")
        }
    }



}

