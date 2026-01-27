#Print pyramid or diamond like pattern in python

while 1:
    print("*** Menu Driven ***")
    print("Pyramid:1 \nDiamond:2 \nNumeric Pattern:3")
    ch=int(input("enter your choice:"))
    match ch:
       case 1:
             row=int(input("enter a no. of row:"))
             print("Pyramid of stars:1")
             print("Pyramid of numbers:2")
             print("Pyramid of alphabets:3")
             ch1=int(input("enter your choice:"))
             match ch1:
                case 1:
                 for i in range(1,row+1):
                   for j in range(0,row-i):
                     print(end=" ")
                   for k in range(0,i):
                     print(end="*")
                   for m in range(i-1,0,-1):
                     print(end="*")
                   print()
                case 2:
                 for i in range(1,row+1):
                   for j in range(0,row-i):
                     print(end=" ")
                   for k in range(0,i):
                     print(i,end="")
                   for m in range(i-1,0,-1):
                     print(i,end="")
                   print()
                case 3:
                 for i in range(1,row+1):
                   for j in range(0,row-i):
                     print(end=" ")
                   for k in range(0,i):
                     print(chr(64+i),end="")
                   for m in range(i-1,0,-1):
                     print(chr(64+i),end="")
                   print()
       case 2:
                print("Diamond of stars:1")
                print("Diamond of numbers:2")
                print("Diamond of alphabets:3")
                ch1=int(input("enter your choice:"))
                match ch1:
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
                    #this is code for part I
                   for i in range(1,row+1):
                      for j in range(0,row-i):
                        print(end=" ")
                      for k in range(0,i):
                        print(i,end="")
                      for m in range(i-1,0,-1):
                        print(i,end="")
                      print()
                    #this is code for part II
                   for i in range(1,row):
                      for j in range(0,i):
                        print(end=" ")
                      for k in range(0,row-i):
                        print(row-i,end="")
                      for m in range(row-i-1,0,-1):
                        print(row-i,end="")
                      print()
                 case 3:
                    #this is code for part I
                  for i in range(1,row+1):
                      for j in range(0,row-i):
                        print(end=" ")
                      for k in range(0,i):
                        print(chr(64+i),end="")
                      for m in range(i-1,0,-1):
                        print(chr(64+i),end="")
                      print()
                    #this is code for part II
                  for i in range(1,row):
                      for j in range(0,i):
                        print(end=" ")
                      for k in range(0,row-i):
                        print(chr(64+row-i),end="")
                      for m in range(row-i-1,0,-1):
                        print(chr(64+row-i),end="")
                      print()
       case 3:
          n=1
          for i in range(1,5):
            for j in range(5,0,-1):
              if j>i:
                print(end=" ")
              else:
                print(n,end=" ")
                n+=1
            print()




               
    
