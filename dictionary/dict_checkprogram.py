lst={1:2,3:4,5:6}
n=int(input())
for i in lst.keys():
    if i%n==0:
        print(i)
        break
    