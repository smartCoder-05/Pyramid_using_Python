#Python program to calculate the HCF or the GCD and the LCM  of given numbers
x=int(input("enter the first value:"))
y=int(input("enter the second value:"))

#This is the code for calculating highest common factor or greatest common divisor
'''
Factor is define as a number which is complete divisible of a its dividend means remainder should be zero.
e.g 1,2,4 are the perfect factors of 4, because 4 can be divisible by 1,2,4 and its remainder would be 0.
find the greatest number which is a common factor/divisor of given values and that number would be divisible 
of both numbers called as HCF or GCD. In simple word, both given values are present in same number table.
both numbers=dividend
result no=divisor
'''

#this is python code for print prime factors of given number
'''i=1
a=[]
while i<=x:
    if x%i==0:
        a.append(i)
    i+=1
print(f"factors of {x} is {a}")'''

'''num1=x
num2=y
while x!=y:
    rem=x%y
    if rem==0:
        print(f"GCD of {num1} and {num2} is {y}")
        break
    else:
        x=y
        y=rem'''

#This is the code for calculating least common multiplier
'''
The least common multiplier for given two numbers means, we are going to find the value which present 
in both two numbers table.In simple word,
both numbers=divisor
result no=dividend
'''
i=2
while i%x!=0 or i%y!=0:
    i+=1
print(f"LCM of {x} and {y} is {i}")
'''i=2
a=[]
while x!=0:
   if x%i==0:
      a.append(i)
      x=int(x/i)
      i=2
   else:
      i+=1      
print(a)
'''







