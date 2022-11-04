package com.daksh.kotlinbasics

data class User(val id:Long,var name: String,val number:Long)
fun main(){
    val user1=User(1,"Daksh",9084938499)
    user1.name="Daksh"
    val user2=User(1,"Micheal",9403920239)
    println(user1.equals(user2))
    val updatedlist=user1.copy(name = "Denis Pajuto")
    println(user1)
    println(updatedlist)
    println(updatedlist.component1())
    println(updatedlist.component2())
    println(updatedlist.component3())
    val(id,name,numbe)=updatedlist
    println("id=$id,name=$name,number=$numbe")



}