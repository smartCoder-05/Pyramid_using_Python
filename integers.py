#This is a python program to perform arithmatic operations on Integer numbers
while 1:
  a=int(input("enter a number1:"))
  b=int(input("enter a number2:"))
  print("*** MENU DRIVEN ***")
  print("Addition of Intergers:1 \nSubtraction of Integers:2 \nMultiplication of Integers:3 \nDivision of Integers:4")
  ch=int(input("enter your choice:"))
  match ch:
      case 1:
          c=a+b
          print("=",c)
      case 2:
          c=a-b
          print("=",c)
      case 3:
          c=a*b
          print("=",c)
      case 4:
          c=a/b
          print("=",c)