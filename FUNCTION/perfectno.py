def per(a):
    sum=0
    for i in range(1,a):
      if(a%i==0):
          sum=sum+i
    
    return sum    
a=int(input())
if(a==per(a)):
    print("perfect no",a)
else:
    print("not perfect") 
    print(per(a))   


            

