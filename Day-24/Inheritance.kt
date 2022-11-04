package com.daksh.kotlinbasics

import java.time.temporal.TemporalAmount

open class Cars(val name:String,val brand:String){
    open var range:Double=0.0
    fun extendRange(amount: Double){
        if (amount>0)range+=amount
    }
    open fun Drive(distance:Double){
        println("Drove for $distance KM")
    }

}
class ElectricCar(name: String,brand: String,batteryLife:Double):Cars(name,brand){
    var chargerType="Type1"
    override var range=batteryLife*6
    override fun Drive(distance: Double) {
       println("Drove for $distance KM on electricity")
    }
    fun Drive(){
        println("Drove for $range KM on electricity")
    }

}

fun main(){

    var AudiA2=Cars("A3","Audi")
    var teslas=ElectricCar("S-model","Tesla",85.0)
    teslas.chargerType="Type2"
    teslas.extendRange(200.0)
    teslas.Drive()

    AudiA2.Drive(200.0)
    teslas.Drive(200.0)

}