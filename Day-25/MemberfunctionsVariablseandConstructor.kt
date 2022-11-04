package com.daksh.kotlinbasics
/*
fun main(){
var Daksh=Person("Daksh","Vyas",15)
var Ayush=Person("Ayush","Talesra")
Daksh.hobby="Learning"
Daksh.age=16
Daksh.statehobby()



}

class Person (firstName:String,lastName:String){
    var age:Int?=null
    var hobby:String ="Playing esports"
    var firstName:String?=null

    init {
        this.firstName=firstName
        print("Initialized a new person's object whose name is $firstName$lastName")
    }
    fun statehobby(){
        print("$firstName\' hobby is $hobby")
    }
    constructor(firstName: String,lastName: String,age:Int=19):this(firstName,lastName){
        this.age=age

        println("$firstName,$lastName,$age")
    }

}

 */

fun main(){
var Porsch=Car()
    Porsch.owner="Daksh"
println("${Porsch.mybrand}")
}
class Car(){
    lateinit var owner:String

    val mybrand:String ="BMW"
    get(){
        return field.lowercase()
    }
    var myModel:String = "M5"
    private set
    var myMaxSpeed :Int =250
    get()=field
    set(value){
        field =if(value>0)value else throw IllegalArgumentException("Max speed should be greater than 0")
    }
    init {
        this.myModel="M3"
        this.owner="Daksh"
        print("Owner name is $owner")
    }
}