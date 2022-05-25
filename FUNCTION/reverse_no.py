def rev(a):
    sum=0
    
    while a>0:
        n=a%10
        sum=sum*10+n
        a=a//10
    return sum 
  
b=int(input("enter a no:" ))
rev=rev(b)
print(rev)

    



    