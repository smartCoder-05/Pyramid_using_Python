#Print pyramid or diamond like pattern in python

while 1:
    print("*** Menu Driven ***")
    print("Pyramid:1 \n Diamond:2")
  ch=int(input("enter your choice:"))
 row=int(input("enter a no of row:"))
 match ch:
     case 1:
         print("Pyramid of stars:1")
         print("Pyramid of alphabets:2")
         print("Pyramid of numbers:3")
         ch1=int(input("enter your choice:"))
        match c1:
            case 1:
#this is code for part I
 for i in range(1,row+1):
    for j in range(0,row-i):
        print(end=" ")
    for k in range(0,i):
        print(end="*")
    for m in range(i-1,0,-1):
        print(end="*")
    print()
#this is code for part II
 for i in range(1,row):
    for j in range(0,i):
        print(end=" ")
    for k in range(0,row-i):
        print(end="*")
    for m in range(row-i-1,0,-1):
        print(end="*")
    print()
     case 2:
   for i in range(1,row+1):
    for j in range(0,row-i):
        print(end=" ")
    for k in range(0,i):
        print(chr(65+k),end="")
    for m in range(i-1,0,-1):
        print(chr(65+m),end="")
    print()
#this is code for part II
for i in range(1,row):
     for j in range(0,i):
        print(end=" ")
     for k in range(0,row-i):
        print(chr(65+k),end="")
     for m in range(row-i-1,0,-1):
        print(chr(65+m),end="")
     print()
    case 3:
        #this is code for part I
 for i in range(1,row+1):
    for j in range(0,row-i):
        print(end=" ")
    for k in range(0,i):
        print(end="*")
    for m in range(i-1,0,-1):
        print(end="*")
    print()
#this is code for part II
 for i in range(1,row):
    for j in range(0,i):
        print(end=" ")
    for k in range(0,row-i):
        print(end="*")
    for m in range(row-i-1,0,-1):
        print(end="*")
    print()
    
    case 2:
         for i in range(1,row+1):
    for j in range(0,row-i):
        print(end=" ")
    for k in range(0,i):
        print(end="*")
    for m in range(i-1,0,-1):
        print(end="*")
    print()
    
