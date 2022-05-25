dict={}
n=int(input())
for i in range(0,n):
    k=int(input())
    v=int(input())
    dict.update({k:v})
    print(dict.keys())
    print(sum(dict.keys()))